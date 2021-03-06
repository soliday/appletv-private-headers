/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <NSCoder.h> // Unknown library


@interface XPCEncoder : NSCoder {
	void *_encoding;	// 4 = 0x4
	void *_currentObject;	// 8 = 0x8
	CFDictionaryRef _encodedObjects;	// 12 = 0xc
	CFDictionaryRef _conditionalObjects;	// 16 = 0x10
	unsigned _nextConditionalObjectID;	// 20 = 0x14
	CFDictionaryRef _replacementObjects;	// 24 = 0x18
}
@property(readonly, assign) void *encoding;	// G=0x333955f1; converted property
+ (void *)newEncodingForRootObject:(id)rootObject;	// 0x333956c1
- (id)init;	// 0x33395629
- (void)_fixUpConditionalObjects;	// 0x33395741
- (id)_replacementObjectForObject:(id)object;	// 0x33395821
- (void)_verifyCurrentObject;	// 0x33395c45
- (BOOL)allowsKeyedCoding;	// 0x33395601
- (void)dealloc;	// 0x33395cc9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x33395a05
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x33395895
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x33395a55
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x333958e1
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x3339592d
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x333959c5
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x33395959
- (void)encodeInt:(int)int forKey:(id)key;	// 0x333959e5
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x333959a5
- (void)encodeObject:(id)object forKey:(id)key;	// 0x33395b19
- (void)encodeRootObject:(id)object;	// 0x33395c99
// converted property getter: - (void *)encoding;	// 0x333955f1
- (int)versionForClassName:(id)className;	// 0x3339586d
@end

