/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, DOMNode;

__attribute__((visibility("hidden")))
@interface UIWebRotatingPopover : NSObject <UIPopoverControllerDelegate> {
@private
	BOOL _isRotating;	// 4 = 0x4
	DOMNode *_node;	// 8 = 0x8
	UIPopoverController *_popoverController;	// 12 = 0xc
}
@property(retain, nonatomic) DOMNode *_node;	// G=0x33b93685; S=0x33b93695; @synthesize
@property(retain, nonatomic) UIPopoverController *_popoverController;	// G=0x33b936b9; S=0x33b936c9; @synthesize
- (id)initWithDOMNode:(id)domnode;	// 0x33b93251
// declared property getter: - (id)_node;	// 0x33b93685
// declared property getter: - (id)_popoverController;	// 0x33b936b9
- (void)accessoryDone;	// 0x33b9358d
- (void)dealloc;	// 0x33b93325
- (void)didRotate:(id)rotate;	// 0x33b93629
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x33b93649
- (void)presentPopover;	// 0x33b933e1
// declared property setter: - (void)set_node:(id)node;	// 0x33b93695
// declared property setter: - (void)set_popoverController:(id)controller;	// 0x33b936c9
- (void)willRotate:(id)rotate;	// 0x33b935f9
@end

