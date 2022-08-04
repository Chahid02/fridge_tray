#include <Arduino.h>

#include <Wire.h>
#include "http_server.h"

void setup()
{
    Serial.begin(9600);
    Serial.println("--------------------- SMART FRIDGE ---------------------");

    delay(5000);
    create_webserver(ssid, passwd);
}

void loop()
{
}