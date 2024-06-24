// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPL3IxOG2IG"
#define BLYNK_DEVICE_NAME "home 56" 

#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); // parameter as int 
  if(s0 == HIGH)
  {    
    digitalWrite(D3,HIGH);
    Serial.println("D3 High");
    delay(10);
    }  
    if(s0 == LOW)
  {
    digitalWrite(D3,LOW);
    Serial.println("D3 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V1)
{
  int s1 = param.asInt(); // parameter as int 
  if(s1 == HIGH)
  {    
    digitalWrite(D4,HIGH);
    Serial.println("D4 High");
    delay(10);
    }  
    if(s1 == LOW)
  {
    digitalWrite(D4,LOW);
    Serial.println("D4 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V2)
{
  int s2 = param.asInt(); // parameter as int 
  if(s2 == HIGH)
  {          digitalWrite(D6,HIGH);
    Serial.println("D6 High");
    delay(10);
    }  
    if(s2 == LOW)
  {
    digitalWrite(D6,LOW);
    Serial.println("D6 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V3)
{
  int s3 = param.asInt(); // parameter as int 
  if(s3 == HIGH)
  {    
    digitalWrite(D7,HIGH);
    Serial.println("D7 High");
    delay(10);
    }  
    if(s3 == LOW)
  {
    digitalWrite(D7,LOW);
    Serial.println("D7 Low");
    delay(10);
    }  
}

void setup()
{
  Serial.begin(9600);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  
  BlynkEdgent.begin();
}

void loop() {
    BlynkEdgent.run();
}
