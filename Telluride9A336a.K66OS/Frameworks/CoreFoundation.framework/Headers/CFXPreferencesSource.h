/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSource : NSObject {
@private
	CFDictionaryRef _dict;	// 4 = 0x4
	long _generationCount;	// 8 = 0x8
	BOOL _disabled;	// 12 = 0xc
}
@property(readonly, assign) long generationCount;	// G=0x3070887d; converted property
- (id)init;	// 0x30703571
- (CFDictionaryRef)copyDictionary;	// 0x30731095
- (CFArrayRef)copyKeyList;	// 0x30708265
- (void)dealloc;	// 0x3077b4ad
- (void)finalize;	// 0x3077b4f5
// converted property getter: - (long)generationCount;	// 0x3070887d
- (void *)getValueForKey:(CFStringRef)key;	// 0x306d623d
- (void)setDisabled:(BOOL)disabled;	// 0x30703aed
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x30709ba5
- (unsigned char)synchronize;	// 0x306f4285
@end

