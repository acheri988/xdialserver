/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2019 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

#ifndef _RT_DIAL_H_
#define _RT_DIAL_H_

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool rtdial_init(GMainContext *context);
void rtdial_term();
typedef void (*rtdial_activation_cb)(bool, const gchar *);
typedef void (*rtdial_friendlyname_cb)(const gchar *);
typedef void (*rtdial_registerapps_cb)(gpointer);
void rtdail_register_activation_cb(rtdial_activation_cb cb);
void rtdail_register_friendlyname_cb(rtdial_friendlyname_cb cb);
void rtdail_register_registerapps_cb(rtdial_registerapps_cb cb);

#ifdef __cplusplus
}
#endif

#endif
