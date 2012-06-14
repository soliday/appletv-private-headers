/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRMarimbaPlayback.h"
#import "MRMarimbaHitBlobSupport.h"
#import "MRMarimbaBasicPlayback.h"
#import <NSObject.h> // Unknown library
#import "EAGLDrawable.h"

@class MPDocument, MRRenderer, EAGLContext, NSDictionary, MRTexture;

@interface MRMarimbaFBO : NSObject <MRMarimbaHitBlobSupport, MRMarimbaPlayback, EAGLDrawable, MRMarimbaBasicPlayback> {
	MRRenderer *_renderer;	// 4 = 0x4
	MPDocument *_document;	// 8 = 0x8
	CGSize _size;	// 12 = 0xc
	BOOL _masterClockIsSet;	// 20 = 0x14
	BOOL _bailTimeWatcher;	// 21 = 0x15
	BOOL _stopWithVideo;	// 22 = 0x16
	BOOL _readOnly;	// 23 = 0x17
	EAGLContext *_context;	// 24 = 0x18
	MRTexture *_texture;	// 28 = 0x1c
}
@property(assign) BOOL bailTimeWatcher;	// G=0x321d555d; S=0x321d556d; converted property
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x321d45a9; S=0x321d45cd; 
@property(retain, nonatomic) MPDocument *document;	// G=0x321d5521; S=0x321d3fc9; @synthesize=_document
@property(copy) NSDictionary *drawableProperties;	// G=0x321d3af5; S=0x321d3b7d; 
@property(readonly, assign, nonatomic) BOOL isPlaying;	// G=0x321d43dd; 
@property(readonly, assign, nonatomic) MRRenderer *renderer;	// G=0x321d5531; @synthesize=_renderer
@property(assign, nonatomic) CGSize size;	// G=0x321d5541; S=0x321d3f5d; @synthesize=_size
@property(assign, nonatomic) BOOL stopWithVideo;	// G=0x321d44f9; S=0x321d4509; 
@property(readonly, retain) MRTexture *texture;	// G=0x321d3b81; converted property
@property(assign, nonatomic) double time;	// G=0x321d45ed; S=0x321d460d; 
@property(readonly, assign, nonatomic) double timeRemaining;	// G=0x321d4651; 
@property(assign, nonatomic) float volume;	// G=0x321d46b1; S=0x321d46d1; 
+ (id)fboWithDocument:(id)document size:(CGSize)size;	// 0x321d3751
+ (id)fboWithDocument:(id)document size:(CGSize)size context:(id)context;	// 0x321d36c9
+ (void)releaseResources;	// 0x321d37c5
- (id)init;	// 0x321d38f9
- (id)_currentEffectContainer;	// 0x321d004d
- (id)_effectContainerForTime:(double)time;	// 0x321d0801
- (id)_firstEffectContainer;	// 0x321d0755
- (int)_mainLayerIndex;	// 0x321d0929
- (void)_warmupRendererThreaded:(id)threaded;	// 0x321d49e5
- (void)aspectRatioChangedTo:(id)to;	// 0x321d52f9
// converted property getter: - (BOOL)bailTimeWatcher;	// 0x321d555d
- (void)beginGesture:(id)gesture;	// 0x321d2d49
- (BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;	// 0x321d252d
- (id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint *)point3;	// 0x321d2011
- (void)callbackThread:(id)thread;	// 0x321d09dd
- (void)cancelGesture:(id)gesture;	// 0x321d3619
- (void)cleanup;	// 0x321d39d1
- (CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;	// 0x321d2451
- (id)currentSlide;	// 0x321d0d55
- (id)currentSlides;	// 0x321d0ba5
- (void)dealloc;	// 0x321d394d
- (void)didAddEffects:(id)effects;	// 0x321d5285
- (void)didLiveChanged:(id)changed;	// 0x321d4341
- (id)displayedEffectContainers;	// 0x321cf661
// declared property getter: - (BOOL)displaysFPS;	// 0x321d45a9
- (void)doGesture:(id)gesture;	// 0x321d30f9
// declared property getter: - (id)document;	// 0x321d5521
// declared property getter: - (id)drawableProperties;	// 0x321d3af5
- (BOOL)effect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x321d4e39
- (BOOL)effectRequestedSlidesAfterDelay:(id)delay;	// 0x321d5165
- (void)endGesture:(id)gesture;	// 0x321d35c9
- (BOOL)endLiveUpdateForHitBlob:(id)hitBlob;	// 0x321d2949
- (BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;	// 0x321d2219
- (void)goBack;	// 0x321d46f1
- (void)goForth;	// 0x321d4711
- (void)gotoBeginning;	// 0x321d47e9
- (void)gotoEnd;	// 0x321d4731
- (void)gotoNextSlide;	// 0x321d1135
- (void)gotoPreviousSlide;	// 0x321d175d
- (void)gotoSlide:(id)slide;	// 0x321d1ce1
- (void)hitCanceledForKey:(id)key;	// 0x321d54c1
- (void)hitForKey:(id)key endsAt:(CGPoint)at withModifiers:(unsigned)modifiers;	// 0x321d5469
- (void)hitForKey:(id)key startsAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x321d53d1
- (void)hitForKey:(id)key tracksAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x321d5429
- (BOOL)isInTransition;	// 0x321d0211
// declared property getter: - (BOOL)isPlaying;	// 0x321d43dd
- (void)lockRendering;	// 0x321d4a55
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x321cf6c5
- (void)moveToNextEffectContainer;	// 0x321cf8c9
- (void)moveToPreviousEffectContainer;	// 0x321cf9a5
- (void)moveToSubtitleForSlide:(id)slide;	// 0x321cfd69
- (void)moveToTitleSlide;	// 0x321cfa7d
- (BOOL)nearingEndForSerializer:(id)serializer;	// 0x321d4ab5
- (BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;	// 0x321d4d4d
- (void)nextFrame;	// 0x321d4835
- (void)pause;	// 0x321d44bd
- (void)play;	// 0x321d4401
- (void)prevFrame;	// 0x321d489d
- (double)relativeTime;	// 0x321cf509
- (double)relativeTimeForBackgroundAudio;	// 0x321cf559
- (double)relativeTimeForLayer:(id)layer;	// 0x321cf5b9
- (void)removeEffectContainersBeforeTime:(double)time;	// 0x321d0f09
- (void)removeFadeIn;	// 0x321d1ebd
// declared property getter: - (id)renderer;	// 0x321d5531
- (void)requestRendering:(BOOL)rendering;	// 0x321d4905
// converted property setter: - (void)setBailTimeWatcher:(BOOL)watcher;	// 0x321d556d
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x321d45cd
// declared property setter: - (void)setDocument:(id)document;	// 0x321d3fc9
// declared property setter: - (void)setDrawableProperties:(id)properties;	// 0x321d3b7d
- (void)setEAGLContext:(id)context;	// 0x321d3a65
// declared property setter: - (void)setSize:(CGSize)size;	// 0x321d3f5d
- (void)setSlaveFrameMode:(BOOL)mode;	// 0x321d4a95
// declared property setter: - (void)setStopWithVideo:(BOOL)video;	// 0x321d4509
// declared property setter: - (void)setTime:(double)time;	// 0x321d460d
// declared property setter: - (void)setVolume:(float)volume;	// 0x321d46d1
// declared property getter: - (CGSize)size;	// 0x321d5541
- (CGImageRef)snapshotAsCGImage;	// 0x321d53b1
- (CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;	// 0x321d52fd
// declared property getter: - (BOOL)stopWithVideo;	// 0x321d44f9
- (void)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x321d54e1
- (void)switchToDirectInCALayer:(id)calayer;	// 0x321d3c31
- (void)switchToTexture;	// 0x321d3dc1
// converted property getter: - (id)texture;	// 0x321d3b81
- (unsigned)textureName;	// 0x321d3b91
// declared property getter: - (double)time;	// 0x321d45ed
// declared property getter: - (double)timeRemaining;	// 0x321d4651
- (void)togglePlayback;	// 0x321d4391
- (void)unlockRendering;	// 0x321d4a75
// declared property getter: - (float)volume;	// 0x321d46b1
- (void)warmupRenderer;	// 0x321d4925
- (void)watcherThread:(id)thread;	// 0x321d0ac5
- (void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;	// 0x321d0425
@end

