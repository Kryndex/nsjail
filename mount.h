/*

   nsjail - CLONE_NEWNS routines
   -----------------------------------------

   Copyright 2014 Google Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#ifndef NS_MOUNT_H
#define NS_MOUNT_H

#include <stdbool.h>

#include "common.h"

const char *mountFlagsToStr(uintptr_t flags);
bool mountIsDir(const char *path);
bool mountInitNs(struct nsjconf_t *nsjconf);

#endif				/* NS_MOUNT_H */
