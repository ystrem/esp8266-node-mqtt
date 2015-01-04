#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_
#include "user_interface.h"

#define CFG_HOLDER	0x00FF55A2
#define CFG_LOCATION	0x3C

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST	"192.168.88.237" //or "mqtt.domain.com"
#define MQTT_PORT	1883
#define MQTT_BUF_SIZE	1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"DVES_%08X"
#define MQTT_USER			"DVES_USER"
#define MQTT_PASS			"DVES_PASS"

#define STA_SSID "NufNuf"
#define STA_PASS "1234567890"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/
#define MQTT_CONNTECT_TIMER 	5 	/**/

#define CLIENT_SSL_ENABLE
#endif
