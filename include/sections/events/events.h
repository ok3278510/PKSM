/*  This file is part of PKSM
>	Copyright (C) 2016/2017 Bernardo Giordano
>
>   This program is free software: you can redistribute it and/or modify
>   it under the terms of the GNU General Public License as published by
>   the Free Software Foundation, either version 3 of the License, or
>   (at your option) any later version.
>
>   This program is distributed in the hope that it will be useful,
>   but WITHOUT ANY WARRANTY; without even the implied warranty of
>   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
>   GNU General Public License for more details.
>
>   You should have received a copy of the GNU General Public License
>   along with this program.  If not, see <http://www.gnu.org/licenses/>.
>   See LICENSE for information.
*/

#ifndef EVENTS_H
#define EVENTS_H

#include "common.h"

#define SMCOUNT 300

#define EVENTS_DEFAULT 0
#define EVENTS_OTA 1
#define EVENTS_SLOT 2

void findFreeLocationWC(u8 *mainbuf, int nInjected[]);
int getN(const int i);
void eventDatabase(u8* mainbuf);

#endif