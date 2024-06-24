#include <dummy.h>

#include <dummy.h>

#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>

/*
   EEPROM Clear

   Sets all of the bytes of the EEPROM to 0.
   This example code is in the public domain.

*/

#include <EEPROM.h>
int val = 4096; // write the size of EEPROM of your board in bytes (from 0 to all 4096 bytes of the EEPROM)
// if Arduino UNO then replace it with 512
void setup() {
  Serial.begin(9600);
  EEPROM.begin(val); 
  for (int i = 0; i < val; i++) {
    EEPROM.write(i, 0);
    Serial.println(i);
  }

  EEPROM.end();
  Serial.println("EEPROM Clear");
}

void loop() {
}
