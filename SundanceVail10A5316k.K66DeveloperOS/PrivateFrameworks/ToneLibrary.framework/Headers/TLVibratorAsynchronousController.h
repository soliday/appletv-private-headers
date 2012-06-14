/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibratorController.h"

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface TLVibratorAsynchronousController : TLVibratorController {
	NSObject<OS_dispatch_queue> *_avControllerAccessQueue;	// 12 = 0xc
	NSDictionary *_vibrationPattern;	// 16 = 0x10
	int _nextIterationScheduledStatus;	// 20 = 0x14
}
@property(retain, setter=_setVibrationPattern:) NSDictionary *_vibrationPattern;	// G=0x35cc2f51; S=0x35cc2f65; @synthesize
- (id)initWithAVController:(id)avcontroller;	// 0x35cc29a9
- (void)_processNextIteration;	// 0x35cc2eb9
- (void)_scheduleNextIterationIfNeeded;	// 0x35cc2e21
// declared property setter: - (void)_setVibrationPattern:(id)pattern;	// 0x35cc2f65
// declared property getter: - (id)_vibrationPattern;	// 0x35cc2f51
- (id)avController;	// 0x35cc2b21
- (void)dealloc;	// 0x35cc2ab1
- (void)setAVController:(id)controller;	// 0x35cc2c61
- (void)turnOff;	// 0x35cc2df1
- (void)turnOnWithVibrationPattern:(id)vibrationPattern;	// 0x35cc2dc1
- (void)uninterruptAVControllerIfAppropriate;	// 0x35cc2d29
@end
