/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, AVCaptureSession;

@interface AVCaptureOutputInternal : NSObject {
	AVCaptureSession *session;	// 4 = 0x4
	NSMutableArray *connections;	// 8 = 0x8
	int changeSeed;	// 12 = 0xc
}
- (id)init;	// 0x35e57909
- (void)dealloc;	// 0x35e57989
@end

