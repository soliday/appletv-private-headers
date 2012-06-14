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
@property(assign) BOOL fetchingMetadata;	// G=0x354f3741; S=0x354f3765; 
@property(assign) BOOL fetchingThumbnail;	// G=0x354f36f9; S=0x354f371d; 
@property(assign) long long fileSize;	// G=0x354f3591; S=0x354f35b1; 
@property(assign) BOOL hasMetadata;	// G=0x354f36b1; S=0x354f36d5; converted property
@property(readonly, assign) BOOL hasOverriddenOrientation;	// G=0x354f3645; 
@property(assign) BOOL hasThumbnail;	// G=0x354f3669; S=0x354f368d; converted property
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x354f37c9; S=0x354f37e9; 
@property(assign) unsigned orientation;	// G=0x354f3601; S=0x354f3621; 
@property(assign, getter=isRaw) BOOL raw;	// G=0x354f3bad; S=0x354f35dd; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x354f3ed1
- (void)dealloc;	// 0x354f4e45
- (id)description;	// 0x354f4cad
// declared property getter: - (BOOL)fetchingMetadata;	// 0x354f3741
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x354f36f9
// declared property getter: - (long long)fileSize;	// 0x354f3591
- (void)finalize;	// 0x354f4df1
- (void)flushMetadataCache;	// 0x354f3b3d
- (void)flushThumbnailCache;	// 0x354f3acd
- (void)handleCommandCompletionNotification:(id)notification;	// 0x354f3fa5
// converted property getter: - (BOOL)hasMetadata;	// 0x354f36b1
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x354f3645
// converted property getter: - (BOOL)hasThumbnail;	// 0x354f3669
// declared property getter: - (BOOL)isRaw;	// 0x354f3bad
- (id)metadata;	// 0x354f37a9
// declared property getter: - (id)metadata_hidden;	// 0x354f37c9
// declared property getter: - (unsigned)orientation;	// 0x354f3601
- (void)overrideOrientation:(unsigned)orientation;	// 0x354f4b61
- (BOOL)raw;	// 0x354f3bad
- (void)requestMetadata;	// 0x354f396d
- (void)requestThumbnail;	// 0x354f380d
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x354f3765
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x354f371d
// declared property setter: - (void)setFileSize:(long long)size;	// 0x354f35b1
// converted property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x354f36d5
// converted property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x354f368d
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x354f37e9
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x354f3621
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x354f35dd
- (CGImageRef)thumbnail;	// 0x354f3789
@end

