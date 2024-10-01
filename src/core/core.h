////////////////////////////////////////////////////////////////////////////////
//    ScopeFun Oscilloscope ( http://www.scopefun.com )
//    Copyright (C) 2016 David Košenina
//
//    This file is part of ScopeFun Oscilloscope.
//
//    ScopeFun Oscilloscope is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    ScopeFun Oscilloscope is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this ScopeFun Oscilloscope.  If not, see <http://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __CORE__
#define __CORE__

////////////////////////////////////////////////////////////////////////////////
// SDL
////////////////////////////////////////////////////////////////////////////////
#include<SDL.h>

////////////////////////////////////////////////////////////////////////////////
// wide char
////////////////////////////////////////////////////////////////////////////////
#include<wchar.h>

////////////////////////////////////////////////////////////////////////////////
// core interface
////////////////////////////////////////////////////////////////////////////////
void coreMessage(const char *msg);
void coreDebugBreak();
void coreDebugOutput(const char *msg);
void coreTerminate();

////////////////////////////////////////////////////////////////////////////////
// format
////////////////////////////////////////////////////////////////////////////////
#include<core/format/format.h>

////////////////////////////////////////////////////////////////////////////////
// global
////////////////////////////////////////////////////////////////////////////////
#include<core/global/platform.h>
#include<core/global/macro.h>
#include<core/global/type.h>
#include<core/global/endian.h>

////////////////////////////////////////////////////////////////////////////////
// c++ libs
////////////////////////////////////////////////////////////////////////////////
#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<math.h>
#include<errno.h>
#include<ctime>

////////////////////////////////////////////////////////////////////////////////
// core
////////////////////////////////////////////////////////////////////////////////
#include<core/memory/memory.h>
#include<core/flag/flag.h>
#include<core/data/array.h>
#include<core/data/set.h>
#include<core/data/map.h>
#include<core/data/ring.h>
#include<core/math/const.h>
#include<core/math/interval.h>
#include<core/math/vector4.h>
#include<core/math/matrix4x4.h>
#include<core/string/corestring.h>

////////////////////////////////////////////////////////////////////////////////
// manager, timer, input
////////////////////////////////////////////////////////////////////////////////
#include<core/manager/manager.h>
#include<core/timer/timer.h>
#include<core/input/input.h>

////////////////////////////////////////////////////////////////////////////////
// opengl
////////////////////////////////////////////////////////////////////////////////
#include<core/opengl/opengl.h>

////////////////////////////////////////////////////////////////////////////////
// usbx
////////////////////////////////////////////////////////////////////////////////
#include<core/libusb/libusb.h>

////////////////////////////////////////////////////////////////////////////////
// render
////////////////////////////////////////////////////////////////////////////////
#include<core/render/camera/camera.h>
#include<core/render/canvas/canvas2d.h>
#include<core/render/canvas/canvas3d.h>
#include<core/render/font/font.h>
#include<core/render/render/render.h>

////////////////////////////////////////////////////////////////////////////////
// file
////////////////////////////////////////////////////////////////////////////////
#include<core/file/file.h>

////////////////////////////////////////////////////////////////////////////////
// cjson
////////////////////////////////////////////////////////////////////////////////
#include<cJSON.h>

#endif
////////////////////////////////////////////////////////////////////////////////
//
//
//
////////////////////////////////////////////////////////////////////////////////
