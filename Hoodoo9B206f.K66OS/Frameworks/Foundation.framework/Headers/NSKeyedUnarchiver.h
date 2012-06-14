/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSKeyedUnarchiver : NSCoder {
@private
	id _delegate;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	id _objRefMap;	// 12 = 0xc
	id _replacementMap;	// 16 = 0x10
	id _nameClassMap;	// 20 = 0x14
	id _tmpRefObjMap;	// 24 = 0x18
	id _refObjMap;	// 28 = 0x1c
	int _genericKey;	// 32 = 0x20
	id _data;	// 36 = 0x24
	void *_offsetData;	// 40 = 0x28
	id _containers;	// 44 = 0x2c
	id _objects;	// 48 = 0x30
	const char *_bytes;	// 52 = 0x34
	unsigned long long _len;	// 56 = 0x38
	id _helper;	// 64 = 0x40
	void *_reserved0;	// 68 = 0x44
}
@property(retain) id allowedClasses;	// G=0x31d72371; S=0x31d1f209; converted property
@property(assign) id delegate;	// G=0x31d722fd; S=0x31d722ed; converted property
+ (Class)classForClassName:(id)className;	// 0x31cfe06d
+ (void)initialize;	// 0x31d1e6a1
+ (void)setClass:(Class)aClass forClassName:(id)className;	// 0x31d1e735
+ (id)unarchiveObjectWithData:(id)data;	// 0x31d2060d
+ (id)unarchiveObjectWithFile:(id)file;	// 0x31cfc639
- (id)init;	// 0x31d71ea1
- (id)initForReadingWithData:(id)data;	// 0x31cfc789
- (id)initWithStream:(id)stream;	// 0x31d71f89
- (id)_blobForCurrentObject;	// 0x31d71de1
- (unsigned)_currentUniqueIdentifier;	// 0x31d73731
- (id)_decodeArrayOfObjectsForKey:(id)key;	// 0x31cfe5ed
- (id)_decodePropertyListForKey:(id)key;	// 0x31d2d6f1
- (id)_initWithStream:(CFReadStreamRef)stream data:(id)data topDict:(CFDictionaryRef)dict;	// 0x31d71ee9
- (void)_replaceObject:(id)object withObject:(id)object2;	// 0x31cfece1
- (void)_temporaryMapReplaceObject:(id)object withObject:(id)object2;	// 0x31d72391
// converted property getter: - (id)allowedClasses;	// 0x31d72371
- (BOOL)allowsKeyedCoding;	// 0x31cfe5e9
- (Class)classForClassName:(id)className;	// 0x31cfe049
- (BOOL)containsValueForKey:(id)key;	// 0x31d206c1
- (void)dealloc;	// 0x31cffcdd
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x31d73f75
- (BOOL)decodeBoolForKey:(id)key;	// 0x31cff67d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x31d7332d
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x31d73849
- (id)decodeDataObject;	// 0x31d73839
- (double)decodeDoubleForKey:(id)key;	// 0x31d73291
- (float)decodeFloatForKey:(id)key;	// 0x31d72d11
- (int)decodeInt32ForKey:(id)key;	// 0x31cfee91
- (long long)decodeInt64ForKey:(id)key;	// 0x31d72c75
- (int)decodeIntForKey:(id)key;	// 0x31cff389
- (id)decodeObject;	// 0x31d73751
- (id)decodeObjectForKey:(id)key;	// 0x31cfd191
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x31d73ad5
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x31d73981
// converted property getter: - (id)delegate;	// 0x31d722fd
- (id)description;	// 0x31d722c1
- (void)finalize;	// 0x31d72161
- (void)finishDecoding;	// 0x31cffc39
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x31d72415
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x31d1f209
- (void)setClass:(Class)aClass forClassName:(id)className;	// 0x31d7230d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31d722ed
- (unsigned)systemVersion;	// 0x31d74161
- (int)versionForClassName:(id)className;	// 0x31d74139
@end

