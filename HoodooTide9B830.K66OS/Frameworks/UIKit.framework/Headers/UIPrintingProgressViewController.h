/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController {
@private
	UIPrintingProgress *_printingProgress;	// 176 = 0xb0
	UIPrintingMessageView *_messageView;	// 180 = 0xb4
	UINavigationController *_navController;	// 184 = 0xb8
	UIWindow *_window;	// 188 = 0xbc
	double _rotationDelay;	// 192 = 0xc0
}
@property(readonly, assign) double rotationDelay;	// G=0x30384bf1; converted property
- (id)initWithTitle:(id)title message:(id)message printingProgress:(id)progress;	// 0x3038436d
- (void)cancelProgress;	// 0x303847cd
- (void)cleanupAfterDismiss;	// 0x3038491d
- (void)dealloc;	// 0x30384591
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30384761
- (void)dismissAnimated:(BOOL)animated;	// 0x303849a5
- (void)doneProgress;	// 0x30384779
// converted property getter: - (double)rotationDelay;	// 0x30384bf1
- (void)setDonePrinting:(BOOL)printing;	// 0x30384851
- (void)setMessage:(id)message;	// 0x30384831
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30384605
- (void)show;	// 0x303848fd
- (BOOL)visible;	// 0x30384bc1
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30384749
@end

