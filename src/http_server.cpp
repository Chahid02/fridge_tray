
/**
 * @file Untitled-1
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <ESP8266WiFi.h>
#include "ESPAsyncWebServer.h"
#include <inttypes.h>
#include "http_server.h"

char *ssid = "SMART_FRIDGE_AP";
char *passwd = "tamotua_red!?";

uint8_t create_webserver(char *ssid, char *passwd)
{
    AsyncWebServer server(80);
    Serial.print("Setting AP (Access Point)… ");
    Serial.println(ssid);

    WiFi.softAP(ssid, passwd);

    IPAddress Ip(192, 168, 1, 0);
    IPAddress NMask(255, 255, 255, 0);

    WiFi.softAPConfig(Ip, Ip, NMask);
    IPAddress IP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(IP);
    return 0;
}