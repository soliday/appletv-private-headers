/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class CALayer, MPVideoBufferLayerContainer, NSString, MPAVController, MPMovieSnapshotController;

@interface MPVideoView : UIView {
	MPAVController *_player;	// 48 = 0x30
	UIView *_videoBufferContainerView;	// 52 = 0x34
	MPVideoBufferLayerContainer *_videoBufferContainerLayer;	// 56 = 0x38
	CALayer *_videoBufferLayer;	// 60 = 0x3c
	MPMovieSnapshotController *_snapshotController;	// 64 = 0x40
	NSString *_moviePath;	// 68 = 0x44
	NSString *_movieSubtitle;	// 72 = 0x48
	NSString *_movieTitle;	// 76 = 0x4c
	NSString *_videoID;	// 80 = 0x50
	unsigned _scaleMode;	// 84 = 0x54
	double _startTime;	// 88 = 0x58
	double _stopTime;	// 96 = 0x60
	unsigned _effectiveScaleMode;	// 104 = 0x68
	unsigned _disableFudgingScaleToFullScreen : 1;	// 108 = 0x6c
	unsigned _requiresIntegralScreenFrame : 1;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x3097324d; 
@property(assign) double currentTime;	// G=0x30974b2d; S=0x30974c59; converted property
@property(assign, nonatomic) unsigned effectiveScaleMode;	// G=0x3097498d; S=0x3097499d; @synthesize=_effectiveScaleMode
@property(readonly, assign, nonatomic) CGRect movieFrame;	// G=0x30973999; 
@property(readonly, retain) NSString *moviePath;	// G=0x30973339; converted property
@property(retain, nonatomic) NSString *movieSubtitle;	// G=0x30973349; S=0x309749ad; @synthesize=_movieSubtitle
@property(retain, nonatomic) NSString *movieTitle;	// G=0x309749d1; S=0x309749e1; @synthesize=_movieTitle
@property(assign, nonatomic) MPAVController *player;	// G=0x30974a05; S=0x30974a15; @synthesize=_player
@property(assign, nonatomic) BOOL requiresIntegralScreenFrame;	// G=0x3097395d; S=0x30973971; 
@property(assign, nonatomic) unsigned scaleMode;	// G=0x30974a25; S=0x309737b5; @synthesize=_scaleMode
@property(assign, nonatomic) double startTime;	// G=0x30974a35; S=0x30974a4d; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x30974a61; S=0x30974a79; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x30974a8d; S=0x30974a9d; @synthesize=_videoID
- (id)initWithFrame:(CGRect)frame;	// 0x30972c61
- (void)_AddVideoBufferLayerToViewHierarchyAndHideIfNecessary;	// 0x309744e5
- (BOOL)_allowFudgingScaleToFullScreen;	// 0x30973d99
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x30973a3d
- (BOOL)_isCloseToFullScreenWithTransform:(CGAffineTransform)transform;	// 0x30973d51
- (BOOL)_isExactlyFullScreenWithTransform:(CGAffineTransform)transform;	// 0x30973d09
- (void)_itemWillChangeNotification:(id)_item;	// 0x30973a85
- (void)_layoutSublayers;	// 0x30973fb1
- (void)_layoutVideoLayers:(BOOL)layers;	// 0x30973fc5
- (void)_playbackStateChangedNotification:(id)notification;	// 0x30973a95
- (void)_sizeDidChangedNotification:(id)_size;	// 0x30973b4d
- (BOOL)_sizeDifferenceFromFullScreenIsLessThan:(CGSize)fullScreenIsLessThan allowingZero:(BOOL)zero withTransform:(CGAffineTransform)transform;	// 0x30973e11
- (void)_validityChangedNotification:(id)notification;	// 0x30973b7d
- (void)addSubview:(id)subview;	// 0x309746e5
- (id)avPlayer;	// 0x30974ad5
- (void)bringSubviewToFront:(id)front;	// 0x30974739
- (int)bufferingStatusMask;	// 0x30974b0d
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x3097324d
- (void)cancelSnapshots;	// 0x30973be1
// converted property getter: - (double)currentTime;	// 0x30974b2d
- (void)dealloc;	// 0x30973025
- (double)duration;	// 0x30974b4d
// declared property getter: - (unsigned)effectiveScaleMode;	// 0x3097498d
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x30974691
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30974809
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x3097463d
- (void)insertSubview:(id)subview below:(id)below;	// 0x3097478d
// declared property getter: - (CGRect)movieFrame;	// 0x30973999
// converted property getter: - (id)moviePath;	// 0x30973339
// declared property getter: - (id)movieSubtitle;	// 0x30973349
// declared property getter: - (id)movieTitle;	// 0x309749d1
- (id)mpavController;	// 0x30974ac1
- (void)pause;	// 0x30974c19
- (void)play;	// 0x30973775
- (void)play;	// 0x30974c39
- (void)playFromBeginning;	// 0x3097370d
- (void)playWhenLikelyToKeepUp;	// 0x309736cd
- (int)playableContentType;	// 0x30974b85
- (int)playbackState;	// 0x30974bcd
// declared property getter: - (id)player;	// 0x30974a05
- (void)prepareAVControllerQueue;	// 0x309733cd
- (void)prepareToDisplayVideo;	// 0x309735d1
// declared property getter: - (BOOL)requiresIntegralScreenFrame;	// 0x3097395d
// declared property getter: - (unsigned)scaleMode;	// 0x30974a25
- (void)scheduleThumbnailWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x30973c39
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x30974c59
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x30974c7d
// declared property setter: - (void)setEffectiveScaleMode:(unsigned)mode;	// 0x3097499d
- (void)setFrame:(CGRect)frame;	// 0x30974865
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x309749ad
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x309749e1
- (void)setMovieWithPath:(id)path;	// 0x309735e1
- (void)setNeedsDisplay;	// 0x309748ad
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x30974905
// declared property setter: - (void)setPlayer:(id)player;	// 0x30974a15
- (void)setRepeatMode:(int)mode;	// 0x30974cc1
// declared property setter: - (void)setRequiresIntegralScreenFrame:(BOOL)frame;	// 0x30973971
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x309737b5
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x309738f5
- (void)setScaleMode:(unsigned)mode duration:(float)duration;	// 0x309737c9
// declared property setter: - (void)setStartTime:(double)time;	// 0x30974a4d
// declared property setter: - (void)setStopTime:(double)time;	// 0x30974a79
// declared property setter: - (void)setVideoID:(id)anId;	// 0x30974a9d
// declared property getter: - (double)startTime;	// 0x30974a35
- (void)stop;	// 0x30974ce1
// declared property getter: - (double)stopTime;	// 0x30974a61
- (void)toggleScaleMode:(BOOL)mode;	// 0x30973925
// declared property getter: - (id)videoID;	// 0x30974a8d
- (id)viewWithTag:(int)tag;	// 0x309747e1
@end

