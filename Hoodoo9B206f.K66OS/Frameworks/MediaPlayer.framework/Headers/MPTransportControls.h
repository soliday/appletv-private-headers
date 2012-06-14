/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class NSMutableIndexSet, MPButton, MPAVItem, NSString, MPAVController;

@interface MPTransportControls : UIView {
	id _target;	// 48 = 0x30
	MPAVItem *_item;	// 52 = 0x34
	MPAVController *_player;	// 56 = 0x38
	unsigned _desiredParts;	// 60 = 0x3c
	unsigned _disabledParts;	// 64 = 0x40
	NSMutableIndexSet *_heldParts;	// 68 = 0x44
	unsigned _visibleParts;	// 72 = 0x48
	unsigned _playing : 1;	// 76 = 0x4c
	BOOL _allowsWirelessPlayback;	// 77 = 0x4d
	MPButton *_alternatesButton;	// 80 = 0x50
	MPButton *_bookmarkButton;	// 84 = 0x54
	MPButton *_chaptersButton;	// 88 = 0x58
	MPButton *_devicePickerButton;	// 92 = 0x5c
	MPButton *_emailButton;	// 96 = 0x60
	MPButton *_nextButton;	// 100 = 0x64
	MPButton *_playButton;	// 104 = 0x68
	MPButton *_previousButton;	// 108 = 0x6c
	MPButton *_scaleButton;	// 112 = 0x70
	MPButton *_rewind30SecondsButton;	// 116 = 0x74
	MPButton *_toggleFullscreenButton;	// 120 = 0x78
	id _volumeSlider;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x30376785; S=0x303751a1; @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned desiredParts;	// G=0x30376795; S=0x303751d5; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x303767a5; S=0x3037521d; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x303767b5; S=0x3037524d; @synthesize=_item
@property(readonly, assign, nonatomic) NSString *pauseButtonImage;	// G=0x30375345; 
@property(readonly, assign, nonatomic) NSString *playButtonImage;	// G=0x30375339; 
@property(readonly, assign, nonatomic) NSString *playPauseButtonImage;	// G=0x30375351; 
@property(retain, nonatomic) MPAVController *player;	// G=0x303767c5; S=0x30374af1; @synthesize=_player
@property(assign, nonatomic) id target;	// G=0x303767d5; S=0x303767e5; @synthesize=_target
@property(assign, nonatomic) unsigned visibleParts;	// G=0x303767f5; S=0x303752dd; @synthesize=_visibleParts
+ (Class)buttonClass;	// 0x3037509d
+ (unsigned)defaultVisibleParts;	// 0x303744a9
- (id)init;	// 0x303744f1
- (id)initWithFrame:(CGRect)frame;	// 0x30374525
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x30375389
- (void)_applyDesiredPartsWithAnimation:(BOOL)animation;	// 0x30375d71
- (unsigned)_applyPossibleVisiblePartsToParts:(unsigned)parts;	// 0x30375bdd
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x3037539d
- (void)_handleHoldForPart:(unsigned)part;	// 0x30375d95
- (void)_handleReleaseForPart:(unsigned)part;	// 0x30375e3d
- (void)_handleTapForPart:(unsigned)part;	// 0x30375ec1
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x303753f5
- (void)_itemChangedNotification:(id)notification;	// 0x30375469
- (void)_playbackStateChangedNotification:(id)notification;	// 0x303754a5
- (void)_reloadViewWithAnimation:(BOOL)animation;	// 0x30376075
- (void)_timeMarkersAvailableNotification:(id)notification;	// 0x30375409
- (id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned)part;	// 0x3037655d
- (void)_updateEnabledStates:(BOOL)states;	// 0x30376685
- (void)_validityChangedNotification:(id)notification;	// 0x303755f9
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x30376785
- (BOOL)allowsWirelessPlaybackForCurrentItem;	// 0x3037560d
- (BOOL)alwaysHidesSystemVolumeHUD;	// 0x30375bd9
- (void)buttonDown:(id)down;	// 0x30375659
- (id)buttonForPart:(unsigned)part;	// 0x303750b9
- (void)buttonHeld:(id)held;	// 0x30375695
- (void)buttonHoldReleased:(id)released;	// 0x303756e9
- (id)buttonImageForPart:(unsigned)part;	// 0x30375a45
- (void)buttonUp:(id)up;	// 0x30375719
- (void)dealloc;	// 0x30374751
// declared property getter: - (unsigned)desiredParts;	// 0x30376795
- (void)didMoveToSuperview;	// 0x30374ec5
- (void)didMoveToWindow;	// 0x30374e6d
// declared property getter: - (unsigned)disabledParts;	// 0x303767a5
- (id)highlightedButtonImageForPart:(unsigned)part;	// 0x30375bd1
// declared property getter: - (id)item;	// 0x303767b5
- (id)newButtonForPart:(unsigned)part;	// 0x30375771
- (id)newVolumeSlider;	// 0x30375921
// declared property getter: - (id)pauseButtonImage;	// 0x30375345
// declared property getter: - (id)playButtonImage;	// 0x30375339
// declared property getter: - (id)playPauseButtonImage;	// 0x30375351
// declared property getter: - (id)player;	// 0x303767c5
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x30375a41
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x303751a1
- (void)setAlpha:(float)alpha;	// 0x30374f1d
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x303751d5
- (void)setDesiredParts:(unsigned)parts animated:(BOOL)animated;	// 0x303751e9
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x3037521d
- (void)setFrame:(CGRect)frame;	// 0x30374fcd
- (void)setHidden:(BOOL)hidden;	// 0x30374f75
// declared property setter: - (void)setItem:(id)item;	// 0x3037524d
// declared property setter: - (void)setPlayer:(id)player;	// 0x30374af1
// declared property setter: - (void)setTarget:(id)target;	// 0x303767e5
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x303752dd
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x303752f1
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;	// 0x30375bd5
// declared property getter: - (id)target;	// 0x303767d5
// declared property getter: - (unsigned)visibleParts;	// 0x303767f5
@end

