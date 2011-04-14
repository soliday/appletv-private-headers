/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTAVChapter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVMetadataItem;

@interface LTAVChapter : XXUnknownSuperclass {
	AVMetadataItem *_titleMetadataItem;	// 4 = 0x4
	AVMetadataItem *_imageMetadataItem;	// 8 = 0x8
}
+ (id)chapterWithTimedMetadataGroup:(id)timedMetadataGroup assetID:(id)anId;	// 0x3c23d
- (void)dealloc;	// 0x3c1d1
- (id)imageProxy;	// 0x3c12d
- (void)invalidate;	// 0x3c191
@end

@interface LTAVChapter (Private)
- (void)_setImageMetadataItem:(id)item;	// 0x3c0f5
- (void)_setTitleMetadataItem:(id)item;	// 0x3bfd9
@end
