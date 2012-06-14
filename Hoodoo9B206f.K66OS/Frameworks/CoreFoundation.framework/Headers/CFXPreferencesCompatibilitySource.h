/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesCompatibilitySource : CFXPreferencesSource {
@private
	opaque_pthread_mutex_t accessLock;	// 16 = 0x10
}
- (id)init;	// 0x31a4ba81
- (CFDictionaryRef)copyDictionary;	// 0x31a4c7a9
- (CFArrayRef)copyKeyList;	// 0x31a4c75d
- (void)dealloc;	// 0x31a4bb3d
- (void)finalize;	// 0x31a4bafd
- (void *)getValueForKey:(CFStringRef)key;	// 0x31a4bb7d
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x31a4c709
- (unsigned char)synchronize;	// 0x31a4c70d
@end

