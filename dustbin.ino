#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const char* ssid = "Your WiFi SSID"; // Your WiFi SSID
const char* password = "Your WiFi password"; // Your WiFi password

#define BLYNK_TEMPLATE_ID "TMPL3Egl1aGgK"
#define BLYNK_TEMPLATE_NAME "distance"
#define BLYNK_AUTH_TOKEN "QNTbDwTQZv8W2PKvj7EAF8w4h1TFKrS8"

#define echoPin D2 // Echo pin of the ultrasonic sensor
#define trigPin D1 // Trigger pin of the ultrasonic sensor

BlynkTimer timer;

void setup() {
  Serial.begin(9600);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  timer.setInterval(2000L, sendUltrasonicData); // Send data every 2 seconds
}

void loop() {
  Blynk.run();
  timer.run();
}

void sendUltrasonicData() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration  ; // Calculate distance in centimeters
  
  Serial.print("Distance: ");
  Serial.println(distance);
  
  //Blynk.virtualWrite(V5, distance); // Send distance data to Blynk, change V5 to the desired virtual pin
}
