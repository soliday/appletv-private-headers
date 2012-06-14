/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "PTPCameraFolder.h"

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 20 = 0x14
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x3550297d; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x3550298d; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x35506439
- (void)dealloc;	// 0x355067c9
- (void)prime;	// 0x355064a9
- (void)refreshInfo;	// 0x35506749
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x3550297d
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x3550298d
@end

