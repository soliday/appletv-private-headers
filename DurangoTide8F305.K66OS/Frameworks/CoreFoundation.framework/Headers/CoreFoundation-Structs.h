/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

typedef struct _NSZone NSZone;

typedef struct {
	unsigned long _field1;
	id *_field2;
	unsigned long *_field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFString *CFStringRef;

typedef struct {
	int _field1;
	void *_field2;
	/*function-pointer*/ void *_field3;
	/*function-pointer*/ void *_field4;
	/*function-pointer*/ void *_field5;
} XXStruct_K1psTC;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct __CFArray *CFArrayRef;

typedef struct __CFURL *CFURLRef;

typedef struct timespec {
	int tv_sec;
	long tv_nsec;
} timespec;

typedef struct _CFXPreferencesStatInfo {
	unsigned long long st_ino;
	long long st_size;
	timespec st_mtimex;
} CFXPreferencesStatInfo;

typedef struct NSMethodFrameArgInfo {
	struct NSMethodFrameArgInfo *_field1;
	struct NSMethodFrameArgInfo *_field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned char _field7;
	BOOL _field8;
	unsigned _field9 : 1;
	unsigned _field10 : 1;
	unsigned _field11 : 1;
	unsigned _field12 : 1;
	unsigned _field13 : 1;
	unsigned _field14 : 1;
	unsigned _field15 : 1;
	unsigned _field16 : 1;
	unsigned _field17 : 1;
	unsigned _field18 : 1;
	unsigned _field19 : 1;
	unsigned _field20 : 1;
	unsigned _field21 : 1;
	unsigned _field22 : 1;
	unsigned _field23 : 1;
	unsigned _field24 : 1;
	unsigned char _field25;
	BOOL _field26[0];
} NSMethodFrameArgInfo;

typedef struct {
	NSMethodFrameArgInfo *_field1;
	NSMethodFrameArgInfo *_field2;
	unsigned _field3;
	unsigned _field4;
} XXStruct_0V86UA;

typedef struct {
	int _field1;
	int _field2;
} XXStruct_K5nmsA;

typedef struct __CFData *CFDataRef;

typedef struct Block_byref {
	void *_field1;
	struct Block_byref *_field2;
	int _field3;
	int _field4;
	/*function-pointer*/ void *_field5;
	/*function-pointer*/ void *_field6;
} Block_byref;


