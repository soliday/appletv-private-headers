/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GMMClientCapabilities : PBCodable {
	BOOL _hasMaxImageWidth;	// 4 = 0x4
	int _maxImageWidth;	// 8 = 0x8
	BOOL _hasMaxImageHeight;	// 12 = 0xc
	int _maxImageHeight;	// 16 = 0x10
	BOOL _hasAvailableImageMemory;	// 20 = 0x14
	int _availableImageMemory;	// 24 = 0x18
	XXStruct_WmZAAA _preferredImageFormats;	// 28 = 0x1c
	BOOL _hasHtmlBodyOnly;	// 40 = 0x28
	BOOL _htmlBodyOnly;	// 41 = 0x29
	BOOL _hasEmbedImages;	// 42 = 0x2a
	BOOL _embedImages;	// 43 = 0x2b
}
@property(assign, nonatomic) int availableImageMemory;	// G=0x31f9b9fd; S=0x31f9b211; @synthesize=_availableImageMemory
@property(assign, nonatomic) BOOL embedImages;	// G=0x31f9b385; S=0x31f9b3a9; @synthesize=_embedImages
@property(assign, nonatomic) BOOL hasAvailableImageMemory;	// G=0x31f9b9dd; S=0x31f9b9ed; @synthesize=_hasAvailableImageMemory
@property(assign, nonatomic) BOOL hasEmbedImages;	// G=0x31f9ba2d; S=0x31f9ba3d; @synthesize=_hasEmbedImages
@property(assign, nonatomic) BOOL hasHtmlBodyOnly;	// G=0x31f9ba0d; S=0x31f9ba1d; @synthesize=_hasHtmlBodyOnly
@property(assign, nonatomic) BOOL hasMaxImageHeight;	// G=0x31f9b9ad; S=0x31f9b9bd; @synthesize=_hasMaxImageHeight
@property(assign, nonatomic) BOOL hasMaxImageWidth;	// G=0x31f9b97d; S=0x31f9b98d; @synthesize=_hasMaxImageWidth
@property(assign, nonatomic) BOOL htmlBodyOnly;	// G=0x31f9b33d; S=0x31f9b361; @synthesize=_htmlBodyOnly
@property(assign, nonatomic) int maxImageHeight;	// G=0x31f9b9cd; S=0x31f9b1ed; @synthesize=_maxImageHeight
@property(assign, nonatomic) int maxImageWidth;	// G=0x31f9b99d; S=0x31f9b1c9; @synthesize=_maxImageWidth
@property(readonly, assign, nonatomic) int *preferredImageFormats;	// G=0x31f9b249; 
@property(readonly, assign, nonatomic) unsigned preferredImageFormatsCount;	// G=0x31f9b235; 
- (void)addPreferredImageFormat:(int)format;	// 0x31f9b26d
// declared property getter: - (int)availableImageMemory;	// 0x31f9b9fd
- (void)clearPreferredImageFormats;	// 0x31f9b259
- (void)dealloc;	// 0x31f9b189
- (id)description;	// 0x31f9b3cd
- (id)dictionaryRepresentation;	// 0x31f9b43d
// declared property getter: - (BOOL)embedImages;	// 0x31f9b385
// declared property getter: - (BOOL)hasAvailableImageMemory;	// 0x31f9b9dd
// declared property getter: - (BOOL)hasEmbedImages;	// 0x31f9ba2d
// declared property getter: - (BOOL)hasHtmlBodyOnly;	// 0x31f9ba0d
// declared property getter: - (BOOL)hasMaxImageHeight;	// 0x31f9b9ad
// declared property getter: - (BOOL)hasMaxImageWidth;	// 0x31f9b97d
// declared property getter: - (BOOL)htmlBodyOnly;	// 0x31f9b33d
// declared property getter: - (int)maxImageHeight;	// 0x31f9b9cd
// declared property getter: - (int)maxImageWidth;	// 0x31f9b99d
- (int)preferredImageFormatAtIndex:(unsigned)index;	// 0x31f9b281
// declared property getter: - (int *)preferredImageFormats;	// 0x31f9b249
// declared property getter: - (unsigned)preferredImageFormatsCount;	// 0x31f9b235
- (BOOL)readFrom:(id)from;	// 0x31f9b639
// declared property setter: - (void)setAvailableImageMemory:(int)memory;	// 0x31f9b211
// declared property setter: - (void)setEmbedImages:(BOOL)images;	// 0x31f9b3a9
// declared property setter: - (void)setHasAvailableImageMemory:(BOOL)memory;	// 0x31f9b9ed
// declared property setter: - (void)setHasEmbedImages:(BOOL)images;	// 0x31f9ba3d
// declared property setter: - (void)setHasHtmlBodyOnly:(BOOL)only;	// 0x31f9ba1d
// declared property setter: - (void)setHasMaxImageHeight:(BOOL)height;	// 0x31f9b9bd
// declared property setter: - (void)setHasMaxImageWidth:(BOOL)width;	// 0x31f9b98d
// declared property setter: - (void)setHtmlBodyOnly:(BOOL)only;	// 0x31f9b361
// declared property setter: - (void)setMaxImageHeight:(int)height;	// 0x31f9b1ed
// declared property setter: - (void)setMaxImageWidth:(int)width;	// 0x31f9b1c9
- (void)setPreferredImageFormats:(int *)formats count:(unsigned)count;	// 0x31f9b325
- (void)writeTo:(id)to;	// 0x31f9b831
@end

