esp8266-node-mqtt
=================

When message arrive switch level on GPIO2.

In config.c mqtt_host and mqtt_port are hardcoded. For me user_config.h don't work, don't know why, reported. In user_main.c wifi ssid and password alse hardcoded.


INSTALL 
=======
I'm using https://github.com/pfalcon/esp-open-sdk, with make STANDALONE=n, then change this VENDOR_SDK = 0.9.4 in esp-open-sdk Makefile, then should work. :)

