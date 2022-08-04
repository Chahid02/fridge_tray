#ifndef HTTP_SERVER
#define HTTP_SERVER


extern char* ssid;
extern char* passwd;

/**
 * @brief Create a webserver object
 *
 * @param ssid
 * @param passwd
 * @return uint8_t
 */

uint8_t create_webserver(char *ssid, char *passwd);



#endif