/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "NSCopying.h"
#import <UIViewController.h> // Unknown library

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {
	BOOL _shouldAnimateIn;	// 157 = 0x9d
	NSNumber *_animationStartTime;	// 160 = 0xa0
	NSString *_activationContext;	// 164 = 0xa4
	NSInvocation *_pendingDeactivationInvocation;	// 168 = 0xa8
}
@property(retain, nonatomic) NSString *activationContext;	// G=0x316f3555; S=0x316f35e9; @synthesize=_activationContext
@property(retain, nonatomic) NSNumber *animationStartTime;	// G=0x316f3565; S=0x316f35c1; @synthesize=_animationStartTime
@property(retain) NSInvocation *pendingDeactivationInvocation;	// G=0x316f3545; S=0x316f3611; converted property
@property(assign, nonatomic) BOOL shouldAnimateIn;	// G=0x316f3575; S=0x316f3585; @synthesize=_shouldAnimateIn
- (id)init;	// 0x316f3a01
// declared property getter: - (id)activationContext;	// 0x316f3555
- (BOOL)allowSuspension;	// 0x316f3515
- (void)animateViewOut;	// 0x316f3749
// declared property getter: - (id)animationStartTime;	// 0x316f3565
- (id)copyWithZone:(NSZone *)zone;	// 0x316f3699
- (void)dealloc;	// 0x316f36a9
- (void)didFinishLaunchingFrontmost;	// 0x316f3651
- (void)didReceiveMemoryWarning;	// 0x316f3595
- (BOOL)displaysAboveStatusBar;	// 0x316f3519
- (void)finishedAnimatingIn;	// 0x316f3521
- (void)finishedAnimatingOut;	// 0x316f3525
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x316f3541
- (BOOL)handleLockButtonPressed;	// 0x316f3531
- (BOOL)handleMenuButtonTap;	// 0x316f353d
- (BOOL)handleVolumeDownButtonPressed;	// 0x316f3539
- (BOOL)handleVolumeUpButtonPressed;	// 0x316f3535
- (BOOL)hasTranslucentBackground;	// 0x316f352d
- (BOOL)isSlidingViewController;	// 0x316f3511
// converted property getter: - (id)pendingDeactivationInvocation;	// 0x316f3545
- (void)requestActivationAnimated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay;	// 0x316f39a5
- (void)requestDeactivationAnimated:(BOOL)animated animateOldDisplayInWithStyle:(int)style;	// 0x316f394d
// declared property setter: - (void)setActivationContext:(id)context;	// 0x316f35e9
// declared property setter: - (void)setAnimationStartTime:(id)time;	// 0x316f35c1
// converted property setter: - (void)setPendingDeactivationInvocation:(id)invocation;	// 0x316f3611
// declared property setter: - (void)setShouldAnimateIn:(BOOL)animateIn;	// 0x316f3585
// declared property getter: - (BOOL)shouldAnimateIn;	// 0x316f3575
- (void)viewDidLoad;	// 0x316f3829
- (void)viewDidUnload;	// 0x316f371d
- (BOOL)viewIsReadyToBeRemoved;	// 0x316f3529
- (void)viewWillAnimateOut;	// 0x316f351d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x316f378d
@end

