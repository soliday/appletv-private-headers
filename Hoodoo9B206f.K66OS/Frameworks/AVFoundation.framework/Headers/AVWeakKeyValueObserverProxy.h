/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVWeakReference;

@interface AVWeakKeyValueObserverProxy : NSObject {
@private
	AVWeakReference *_weakReferenceToObserver;	// 4 = 0x4
}
- (id)init;	// 0x326f83a1
- (id)initWithWeakReferenceToObserver:(id)observer;	// 0x326f834d
- (void)dealloc;	// 0x326f83b5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x326f8401
@end

