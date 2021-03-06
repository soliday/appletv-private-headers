/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSArray;

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 44 = 0x2c
	int _transition;	// 48 = 0x30
	UIView *_firstResponderViewToRestore;	// 52 = 0x34
	unsigned _isTransitioning : 1;	// 56 = 0x38
	float _columnWidth;	// 60 = 0x3c
	int _columnCount;	// 64 = 0x40
	NSArray *_fromViews;	// 68 = 0x44
	NSArray *_toViews;	// 72 = 0x48
	NSArray *_viewsToRemove;	// 76 = 0x4c
	NSArray *_viewsToAdd;	// 80 = 0x50
	NSArray *_displayedViews;	// 84 = 0x54
	CFDictionaryRef _dividerViews;	// 88 = 0x58
	CFDictionaryRef _containerViews;	// 92 = 0x5c
	UIColor *_dividersColor;	// 96 = 0x60
	float _dividersWidth;	// 100 = 0x64
}
@property(assign, nonatomic) int columnCount;	// G=0x321d8269; S=0x321d8279; @synthesize=_columnCount
@property(assign, nonatomic) float columnWidth;	// G=0x321d8289; S=0x321d8299; @synthesize=_columnWidth
@property(assign, nonatomic) id delegate;	// G=0x321d82a9; S=0x321d82b9; @synthesize=_delegate
+ (double)defaultDurationForTransition:(int)transition;	// 0x321d8231
- (id)initWithCoder:(id)coder;	// 0x321d8425
- (id)initWithFrame:(CGRect)frame;	// 0x321d8539
- (id)_containerViewForView:(id)view;	// 0x321d8879
- (id)_dividerViewForView:(id)view;	// 0x321d89a5
- (BOOL)_isTransitioningFromView:(id)view;	// 0x321d82c9
- (void)_navigationTransitionDidStop;	// 0x321d8699
- (void)_removeContainerViewForView:(id)view;	// 0x321d8ae9
- (void)_removeDividerViewForView:(id)view;	// 0x321d8b21
// declared property getter: - (int)columnCount;	// 0x321d8269
// declared property getter: - (float)columnWidth;	// 0x321d8289
- (void)dealloc;	// 0x321d8619
// declared property getter: - (id)delegate;	// 0x321d82a9
- (void)encodeWithCoder:(id)coder;	// 0x321d835d
- (BOOL)isTransitioning;	// 0x321d8255
// declared property setter: - (void)setColumnCount:(int)count;	// 0x321d8279
// declared property setter: - (void)setColumnWidth:(float)width;	// 0x321d8299
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x321d82b9
- (BOOL)transition:(int)transition fromViews:(id)views toViews:(id)views3;	// 0x321d8b59
- (BOOL)transition:(int)transition toViews:(id)views;	// 0x321d833d
@end

