/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library

@class CADisplayLink, UIImageView;

@interface MPDownloadProgressIndicator : UIButton {
@private
	float _animatedStartValue;	// 140 = 0x8c
	float _animatedValue;	// 144 = 0x90
	BOOL _animating;	// 148 = 0x94
	BOOL _canCancel;	// 149 = 0x95
	double _animationEndTime;	// 152 = 0x98
	double _animationStartTime;	// 160 = 0xa0
	CADisplayLink *_displayLink;	// 168 = 0xa8
	UIImageView *_centerImageView;	// 172 = 0xac
	BOOL _mpExternalHidden;	// 176 = 0xb0
	BOOL _mpInternalHidden;	// 177 = 0xb1
	int _style;	// 180 = 0xb4
	float _value;	// 184 = 0xb8
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x303ef5c1; S=0x303eec2d; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x303ef5d1; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x303ef5e1; S=0x303eecb1; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x303eefb1
+ (id)_fillImageForStyle:(int)style;	// 0x303ef091
+ (id)_nonstopImageForStyle:(int)style;	// 0x303ef1b5
+ (CGSize)_sizeForStyle:(int)style;	// 0x303ef209
+ (id)_stopImageForStyle:(int)style;	// 0x303ef251
- (id)initWithStyle:(int)style;	// 0x303ee46d
- (void)_animateValueOnDisplayLink:(id)link;	// 0x303ef331
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x303ef47d
- (CGRect)_centerImageViewFrame:(CGRect)frame inBounds:(CGRect)bounds forStyle:(int)style;	// 0x303ef4bd
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x303ef525
- (void)_setInternalHidden:(BOOL)hidden;	// 0x303ef565
// declared property getter: - (BOOL)canCancel;	// 0x303ef5c1
- (void)dealloc;	// 0x303ee631
- (void)drawRect:(CGRect)rect;	// 0x303ee691
- (void)layoutSubviews;	// 0x303eeadd
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x303eec2d
- (void)setHidden:(BOOL)hidden;	// 0x303eebd5
// declared property setter: - (void)setValue:(float)value;	// 0x303eecb1
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x303eecc5
// declared property getter: - (int)style;	// 0x303ef5d1
- (void)updateFromObserver:(id)observer;	// 0x303eeec9
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x303eeedd
// declared property getter: - (float)value;	// 0x303ef5e1
@end

