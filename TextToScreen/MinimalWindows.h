//This header removes many of the unused Windows API features and also checks for version compatability. 

#pragma once

//target windows 10 or later
#define _WIN32_WINNT 0x0A00
#include <sdkddkver.h>

//Unused Windows Things.
#define WIN32_LEAN_AND_MEAN
#define NOGDICAPMASKS
#define NOSYSMETRICS
#define NOMENUS
#define NOICONS 
#define NOKEYSTATES
#define NOSYSCOMMANDS
#define NORASTEROPS
#define OEMRESOURCE
#define NOATOM
#define NOCLIPBOARD
#define NOCOLOR
#define NOCTLMGR
#define NODRAWTEXT 
#define NOKERNEL
#define NONLS
#define NOMEMMGR
#define NOMETAFILE 
#define NOMINMAX
#define NOOPENFILE 
#define NOSCROLL
#define NOSERVICE
#define NOSOUND
#define NOTEXTMETRIC 
#define NOWH
#define NOCOMM
#define NOKANJI
#define NOHELP
#define NOPROFILER
#define NODEFERWINDOWPOS 
#define NOMCX
#define NOTAPE
#define NOIMAGE
#define NOPROXYSTUB

#define STRICT

#include <Windows.h>