/**
 *  Copyright 2019 SK Telecom Co., Ltd.
 *    Author: Walter Lozano <walter.lozano@collabora.com>
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */
#include <gio/gio.h>

gchar           *hwangsae_common_get_local_ip  (void);

GSettings       *hwangsae_common_gsettings_new (const gchar * schema_id);

gboolean         hwangsae_common_parse_times_from_filename
                                               (const gchar *filename,
                                                guint64     *start_time,
                                                guint64     *end_time);
