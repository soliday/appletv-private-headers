/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class UIPopoverController;
@protocol UIPrintStatusDelegate;

@interface UIPrintStatusViewController : UINavigationController {
@private
	UIPopoverController *_poverController;	// 272 = 0x110
	id<UIPrintStatusDelegate> _printStatusDelegate;	// 276 = 0x114
}
@property(assign, nonatomic) id<UIPrintStatusDelegate> printStatusDelegate;	// G=0x303d880d; S=0x303d881d; @synthesize=_printStatusDelegate
- (void)dealloc;	// 0x303d8441
- (void)dismissAnimated:(BOOL)animated;	// 0x303d8759
- (void)jobDidCancel;	// 0x303d87c5
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x303d8779
- (void)presentPrintStatusFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x303d86b1
// declared property getter: - (id)printStatusDelegate;	// 0x303d880d
- (id)printStatusView;	// 0x303d867d
// declared property setter: - (void)setPrintStatusDelegate:(id)delegate;	// 0x303d881d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303d848d
- (void)viewDidLoad;	// 0x303d84f5
- (void)viewWillAppear:(BOOL)view;	// 0x303d85a1
@end

