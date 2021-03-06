/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSTimer;

@interface MSDaemon : NSObject {
@private
	int _busyCount;	// 4 = 0x4
	int _UIBusyCount;	// 8 = 0x8
	NSTimer *_hysteresisTimer;	// 12 = 0xc
	BOOL _stabilizedIsBusy;	// 16 = 0x10
}
@property(assign, nonatomic) int UIBusyCount;	// G=0x339f5365; S=0x339f5375; @synthesize=_UIBusyCount
@property(assign, nonatomic) int busyCount;	// G=0x339f5345; S=0x339f5355; @synthesize=_busyCount
@property(retain, nonatomic) NSTimer *hysteresisTimer;	// G=0x339f5385; S=0x339f5395; @synthesize=_hysteresisTimer
@property(assign, nonatomic) BOOL stabilizedIsBusy;	// G=0x339f53bd; S=0x339f53cd; @synthesize=_stabilizedIsBusy
- (void).cxx_destruct;	// 0x339f53dd
// declared property getter: - (int)UIBusyCount;	// 0x339f5365
- (void)_didChangeIdleBusyState:(BOOL)state;	// 0x339f5075
- (void)_hysteresisTimerDidFire:(id)_hysteresisTimer;	// 0x339f5291
// declared property getter: - (int)busyCount;	// 0x339f5345
- (void)didIdle;	// 0x339f5269
- (void)didUnidle;	// 0x339f527d
// declared property getter: - (id)hysteresisTimer;	// 0x339f5385
- (BOOL)isBusy;	// 0x339f4f45
- (void)releaseBusy;	// 0x339f4ea9
- (void)releasePowerAssertion;	// 0x339f5071
- (void)releaseUIBusy;	// 0x339f4fe5
- (void)retainBusy;	// 0x339f4e0d
- (void)retainPowerAssertion;	// 0x339f506d
- (void)retainUIBusy;	// 0x339f4f5d
// declared property setter: - (void)setBusyCount:(int)count;	// 0x339f5355
// declared property setter: - (void)setHysteresisTimer:(id)timer;	// 0x339f5395
// declared property setter: - (void)setStabilizedIsBusy:(BOOL)busy;	// 0x339f53cd
// declared property setter: - (void)setUIBusyCount:(int)count;	// 0x339f5375
- (void)stabilizedDidIdle;	// 0x339f533d
- (void)stabilizedDidUnidle;	// 0x339f5341
// declared property getter: - (BOOL)stabilizedIsBusy;	// 0x339f53bd
@end

