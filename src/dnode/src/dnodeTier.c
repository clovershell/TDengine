/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "os.h"
#include "dnodeTier.h"

#ifndef _DNODE_PLUGINS

SDnodeTier *dnodeNewTier() { return NULL; }
void *      dnodeCloseTier(SDnodeTier *pDnodeTier) { return NULL; }
int         dnodeAddDisk(SDnodeTier *pDnodeTier, char *dir, int level) { return 0; }
int         dnodeUpdateTiersInfo(SDnodeTier *pDnodeTier) { return 0; }
int         dnodeCheckTiers(SDnodeTier *pDnodeTier) { return 0; }
SDisk *     dnodeAssignDisk(SDnodeTier *pDnodeTier, int level) { return NULL; }
SDisk *     dnodeGetDiskByName(SDnodeTier *pDnodeTier, char *dirName) { return NULL; }

#endif