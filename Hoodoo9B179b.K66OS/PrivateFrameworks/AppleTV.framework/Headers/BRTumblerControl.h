/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;
@protocol BRTumblerDelegate, BRTumblerDataSource;

@interface BRTumblerControl : BRControl {
@private
	id<BRTumblerDataSource> _dataSource;	// 48 = 0x30
	id<BRTumblerDelegate> _delegate;	// 52 = 0x34
	unsigned _currentIndex;	// 56 = 0x38
	unsigned _itemCount;	// 60 = 0x3c
	BRControl *_currentItem;	// 64 = 0x40
	BRControl *_nextItem;	// 68 = 0x44
	BRControl *_prevItem;	// 72 = 0x48
	BRControl *_nextNextItem;	// 76 = 0x4c
	BRControl *_prevPrevItem;	// 80 = 0x50
	int _tumbleState;	// 84 = 0x54
	BRControl *_nextFade;	// 88 = 0x58
	BRControl *_prevFade;	// 92 = 0x5c
	BRControl *_nextBlackout;	// 96 = 0x60
	BRControl *_prevBlackout;	// 100 = 0x64
	BRImageControl *_nextArrow;	// 104 = 0x68
	BRImageControl *_prevArrow;	// 108 = 0x6c
	CGSize _sizeThatFits;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) BRControl *currentItem;	// G=0x302e2b65; @synthesize=_currentItem
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x302e19fd; S=0x302e1a0d; 
@property(assign, nonatomic) id<BRTumblerDataSource> dataSource;	// G=0x302e2b35; S=0x302e2241; @synthesize=_dataSource
@property(assign, nonatomic) id<BRTumblerDelegate> delegate;	// G=0x302e2b45; S=0x302e2b55; @synthesize=_delegate
@property(readonly, assign) float itemPadding;	// G=0x302e2541; @dynamic
- (id)init;	// 0x302e1431
- (id)_arrowAnimations;	// 0x302e3001
- (id)_controlFromDataSourceAtIndex:(unsigned)index;	// 0x302e3139
- (CGPoint)_currentPos;	// 0x302e2e99
- (id)_nextFadeFilters;	// 0x302e2b75
- (CGPoint)_nextNextPos;	// 0x302e2f85
- (CGPoint)_nextPos;	// 0x302e2f11
- (id)_prevFadeFilters;	// 0x302e2c89
- (CGPoint)_prevPos;	// 0x302e2e1d
- (CGPoint)_prevPrevPos;	// 0x302e2d9d
- (BOOL)_tumbleNextShouldAnimate:(BOOL)_tumbleNext;	// 0x302e37f1
- (BOOL)_tumblePrevShouldAnimate:(BOOL)_tumblePrev;	// 0x302e3181
- (id)accessibilityLabel;	// 0x302e3e61
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x302e2add
- (BOOL)brEventAction:(id)action;	// 0x302e25f1
// declared property getter: - (id)currentItem;	// 0x302e2b65
// declared property getter: - (unsigned)currentItemIndex;	// 0x302e19fd
// declared property getter: - (id)dataSource;	// 0x302e2b35
- (void)dealloc;	// 0x302e18e9
// declared property getter: - (id)delegate;	// 0x302e2b45
// declared property getter: - (float)itemPadding;	// 0x302e2541
- (void)layoutSubcontrols;	// 0x302e1b2d
- (void)reload;	// 0x302e2261
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x302e1a0d
// declared property setter: - (void)setDataSource:(id)source;	// 0x302e2241
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302e2b55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302e1a39
@end

