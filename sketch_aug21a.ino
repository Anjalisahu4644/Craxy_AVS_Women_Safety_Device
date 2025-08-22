#include <SoftwareSerial.h>
#include <TinyGPS++.h>

#define SOS_BUTTON_PIN 5   
SoftwareSerial myGSM(8, 9); 
SoftwareSerial myGPS(4, 4); 

TinyGPSPlus gps;

void setup() {
  Serial.begin(9600);
  myGSM.begin(9600);
  myGPS.begin(9600);
  pinMode(SOS_BUTTON_PIN, INPUT_PULLUP);

  Serial.println("System Initialized...");
}

void loop() {
  while (myGPS.available() > 0) {
    gps.encode(myGPS.read());
  }

  
  if (digitalRead(SOS_BUTTON_PIN) == LOW) {
    Serial.println("SOS button pressed!");

    if (gps.location.isValid()) {
      double latitude = gps.location.lat();
      double longitude = gps.location.lng();

      Serial.println("Valid GPS location found. Preparing to send SOS...");
      
      
      myGSM.println("AT+CMGF=1");  
      delay(1000);
      myGSM.println("AT+CMGS=\"+917974742037\"");  
      delay(1000);
      myGSM.print("Help me! I am in danger. Location: ");
      myGSM.print("https://maps.google.com/?q=");
      myGSM.print(latitude, 6);
      myGSM.print(",");
      myGSM.print(longitude, 6);
      myGSM.write(26);  
      delay(1000);

      Serial.println("SOS message sent!");
    } else {
      Serial.println("Waiting for a valid GPS fix... Make sure GPS has clear sky view.");
    }

    delay(20000); 
  }
}
