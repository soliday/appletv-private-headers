/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class NSMutableArray;

@interface BRMediatorProvider : NSObject <BRControlFactory, BRProvider> {
@private
	NSMutableArray *_activeMediators;	// 4 = 0x4
	NSMutableArray *_mediators;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediators;	// G=0x34267345; converted property
+ (id)provider;	// 0x34266f39
+ (id)providerWithControl:(id)control identifier:(id)identifier;	// 0x342670a9
+ (id)providerWithControlArray:(id)controlArray;	// 0x34267261
+ (id)providerWithControls:(id)controls;	// 0x342671b1
+ (id)providerWithControlsAndIdentifiers:(id)controlsAndIdentifiers;	// 0x342670f5
+ (id)providerWithMediator:(id)mediator;	// 0x34266f85
+ (id)providerWithMediatorArray:(id)mediatorArray;	// 0x3426705d
+ (id)providerWithMediators:(id)mediators;	// 0x34266fd1
- (id)init;	// 0x34266e95
- (id)initWithMediators:(id)mediators;	// 0x34266d71
- (long)_activeInsertIndexForMediator:(id)mediator;	// 0x34267905
- (void)_activeStateChanged:(id)changed;	// 0x34267771
- (void)_controlChanged:(id)changed;	// 0x34267889
- (void)_insertMediator:(id)mediator atIndex:(long)index;	// 0x3426799d
- (void)_subscribeToNotificationsForMediator:(id)mediator;	// 0x34267625
- (void)_unsubscribeToNotificationsForMediator:(id)mediator;	// 0x342676dd
- (void)addMediator:(id)mediator;	// 0x34267355
- (id)controlFactory;	// 0x34267595
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34267611
- (id)dataAtIndex:(long)index;	// 0x342675b9
- (long)dataCount;	// 0x34267599
- (void)dealloc;	// 0x34266ea9
- (id)hashForDataAtIndex:(long)index;	// 0x342675d9
- (void)insertMediator:(id)mediator after:(id)after;	// 0x3426746d
- (void)insertMediator:(id)mediator before:(id)before;	// 0x342674cd
- (id)mediatorWithIdentifier:(id)identifier;	// 0x34267519
// converted property getter: - (id)mediators;	// 0x34267345
- (void)removeMediator:(id)mediator;	// 0x34267395
@end

