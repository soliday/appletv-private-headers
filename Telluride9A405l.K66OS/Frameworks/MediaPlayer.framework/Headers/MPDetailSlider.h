/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UILabel, NSTimer, UIImageView, NSString;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	unsigned _allowsDetailScrubbing : 1;	// 132 = 0x84
	id _delegate;	// 136 = 0x88
	float _detailScrubbingVerticalRange;	// 140 = 0x8c
	UIImageView *_downloadingTrackOverlay;	// 144 = 0x90
	UIImageView *_thumbImageView;	// 148 = 0x94
	UIImageView *_glowDetailScrubImageView;	// 152 = 0x98
	unsigned _isTracking : 1;	// 156 = 0x9c
	unsigned _didBeginTracking : 1;	// 156 = 0x9c
	unsigned _needsCommit : 1;	// 156 = 0x9c
	unsigned _canCommit : 1;	// 156 = 0x9c
	CGPoint _beginLocationInView;	// 160 = 0xa0
	CGPoint _previousLocationInView;	// 168 = 0xa8
	CGPoint _lastCommittedLocationInView;	// 176 = 0xb0
	double _currentTime;	// 184 = 0xb8
	double _duration;	// 192 = 0xc0
	double _availableDuration;	// 200 = 0xc8
	float _minScale;	// 208 = 0xd0
	unsigned _durationAllowsDetailScrubbing : 1;	// 212 = 0xd4
	UILabel *_currentTimeLabel;	// 216 = 0xd8
	UILabel *_currentTimeInverseLabel;	// 220 = 0xdc
	float _trackInset;	// 224 = 0xe0
	float _maxTrackWidth;	// 228 = 0xe4
	UIEdgeInsets _timeLabelInsets;	// 232 = 0xe8
	int _timeLabelStyle;	// 248 = 0xf8
	int _scrubValue;	// 252 = 0xfc
	unsigned _autoscrubActive : 1;	// 256 = 0x100
	NSTimer *_autoscrubTimer;	// 260 = 0x104
	int _style;	// 264 = 0x108
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x33c0d1c5; S=0x33c0d1a1; 
@property(assign, nonatomic) double availableDuration;	// G=0x33c0ef09; S=0x33c0d319; @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// G=0x33c0ef21; S=0x33c0ef31; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;	// G=0x33c0d399; 
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// G=0x33c0ef41; S=0x33c0ef51; @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// G=0x33c0ef61; S=0x33c0d1d9; @synthesize=_duration
@property(readonly, assign, nonatomic) NSString *localizedScrubSpeedText;	// G=0x33c0d561; 
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// G=0x33c0ef79; S=0x33c0d3f5; @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// G=0x33c0ef9d; S=0x33c0d3c9; @synthesize=_timeLabelStyle
+ (float)defaultHeight;	// 0x33c0d17d
+ (Class)labelClass;	// 0x33c0d185
- (id)initWithFrame:(CGRect)frame;	// 0x33c0b3a5
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x33c0b36d
- (id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;	// 0x33c0b2b9
- (void)_adjustMinScale;	// 0x33c0dd75
- (void)_autoscrubTick:(id)tick;	// 0x33c0c3f9
- (void)_commitValue;	// 0x33c0e49d
- (void)_resetScrubInfo;	// 0x33c0e415
- (float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;	// 0x33c0df31
- (float)_scaleForVerticalPosition:(float)verticalPosition;	// 0x33c0dde5
- (void)_setValueWhileTracking:(float)tracking animated:(BOOL)animated;	// 0x33c0c14d
- (void)_setupControlsForStyle;	// 0x33c0d7d1
- (id)_stringForCurrentTime:(double)currentTime;	// 0x33c0e235
- (id)_stringForInverseCurrentTime:(double)inverseCurrentTime;	// 0x33c0e311
- (id)_stringForTime:(double)time;	// 0x33c0e11d
- (void)_updateForAvailableDuraton;	// 0x33c0e545
- (void)_updateTimeDisplayForTime:(double)time;	// 0x33c0e015
- (void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;	// 0x33c0e039
- (void)_updateTrackInset;	// 0x33c0da0d
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x33c0d1c5
// declared property getter: - (double)availableDuration;	// 0x33c0ef09
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33c0c28d
- (void)cancelTracking;	// 0x33c0d481
- (void)cancelTrackingWithEvent:(id)event;	// 0x33c0d159
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33c0c675
- (id)createThumbView;	// 0x33c0bb65
- (id)currentThumbImage;	// 0x33c0bba5
- (void)dealloc;	// 0x33c0b3d5
// declared property getter: - (id)delegate;	// 0x33c0ef21
// declared property getter: - (BOOL)detailScrubbingAvailableForCurrentDuration;	// 0x33c0d399
// declared property getter: - (float)detailScrubbingVerticalRange;	// 0x33c0ef41
// declared property getter: - (double)duration;	// 0x33c0ef61
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33c0d005
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33c0bab9
- (BOOL)isTracking;	// 0x33c0d169
- (void)layoutSubviews;	// 0x33c0b485
// declared property getter: - (id)localizedScrubSpeedText;	// 0x33c0d561
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x33c0d1a1
// declared property setter: - (void)setAvailableDuration:(double)duration;	// 0x33c0d319
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c0ef31
// declared property setter: - (void)setDetailScrubbingVerticalRange:(float)range;	// 0x33c0ef51
// declared property setter: - (void)setDuration:(double)duration;	// 0x33c0d1d9
- (void)setFrame:(CGRect)frame;	// 0x33c0ba55
// declared property setter: - (void)setTimeLabelInsets:(UIEdgeInsets)insets;	// 0x33c0d3f5
// declared property setter: - (void)setTimeLabelStyle:(int)style;	// 0x33c0d3c9
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x33c0c11d
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x33c0bf75
- (id)timeLabelFontForStyle:(int)style;	// 0x33c0d675
// declared property getter: - (UIEdgeInsets)timeLabelInsets;	// 0x33c0ef79
- (id)timeLabelShadowColorForStyle:(int)style;	// 0x33c0d729
- (CGSize)timeLabelShadowOffsetForStyle:(int)style;	// 0x33c0d77d
// declared property getter: - (int)timeLabelStyle;	// 0x33c0ef9d
- (id)timeLabelTextColorForStyle:(int)style;	// 0x33c0d7ad
- (float)timeLabelVerticalOffsetForStyle:(int)style;	// 0x33c0d7c9
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x33c0bead
@end

