/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraItem.h"

@class NSMutableDictionary;

@interface ICCameraFile : ICCameraItem {
@private
	void *_fileProperties;	// 8 = 0x8
}
@property(assign) BOOL fetchingMetadata;	// G=0x301a7759; S=0x301a777d; 
@property(assign) BOOL fetchingThumbnail;	// G=0x301a7711; S=0x301a7735; 
@property(assign) long long fileSize;	// G=0x301a75a9; S=0x301a75c9; 
@property(assign) BOOL hasMetadata;	// G=0x301a76c9; S=0x301a76ed; converted property
@property(readonly, assign) BOOL hasOverriddenOrientation;	// G=0x301a765d; 
@property(assign) BOOL hasThumbnail;	// G=0x301a7681; S=0x301a76a5; converted property
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x301a77e1; S=0x301a7801; 
@property(assign) unsigned orientation;	// G=0x301a7619; S=0x301a7639; 
@property(assign, getter=isRaw) BOOL raw;	// G=0x301a7bc5; S=0x301a75f5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x301a7ee9
- (void)dealloc;	// 0x301a8e5d
- (id)description;	// 0x301a8cc5
// declared property getter: - (BOOL)fetchingMetadata;	// 0x301a7759
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x301a7711
// declared property getter: - (long long)fileSize;	// 0x301a75a9
- (void)finalize;	// 0x301a8e09
- (void)flushMetadataCache;	// 0x301a7b55
- (void)flushThumbnailCache;	// 0x301a7ae5
- (void)handleCommandCompletionNotification:(id)notification;	// 0x301a7fbd
// converted property getter: - (BOOL)hasMetadata;	// 0x301a76c9
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x301a765d
// converted property getter: - (BOOL)hasThumbnail;	// 0x301a7681
// declared property getter: - (BOOL)isRaw;	// 0x301a7bc5
- (id)metadata;	// 0x301a77c1
// declared property getter: - (id)metadata_hidden;	// 0x301a77e1
// declared property getter: - (unsigned)orientation;	// 0x301a7619
- (void)overrideOrientation:(unsigned)orientation;	// 0x301a8b79
- (BOOL)raw;	// 0x301a7bc5
- (void)requestMetadata;	// 0x301a7985
- (void)requestThumbnail;	// 0x301a7825
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x301a777d
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x301a7735
// declared property setter: - (void)setFileSize:(long long)size;	// 0x301a75c9
// converted property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x301a76ed
// converted property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x301a76a5
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x301a7801
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x301a7639
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x301a75f5
- (CGImageRef)thumbnail;	// 0x301a77a1
@end
