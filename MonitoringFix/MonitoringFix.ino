#include "BluetoothSerial.h"
BluetoothSerial SerialBT;

// Include the libraries we need (DB18B20)
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

// Hasil Output
#define ledM 5
#define ledH 18
#define ledB 21

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP Kelompok 1");
  Serial.println("ESP32 Siap");

  // Deklarasi Output
  pinMode(ledM,OUTPUT);
  pinMode(ledH,OUTPUT);
  pinMode(ledB,OUTPUT);

  // Memulai DS18B20
  sensors.begin();

}

void loop() {
  // call sensors.requestTemperatures() to issue a global temperature 
  // request to all devices on the bus
  sensors.requestTemperatures(); // Send the command to get temperatures

  // We use the function ByIndex, and as an example get the temperature from the first sensor only.
  float tempC = sensors.getTempCByIndex(0);

  Serial.print("Suhu : ");
  Serial.print(tempC);
  Serial.print(" ");
  delay(1000);

  // Komunikasi Bluetooth
  SerialBT.print(tempC);
  SerialBT.println(";");
  if(tempC < 22){
    // Config Output
    digitalWrite(ledM, LOW);
    digitalWrite(ledH, LOW);
    digitalWrite(ledB, HIGH);
    Serial.println("Dingin");
    
  } else if (tempC >= 22 && tempC <=30){
    // Config Output
    digitalWrite(ledM, LOW);
    digitalWrite(ledH, HIGH);
    digitalWrite(ledB, LOW);
    Serial.println("Normal");
    
  } else{
    // Config Output
    digitalWrite(ledM, HIGH);
    digitalWrite(ledH, LOW);
    digitalWrite(ledB, LOW);
  }

}
