/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableCell;

__attribute__((visibility("hidden")))
@interface _UITableCellGrabber : UIControl {
@private
	UITableCell *_cell;	// 68 = 0x44
	CGPoint _downPoint;	// 72 = 0x48
}
- (id)initWithCell:(id)cell;	// 0x301efa05
- (void)_controlMouseDown:(GSEventRef)down;	// 0x301ee5c5
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x301ee5cd
- (void)_controlMouseUp:(GSEventRef)up;	// 0x301ee5c9
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x301ee799
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x301ef999
- (BOOL)cancelMouseTracking;	// 0x301ee6c5
- (BOOL)cancelTouchTracking;	// 0x301ee695
- (void)cancelTrackingWithEvent:(id)event;	// 0x301ee711
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x301efcd5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x301efc69
- (void)drawRect:(CGRect)rect;	// 0x301effed
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x301ee761
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x301ee729
- (BOOL)shouldTrack;	// 0x301ee5c1
@end

