/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UIViewController, UIView, NSMutableSet, MPViewController;

@interface MPTransitionController : NSObject {
	CFDictionaryRef _observers;	// 4 = 0x4
	float _duration;	// 8 = 0x8
	UIView *_rootView;	// 12 = 0xc
	NSMutableSet *_persistentViewsToFadeOut;	// 16 = 0x10
	NSMutableSet *_viewsToFadeOut;	// 20 = 0x14
	NSMutableSet *_persistentViewsToFadeIn;	// 24 = 0x18
	NSMutableSet *_viewsToFadeIn;	// 28 = 0x1c
	MPViewController *_fromViewController;	// 32 = 0x20
	int _fromInterfaceOrientation;	// 36 = 0x24
	MPViewController *_toViewController;	// 40 = 0x28
	int _toInterfaceOrientation;	// 44 = 0x2c
@private
	UIViewController *_toContainerViewController;	// 48 = 0x30
}
@property(assign, nonatomic) float duration;	// G=0x30358371; S=0x30358381; @synthesize=_duration
@property(assign, nonatomic) int fromInterfaceOrientation;	// G=0x30358391; S=0x303583a1; @synthesize=_fromInterfaceOrientation
@property(retain, nonatomic) MPViewController *fromViewController;	// G=0x303583b1; S=0x303583c1; @synthesize=_fromViewController
@property(retain, nonatomic) UIView *rootView;	// G=0x303583e5; S=0x303583f5; @synthesize=_rootView
@property(retain, nonatomic) UIViewController *toContainerViewController;	// G=0x3035846d; S=0x3035847d; @synthesize=_toContainerViewController
@property(assign, nonatomic) int toInterfaceOrientation;	// G=0x30358419; S=0x30358429; @synthesize=_toInterfaceOrientation
@property(retain, nonatomic) MPViewController *toViewController;	// G=0x30358439; S=0x30358449; @synthesize=_toViewController
- (id)init;	// 0x30357605
- (void)addObserver:(id)observer didEndSelector:(SEL)selector;	// 0x30357795
- (void)addViewToFadeIn:(id)anIn restoreOnPop:(BOOL)pop;	// 0x30357805
- (void)addViewToFadeOut:(id)fadeOut restoreOnPop:(BOOL)pop;	// 0x303578c1
- (void)dealloc;	// 0x3035767d
- (void)didFinishTransition:(BOOL)transition;	// 0x30357d19
// declared property getter: - (float)duration;	// 0x30358371
- (void)fadeViewsForRestore:(BOOL)restore;	// 0x3035797d
// declared property getter: - (int)fromInterfaceOrientation;	// 0x30358391
// declared property getter: - (id)fromViewController;	// 0x303583b1
- (void)messageObserversWithSuccess:(BOOL)success;	// 0x30358245
- (void)performTransition:(unsigned)transition;	// 0x30357d05
- (void)removeObserver:(id)observer;	// 0x30357c01
// declared property getter: - (id)rootView;	// 0x303583e5
// declared property setter: - (void)setDuration:(float)duration;	// 0x30358381
// declared property setter: - (void)setFromInterfaceOrientation:(int)interfaceOrientation;	// 0x303583a1
// declared property setter: - (void)setFromViewController:(id)viewController;	// 0x303583c1
// declared property setter: - (void)setRootView:(id)view;	// 0x303583f5
// declared property setter: - (void)setToContainerViewController:(id)containerViewController;	// 0x3035847d
// declared property setter: - (void)setToInterfaceOrientation:(int)interfaceOrientation;	// 0x30358429
// declared property setter: - (void)setToViewController:(id)viewController;	// 0x30358449
// declared property getter: - (id)toContainerViewController;	// 0x3035846d
// declared property getter: - (int)toInterfaceOrientation;	// 0x30358419
// declared property getter: - (id)toViewController;	// 0x30358439
- (void)transition:(unsigned)transition;	// 0x30358211
- (void)willBeginTransition:(unsigned)transition;	// 0x30357c21
@end

