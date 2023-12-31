#ifndef _HTTP_REQUEST_H
#define _HTTP_REQUEST_H

#include "main.h"

/* Constants that aren't configurable in menuconfig */
#define WEB_SERVER "api.thingspeak.com"
#define WEB_PORT "80"
#define WEB_PATH "/"

void http_post_task(void *pvParameters);



#endif
