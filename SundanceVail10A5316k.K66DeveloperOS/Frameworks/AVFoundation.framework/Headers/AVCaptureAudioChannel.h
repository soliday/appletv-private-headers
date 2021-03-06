/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
@private
	AVCaptureAudioChannelInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float averagePowerLevel;	// G=0x3674d8b5; 
@property(readonly, assign, nonatomic) float peakHoldLevel;	// G=0x3674d8e5; 
- (id)initWithConnection:(id)connection;	// 0x3674d7b9
// declared property getter: - (float)averagePowerLevel;	// 0x3674d8b5
- (void)dealloc;	// 0x3674d849
- (void)invalidate;	// 0x3674d895
// declared property getter: - (float)peakHoldLevel;	// 0x3674d8e5
@end

