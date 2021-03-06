/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRTextControl, BRImageControl, BRSyncProgressControl;

@interface BRImageAndSyncingPreviewController : BRControl {
@private
	BRImageControl *_imageControl;	// 48 = 0x30
	BRReflectionControl *_reflectionControl;	// 52 = 0x34
	BRSyncProgressControl *_syncProgressControl;	// 56 = 0x38
	BRTextControl *_statusTextControl;	// 60 = 0x3c
	BOOL _hasProgress;	// 64 = 0x40
}
@property(readonly, retain) BRImageControl *imageControl;	// G=0x366e9cbd; converted property
- (id)init;	// 0x366e9929
- (void)_startSyncingProgress:(id)progress;	// 0x366e9eed
- (void)_stopSyncingProgress:(id)progress;	// 0x366ea071
- (void)_updateProgress:(id)progress;	// 0x366e9f85
- (void)controlWasActivated;	// 0x366e9ccd
- (void)dealloc;	// 0x366e99e1
// converted property getter: - (id)imageControl;	// 0x366e9cbd
- (void)layoutSubcontrols;	// 0x366e9a85
- (void)setHasSyncProgress:(BOOL)progress;	// 0x366e9d41
- (void)setImage:(id)image;	// 0x366e9c79
- (void)setReflectionAmount:(float)amount;	// 0x366e9ecd
- (void)setReflectionOffset:(float)offset;	// 0x366e9e79
- (void)setStatusMessage:(id)message;	// 0x366e9e11
@end

