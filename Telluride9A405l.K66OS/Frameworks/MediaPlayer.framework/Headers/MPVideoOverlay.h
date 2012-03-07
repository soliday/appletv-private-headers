/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"
#import <UIView.h> // Unknown library

@class MPAVController, MPVideoViewController, MPAVItem, UINavigationBar, NSMutableDictionary, MPDetailSlider;
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
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x33c20799; S=0x33c2079d; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x33c20f91; S=0x33c20fa1; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x33c20fb1; S=0x33c2081d; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x33c20fc1; S=0x33c20fd1; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x33c20ff1; S=0x33c21001; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x33c20fe1; S=0x33c207a1; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x33c20959; 
@property(retain, nonatomic) MPAVController *player;	// G=0x33c21011; S=0x33c21021; @synthesize=_player
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x33c21045; S=0x33c20841; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x33c21055; S=0x33c20885; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x33c201c1
- (double)_duration;	// 0x33c20e91
- (void)_endSliderTracking;	// 0x33c205a9
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x33c206d1
- (double)_playableDuration;	// 0x33c20f11
- (void)_tickNotification:(id)notification;	// 0x33c20659
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x33c20799
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;	// 0x33c20d99
- (void)dealloc;	// 0x33c202c1
// declared property getter: - (id)delegate;	// 0x33c20f91
// declared property getter: - (unsigned)desiredParts;	// 0x33c20fb1
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x33c20545
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x33c20449
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x33c20535
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x33c20525
- (void)didMoveToSuperview;	// 0x33c203d1
// declared property getter: - (unsigned)disabledParts;	// 0x33c20fc1
- (void)hideAlternateTracks;	// 0x33c20955
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33c2040d
// declared property getter: - (int)interfaceOrientation;	// 0x33c20ff1
// declared property getter: - (id)item;	// 0x33c20fe1
- (void)layoutSubviews;	// 0x33c203cd
// declared property getter: - (id)navigationBar;	// 0x33c20959
- (void)performSelector:(SEL)selector whenTickingPastTime:(double)time;	// 0x33c20ca9
// declared property getter: - (id)player;	// 0x33c21011
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x33c2079d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c20fa1
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x33c2081d
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x33c20831
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x33c20fd1
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x33c21001
// declared property setter: - (void)setItem:(id)item;	// 0x33c207a1
// declared property setter: - (void)setPlayer:(id)player;	// 0x33c21021
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x33c20841
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x33c20885
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x33c20899
- (void)showAlternateTracks;	// 0x33c20951
- (void)startTicking;	// 0x33c208a9
- (void)stopTicking;	// 0x33c2090d
- (BOOL)updateTimeBasedValues;	// 0x33c2095d
// declared property getter: - (id)videoViewController;	// 0x33c21045
// declared property getter: - (unsigned)visibleParts;	// 0x33c21055
@end
