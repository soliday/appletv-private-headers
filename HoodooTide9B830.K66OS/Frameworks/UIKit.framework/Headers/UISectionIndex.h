/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UISectionTable;

__attribute__((visibility("hidden")))
@interface UISectionIndex : UIControl {
@private
	UISectionTable *_sectionTable;	// 72 = 0x48
	CGPoint _lastMousePoint;	// 76 = 0x4c
}
+ (float)opaqueVisibleWidth;	// 0x302074e1
+ (float)visibleWidth;	// 0x300b86b9
- (id)initWithSectionTable:(id)sectionTable;	// 0x3020758d
- (void)_scrollToClosestSectionAtPoint:(CGPoint)point;	// 0x30207b1d
- (id)_sectionTitles;	// 0x302074c1
- (id)_titleForPoint:(CGPoint)point pastTop:(BOOL *)top pastBottom:(BOOL *)bottom;	// 0x30207a2d
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x30207c8d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30207d01
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x30207d69
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30207dd5
- (void)drawRect:(CGRect)rect;	// 0x30207671
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x30207e51
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30207ec9
- (void)noteIndexTitlesDidChangeInSectionList:(id)noteIndexTitles;	// 0x30207c7d
@end
