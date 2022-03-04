#pragma once 
#ifndef PROGRAM_H
#define PROGRAM_H

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ENAME.h"
#include "define.h"

#ifdef __cheaderfile
extern "C" {
	#endif
	
	#ifndef BUILD_MY_DLL
	#define SHARED_LIB __declspec(dllexport)
	#else
	#define SHARED_LIB __declspec(dllexport)
	#endif
			#ifdef _GNUC_
			#define NORETERN _attribute_ ((_noreturn_))
			void 		errExit(const char *format, ...) NORETURN;
			void 		err_exit(const char *format, ...) NORETURN ;
			void 		errExitEN(int errnum, const char *format, ...) NORETURN ;
			void 		fatal(const char *format, ...) NORETURN ;
			void 		usageErr(const char *format, ...) NORETURN ;
			void 		cmdLineErr(const char *format, ...) NORETURN ;
			#endif
			void 		usageErr(const char *format, ...);
			void 		errExit(const char *format, ...);
			void 		fatal(const char *format, ...);
			static void terminate(Boolean useExit3);
			static void outputError(Boolean useErr, int err, Boolean flushStdout, const char *format, va_list ap);
			void 		errMsg(const char *format, ...);
			long 		getLong(const char *arg, int flages, const char *name);
			int 		getlnt(const char *arg, int flages, const char *name);
	#ifdef __cheaderfile
} 
#endif
#endif