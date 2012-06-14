/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSSet.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSString, NSKeyValueNonmutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingSetMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31d70ac5
+ (id)_proxyShare;	// 0x31d70ad5
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31d70b05
- (XXStruct_OzJQfB)_proxyLocator;	// 0x31d70bb5
- (void)_proxyNonGCFinalize;	// 0x31d70bd9
- (unsigned)count;	// 0x31d70c81
- (void)dealloc;	// 0x31d70c45
- (id)member:(id)member;	// 0x31d70cb1
- (id)objectEnumerator;	// 0x31d70ce9
@end

