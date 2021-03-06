/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

@interface IMDirectlyObservableObject : NSObject {
	NSMutableArray *_observers;	// 4 = 0x4
}
@property(retain) NSArray *observers;	// G=0x30b7201d; S=0x30b72035; @synthesize=_observers
- (id)init;	// 0x30b71fc1
- (void)_objectDidPostNotification:(id)_object;	// 0x30b71f49
- (void)addObserver:(id)observer;	// 0x30b71f01
- (void)dealloc;	// 0x30b71f85
- (void)informObserversOfNotification:(id)notification;	// 0x30b71e89
// declared property getter: - (id)observers;	// 0x30b7201d
- (void)removeObserver:(id)observer;	// 0x30b71ed9
// declared property setter: - (void)setObservers:(id)observers;	// 0x30b72035
@end

