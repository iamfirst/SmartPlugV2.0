/*
 * user_common.h
 *
 *  Created on: 2018��10��21��
 *      Author: lenovo
 */

#ifndef __USER_COMMON_H__
#define __USER_COMMON_H__


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


#include "user_type.h"
#include "user_log.h"
#include "user_config.h"


#include "user_wifi.h"
#include "user_led.h"
#include "user_plug.h"
#include "user_http.h"
#include "user_web.h"
#include "user_httpHandle.h"
#include "user_temp.h"
#include "user_flash.h"
#include "user_upgrade.h"
#include "user_bigiot.h"
#include "user_infrared.h"
#include "user_meter.h"

#ifndef GIT_COMMIT_SHA1
	#define GIT_COMMIT_SHA1 "NULL"
#endif

#endif /* APP_INCLUDE_USER_COMMON_H_ */
