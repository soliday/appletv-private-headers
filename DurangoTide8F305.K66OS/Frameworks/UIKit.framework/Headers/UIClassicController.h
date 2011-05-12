/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIZoomViewController, UIStatusBarViewController, UIImageView, UIWindow;

@interface UIClassicController : NSObject {
@private
	UIWindow *_window;	// 4 = 0x4
	UIImageView *_imageView;	// 8 = 0x8
	UIStatusBarViewController *_statusBarViewController;	// 12 = 0xc
	UIZoomViewController *_zoomViewController;	// 16 = 0x10
	BOOL _masksToWindowBounds;	// 20 = 0x14
	BOOL _hidesClassicChrome;	// 21 = 0x15
	BOOL _hidesStatusBarFiller;	// 22 = 0x16
}
@property(assign, nonatomic) BOOL drawsClassicChrome;	// G=0x321f0d49; S=0x321f1f1d; 
@property(assign, nonatomic) BOOL drawsStatusBarFiller;	// G=0x321f0da9; S=0x321f1ec5; 
@property(assign, nonatomic) BOOL masksToWindowBounds;	// G=0x321f0d89; S=0x321f3281; 
@property(assign, nonatomic, getter=isZoomed) BOOL zoomed;	// G=0x321f2485; S=0x321f246d; 
+ (id)sharedClassicController;	// 0x31f8e155
- (id)_chromeImageWithOrientation:(int)orientation;	// 0x321f2939
- (void)_classicChangeStatusBarOrientation:(id)orientation;	// 0x321f1ff5
- (void)_classicChangeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x321f1fdd
- (void)_finishZoom:(BOOL)zoom;	// 0x321f24a9
- (void)_initializeStatusBarOrientation;	// 0x321f22c5
- (void)_setupWindow;	// 0x321f36c9
- (BOOL)_shouldHideStatusBar;	// 0x321f0d61
- (void)_updateImageView:(id)view orientation:(int)orientation;	// 0x321f3991
- (id)_window;	// 0x321f0d39
- (void)dealloc;	// 0x321f285d
// declared property getter: - (BOOL)drawsClassicChrome;	// 0x321f0d49
// declared property getter: - (BOOL)drawsStatusBarFiller;	// 0x321f0da9
- (BOOL)isClassicControlWindow:(id)window;	// 0x321f24d5
// declared property getter: - (BOOL)isZoomed;	// 0x321f2485
// declared property getter: - (BOOL)masksToWindowBounds;	// 0x321f0d89
// declared property setter: - (void)setDrawsClassicChrome:(BOOL)chrome;	// 0x321f1f1d
// declared property setter: - (void)setDrawsStatusBarFiller:(BOOL)filler;	// 0x321f1ec5
- (void)setMasksToWindowBounds:(BOOL)windowBounds;	// 0x321f0d99
// declared property setter: - (void)setMasksToWindowBounds:(BOOL)windowBounds;	// 0x321f3281
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x321f2575
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x321f2535
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x321f2555
// declared property setter: - (void)setZoomed:(BOOL)zoomed;	// 0x321f246d
- (void)setZoomed:(BOOL)zoomed animated:(BOOL)animated;	// 0x321f2c7d
@end
