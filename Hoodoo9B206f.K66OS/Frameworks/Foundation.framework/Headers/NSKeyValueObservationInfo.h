/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSHashTable, NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject {
@private
	int _retainCountMinusOne;	// 4 = 0x4
	NSArray *_observances;	// 8 = 0x8
	unsigned _cachedHash;	// 12 = 0xc
	BOOL _cachedIsShareable;	// 16 = 0x10
	NSHashTable *_observables;	// 20 = 0x14
}
- (id)_initWithObservances:(id *)observances count:(unsigned)count;	// 0x31cf8cdd
- (BOOL)_isDeallocating;	// 0x31d6d2c5
- (BOOL)_tryRetain;	// 0x31d6d269
- (void)dealloc;	// 0x31cf920d
- (id)description;	// 0x31d6d3c5
- (unsigned)hash;	// 0x31d6d2f1
- (BOOL)isEqual:(id)equal;	// 0x31d6d301
- (oneway void)release;	// 0x31cf9191
- (id)retain;	// 0x31cf9741
- (unsigned)retainCount;	// 0x31d6d255
@end

