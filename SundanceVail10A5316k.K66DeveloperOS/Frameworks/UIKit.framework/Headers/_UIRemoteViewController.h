/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UIViewController.h"
#import "_UIRemoteViewController_ViewControllerOperatorInterface.h"
#import "XPCProxyTarget.h"

@class _UIViewServiceInterface, NSArray, _UIRemoteView, _UIAsyncInvocation, UIActionSheet, NSString, _UISizeTrackingView, NSError;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, UIActionSheetDelegate> {
@private
	NSString *_serviceBundleIdentifier;	// 180 = 0xb4
	_UIViewServiceInterface *_serviceInterface;	// 184 = 0xb8
	id _serviceViewControllerProxy;	// 188 = 0xbc
	NSArray *_serviceViewControllerSupportedInterfaceOrientations;	// 192 = 0xc0
	unsigned _serviceRegisteredScrollToTopViewCount;	// 196 = 0xc4
	id _viewControllerOperatorProxy;	// 200 = 0xc8
	id _textEffectsOperatorProxy;	// 204 = 0xcc
	_UISizeTrackingView *_sizeTrackingView;	// 208 = 0xd0
	_UIRemoteView *_serviceViewControllerRemoteView;	// 212 = 0xd4
	_UIRemoteView *_fullScreenTextEffectsRemoteView;	// 216 = 0xd8
	_UIAsyncInvocation *_terminationInvocation;	// 220 = 0xdc
	int _terminationErrorLock;	// 224 = 0xe0
	NSError *_terminationError;	// 228 = 0xe4
	UIActionSheet *_hostedActionSheet;	// 232 = 0xe8
	int __automatic_invalidation_retainCount;	// 236 = 0xec
	BOOL __automatic_invalidation_invalidated;	// 240 = 0xf0
}
@property(readonly, assign, nonatomic) NSString *serviceBundleIdentifier;	// G=0x3045b231; 
@property(readonly, assign, nonatomic) id serviceViewControllerProxy;	// G=0x3045d459; 
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;	// 0x30459e05
- (int)__automatic_invalidation_logic;	// 0x30459b9d
- (void)__dismissActionSheetWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x3045c1f5
- (void)__presentActionSheetFromYCoordinate:(float)ycoordinate withTitle:(id)title buttonTitles:(id)titles cancelButtonIndex:(int)index destructiveButtonIndex:(int)index5 style:(int)style;	// 0x3045be71
- (void)__setSupportedInterfaceOrientations:(id)orientations;	// 0x3045ce81
- (void)__viewServiceDidPromoteFirstResponder;	// 0x3045d089
- (void)__viewServiceDidRegisterScrollToTopView;	// 0x3045bb95
- (void)__viewServiceDidUnregisterScrollToTopView;	// 0x3045bbf1
- (void)__viewServiceDidUpdateAppearanceWithSerializedRepresentations:(id)__viewService originalSource:(id)source;	// 0x3045d2f9
- (void)__viewServiceDidUpdateTintColor:(id)__viewService duration:(double)duration;	// 0x3045d13d
- (void)_alertIsAppearing:(id)appearing;	// 0x3045c3dd
- (void)_alertIsDisappearing:(id)disappearing;	// 0x3045c5ed
- (void)_appearanceInvocationsDidChange:(id)_appearanceInvocations;	// 0x3045d235
- (id)_appearanceSource;	// 0x3045d225
- (void)_applicationDidEnterBackground:(id)_application;	// 0x3045b3d5
- (void)_applicationWillEnterForeground:(id)_application;	// 0x3045b2b1
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x3045ce2d
- (void)_didRotateFromInterfaceOrientation:(int)interfaceOrientation forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3045cd0d
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x3045bdd5
- (void)_hostDidEnterBackground:(id)_host;	// 0x3045b415
- (void)_hostWillEnterForeground:(id)_host;	// 0x3045b35d
- (id)_initWithViewServiceBundleIdentifier:(id)viewServiceBundleIdentifier connectionInfo:(XXStruct_zzUENB)info;	// 0x3045a0f1
- (BOOL)_isDeallocating;	// 0x30459dd9
- (void)_scrollToTopFromTouchAtViewLocation:(CGPoint)viewLocation resultHandler:(id)handler;	// 0x3045bc51
- (void)_statusBarOrientationDidChange:(id)_statusBarOrientation;	// 0x3045b269
- (void)_terminateUnconditionallyThen:(id)then;	// 0x3045b551
- (id)_terminateWithError:(id)error;	// 0x3045b48d
- (BOOL)_tryRetain;	// 0x30459d89
- (void)_willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3045caf5
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x3045cdd9
- (void)_willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3045cc01
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3045c351
- (void)dealloc;	// 0x3045ba81
- (id)disconnect;	// 0x3045b4fd
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3045d469
- (oneway void)release;	// 0x30459cb5
- (id)retain;	// 0x30459c7d
- (unsigned)retainCount;	// 0x30459d75
// declared property getter: - (id)serviceBundleIdentifier;	// 0x3045b231
// declared property getter: - (id)serviceViewControllerProxy;	// 0x3045d459
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3045caad
- (void)synchronizeAnimationsInActions:(id)actions;	// 0x3045ab45
- (void)viewDidAppear:(BOOL)view;	// 0x3045c8c1
- (void)viewDidDisappear:(BOOL)view;	// 0x3045c9c9
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x3045d439
- (void)viewWillAppear:(BOOL)view;	// 0x3045c6e1
- (void)viewWillDisappear:(BOOL)view;	// 0x3045c911
@end
