/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureInput.h"

@class AVCaptureDeviceInputInternal, AVCaptureDevice;

@interface AVCaptureDeviceInput : AVCaptureInput {
@private
	AVCaptureDeviceInputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVCaptureDevice *device;	// G=0x34765c11; 
+ (id)deviceInputWithDevice:(id)device error:(id *)error;	// 0x3476622d
- (id)init;	// 0x34766171
- (id)initWithDevice:(id)device error:(id *)error;	// 0x34766189
- (void)_setDevice:(id)device;	// 0x34765fdd
- (void)dealloc;	// 0x34766115
- (id)description;	// 0x34766275
// declared property getter: - (id)device;	// 0x34765c11
- (void)didStartForSession:(id)session;	// 0x34765cb1
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x34765c31
- (id)notReadyError;	// 0x347662f1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34765f9d
- (id)ports;	// 0x34765d59
- (void)setDevice:(id)device;	// 0x34765c2d
- (void)setSession:(id)session;	// 0x34765d05
@end

