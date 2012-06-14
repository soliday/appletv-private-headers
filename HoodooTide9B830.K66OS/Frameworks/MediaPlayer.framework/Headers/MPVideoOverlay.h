/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"

@class MPAVController, MPVideoViewController, MPAVItem, UINavigationBar, MPDetailSlider, NSMutableDictionary;
@protocol MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) int interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item;
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;
@property(retain, nonatomic) MPAVController *player;
@property(assign, nonatomic) MPVideoViewController *videoViewController;
@property(assign, nonatomic) unsigned visibleParts;
// declared property getter: - (BOOL)allowsWirelessPlayback;
// declared property getter: - (id)delegate;
// declared property getter: - (unsigned)desiredParts;
// declared property getter: - (unsigned)disabledParts;
- (void)hideAlternateTracks;
// declared property getter: - (int)interfaceOrientation;
// declared property getter: - (id)item;
// declared property getter: - (id)navigationBar;
// declared property getter: - (id)player;
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setDesiredParts:(unsigned)parts;
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
// declared property setter: - (void)setDisabledParts:(unsigned)parts;
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;
// declared property setter: - (void)setItem:(id)item;
// declared property setter: - (void)setPlayer:(id)player;
// declared property setter: - (void)setVideoViewController:(id)controller;
// declared property setter: - (void)setVisibleParts:(unsigned)parts;
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (BOOL)updateTimeBasedValues;
// declared property getter: - (id)videoViewController;
// declared property getter: - (unsigned)visibleParts;
@end

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
	MPVideoViewController *_videoViewController;	// 48 = 0x30
	id<MPVideoOverlayDelegate> _delegate;	// 52 = 0x34
	MPAVItem *_item;	// 56 = 0x38
	MPAVController *_player;	// 60 = 0x3c
	MPDetailSlider *_scrubControl;	// 64 = 0x40
	int _interfaceOrientation;	// 68 = 0x44
	BOOL _controlsAutohideDisabled;	// 72 = 0x48
	BOOL _wantsTick;	// 73 = 0x49
	unsigned _desiredParts;	// 76 = 0x4c
	unsigned _visibleParts;	// 80 = 0x50
	unsigned _disabledParts;	// 84 = 0x54
	NSMutableDictionary *_tickTimeEvents;	// 88 = 0x58
	double _lastTickTime;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x346a3e75; S=0x346a3e79; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x346a466d; S=0x346a467d; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x346a468d; S=0x346a3ef9; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x346a469d; S=0x346a46ad; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x346a46cd; S=0x346a46dd; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x346a46bd; S=0x346a3e7d; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x346a4035; 
@property(retain, nonatomic) MPAVController *player;	// G=0x346a46ed; S=0x346a46fd; @synthesize=_player
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x346a4721; S=0x346a3f1d; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x346a4731; S=0x346a3f61; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x346a389d
- (double)_duration;	// 0x346a456d
- (void)_endSliderTracking;	// 0x346a3c85
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x346a3dad
- (double)_playableDuration;	// 0x346a45ed
- (void)_tickNotification:(id)notification;	// 0x346a3d35
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x346a3e75
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;	// 0x346a4475
- (void)dealloc;	// 0x346a399d
// declared property getter: - (id)delegate;	// 0x346a466d
// declared property getter: - (unsigned)desiredParts;	// 0x346a468d
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x346a3c21
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x346a3b25
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x346a3c11
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x346a3c01
- (void)didMoveToSuperview;	// 0x346a3aad
// declared property getter: - (unsigned)disabledParts;	// 0x346a469d
- (void)hideAlternateTracks;	// 0x346a4031
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x346a3ae9
// declared property getter: - (int)interfaceOrientation;	// 0x346a46cd
// declared property getter: - (id)item;	// 0x346a46bd
- (void)layoutSubviews;	// 0x346a3aa9
// declared property getter: - (id)navigationBar;	// 0x346a4035
- (void)performSelector:(SEL)selector whenTickingPastTime:(double)time;	// 0x346a4385
// declared property getter: - (id)player;	// 0x346a46ed
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x346a3e79
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x346a467d
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x346a3ef9
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x346a3f0d
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x346a46ad
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x346a46dd
// declared property setter: - (void)setItem:(id)item;	// 0x346a3e7d
// declared property setter: - (void)setPlayer:(id)player;	// 0x346a46fd
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x346a3f1d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x346a3f61
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x346a3f75
- (void)showAlternateTracks;	// 0x346a402d
- (void)startTicking;	// 0x346a3f85
- (void)stopTicking;	// 0x346a3fe9
- (BOOL)updateTimeBasedValues;	// 0x346a4039
// declared property getter: - (id)videoViewController;	// 0x346a4721
// declared property getter: - (unsigned)visibleParts;	// 0x346a4731
@end
