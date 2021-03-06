/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSWeakCallback.h"

@class NSKeyValueProperty, NSPointerArray, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSWeakCallback {
@private
	int _retainCountMinusOne;	// 16 = 0x10
	NSObject *_observer;	// 20 = 0x14
	NSKeyValueProperty *_property;	// 24 = 0x18
	unsigned _options;	// 28 = 0x1c
	void *_context;	// 32 = 0x20
	NSObject *_originalObservable;	// 36 = 0x24
	unsigned _cachedUnrotatedHashComponent;	// 40 = 0x28
	BOOL _cachedIsShareable;	// 44 = 0x2c
	NSPointerArray *_observationInfos;	// 48 = 0x30
}
- (id)_initWithObserver:(id)observer property:(id)property options:(unsigned)options context:(void *)context originalObservable:(id)observable;	// 0x3200fc05
- (BOOL)_isDeallocating;	// 0x32084149
- (BOOL)_tryRetain;	// 0x320840ed
- (void)dealloc;	// 0x3204f015
- (id)description;	// 0x32084175
- (unsigned)hash;	// 0x3200fb29
- (BOOL)isEqual:(id)equal;	// 0x3200fb89
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3204f545
- (oneway void)release;	// 0x3200fe21
- (id)retain;	// 0x3200fde9
- (unsigned)retainCount;	// 0x320840d9
@end

