//---------------------------------------------------------------------------
// Copyright (c) 2020 Michael G. Brehm
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//---------------------------------------------------------------------------

#ifndef __STDAFX_H_
#define __STDAFX_H_
#pragma once

//---------------------------------------------------------------------------
// Windows
//---------------------------------------------------------------------------

#if defined(_WINDOWS)

#define WINVER			_WIN32_WINNT_WIN8
#define	_WIN32_WINNT	_WIN32_WINNT_WIN8
#define	_WIN32_IE		_WIN32_IE_IE80
#define NOMINMAX

#include <WinSock2.h>
#include <WS2tcpip.h>
#include <Windows.h>
#include <wchar.h>				// Prevents redefinition of WCHAR_MIN by libusb
#define TARGET_WINDOWS


// Android
#elif defined(__ANDROID__)

#define TARGET_POSIX
#define TARGET_LINUX
#define TARGET_ANDROID

// MacOS
#elif defined(__APPLE__)

#define TARGET_POSIX
#define TARGET_DARWIN
#define TARGET_DARWIN_OSX

// Linux
#else

#define TARGET_POSIX
#define TARGET_LINUX

#endif

#include <assert.h>
#include <stdint.h>

// KiB / MiB / GiB
//
#define KiB		*(1 << 10)
#define MiB		*(1 << 20)
#define GiB		*(1 << 30)

// KHz / MHz
//
#define KHz		*(1000)
#define MHz		*(1000000)

// MS / US
//
#define MS		*(1000)
#define US		*(1000000)

//---------------------------------------------------------------------------

#endif	// __STDAFX_H_
