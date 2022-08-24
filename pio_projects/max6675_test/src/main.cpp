#include <Arduino.h>

#include "max6675.h"

int thermoDO_1 = 19;
int thermoCLK_1 = 18;
int thermoCS_1 = 5;

int thermoDO_2 = 12;
int thermoCLK_2 = 14;
int thermoCS_2 = 13;

MAX6675 thermocouple_1(thermoCLK_1, thermoCS_1, thermoDO_1);
MAX6675 thermocouple_2(thermoCLK_2, thermoCS_2, thermoDO_2);

void setup() {
  Serial.begin(9600);

  Serial.println("MAX6675 test");
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp
  
   Serial.print("T1 = "); 
   Serial.println(thermocouple_1.readCelsius());
   Serial.print("T2 = "); 
   Serial.println(thermocouple_2.readCelsius());
//   Serial.print("F = ");
//   Serial.println(thermocouple.readFahrenheit());
 
   // For the MAX6675 to update, you must delay AT LEAST 250ms between reads!
   delay(5000);
}