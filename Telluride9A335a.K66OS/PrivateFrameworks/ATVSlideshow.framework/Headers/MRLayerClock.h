/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MRLayerClock : NSObject {
	double _time;	// 4 = 0x4
	double _layerDuration;	// 12 = 0xc
	double _containerTime;	// 20 = 0x14
	double _containerDuration;	// 28 = 0x1c
	double _localTimeOffset;	// 36 = 0x24
	double _stopAtTime;	// 44 = 0x2c
	int _currentLoopIndex;	// 52 = 0x34
	unsigned _flags;	// 56 = 0x38
}
@property(readonly, assign) double containerDuration;	// G=0x31b4bee9; @synthesize=_containerDuration
@property(readonly, assign) double croppedContainerTime;	// G=0x31b4bdb5; 
@property(readonly, assign) int currentLoopIndex;	// G=0x31b4bf75; @synthesize=_currentLoopIndex
@property(readonly, assign) double extendedContainerTime;	// G=0x31b4beb5; @synthesize=_containerTime
@property(readonly, assign) BOOL isInPhaseIn;	// G=0x31b4be35; 
@property(readonly, assign) BOOL isInPhaseOut;	// G=0x31b4be49; 
@property(readonly, assign) BOOL isPaused;	// G=0x31b4be05; 
@property(readonly, assign) BOOL jumpedBackInTime;	// G=0x31b4be21; 
@property(assign, nonatomic) double layerDuration;	// G=0x31b4be89; S=0x31b4bea1; @synthesize=_layerDuration
@property(assign, nonatomic) double localTimeOffset;	// G=0x31b4bf1d; S=0x31b4bf35; @synthesize=_localTimeOffset
@property(assign, nonatomic) double stopAtTime;	// G=0x31b4bf49; S=0x31b4bf61; @synthesize=_stopAtTime
@property(assign, nonatomic) double time;	// G=0x31b4be5d; S=0x31b4be75; @synthesize=_time
- (id)init;	// 0x31b4b92d
// declared property getter: - (double)containerDuration;	// 0x31b4bee9
// declared property getter: - (double)croppedContainerTime;	// 0x31b4bdb5
// declared property getter: - (int)currentLoopIndex;	// 0x31b4bf75
// declared property getter: - (double)extendedContainerTime;	// 0x31b4beb5
// declared property getter: - (BOOL)isInPhaseIn;	// 0x31b4be35
// declared property getter: - (BOOL)isInPhaseOut;	// 0x31b4be49
// declared property getter: - (BOOL)isPaused;	// 0x31b4be05
// declared property getter: - (BOOL)jumpedBackInTime;	// 0x31b4be21
// declared property getter: - (double)layerDuration;	// 0x31b4be89
// declared property getter: - (double)localTimeOffset;	// 0x31b4bf1d
- (void)pauseOnNextUpdate;	// 0x31b4bd6d
- (void)reactivate:(BOOL)reactivate;	// 0x31b4b97d
- (void)resumeOnNextUpdate;	// 0x31b4bd41
// declared property setter: - (void)setLayerDuration:(double)duration;	// 0x31b4bea1
// declared property setter: - (void)setLocalTimeOffset:(double)offset;	// 0x31b4bf35
- (void)setParentIsPaused:(BOOL)paused;	// 0x31b4bd91
// declared property setter: - (void)setStopAtTime:(double)time;	// 0x31b4bf61
// declared property setter: - (void)setTime:(double)time;	// 0x31b4be75
// declared property getter: - (double)stopAtTime;	// 0x31b4bf49
// declared property getter: - (double)time;	// 0x31b4be5d
- (void)updateForTime:(double)time andPlug:(id)plug;	// 0x31b4b9fd
@end
