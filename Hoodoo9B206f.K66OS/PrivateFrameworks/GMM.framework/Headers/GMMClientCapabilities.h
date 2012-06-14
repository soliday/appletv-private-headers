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
@property(assign, nonatomic) int availableImageMemory;	// G=0x33cc09fd; S=0x33cc0211; @synthesize=_availableImageMemory
@property(assign, nonatomic) BOOL embedImages;	// G=0x33cc0385; S=0x33cc03a9; @synthesize=_embedImages
@property(assign, nonatomic) BOOL hasAvailableImageMemory;	// G=0x33cc09dd; S=0x33cc09ed; @synthesize=_hasAvailableImageMemory
@property(assign, nonatomic) BOOL hasEmbedImages;	// G=0x33cc0a2d; S=0x33cc0a3d; @synthesize=_hasEmbedImages
@property(assign, nonatomic) BOOL hasHtmlBodyOnly;	// G=0x33cc0a0d; S=0x33cc0a1d; @synthesize=_hasHtmlBodyOnly
@property(assign, nonatomic) BOOL hasMaxImageHeight;	// G=0x33cc09ad; S=0x33cc09bd; @synthesize=_hasMaxImageHeight
@property(assign, nonatomic) BOOL hasMaxImageWidth;	// G=0x33cc097d; S=0x33cc098d; @synthesize=_hasMaxImageWidth
@property(assign, nonatomic) BOOL htmlBodyOnly;	// G=0x33cc033d; S=0x33cc0361; @synthesize=_htmlBodyOnly
@property(assign, nonatomic) int maxImageHeight;	// G=0x33cc09cd; S=0x33cc01ed; @synthesize=_maxImageHeight
@property(assign, nonatomic) int maxImageWidth;	// G=0x33cc099d; S=0x33cc01c9; @synthesize=_maxImageWidth
@property(readonly, assign, nonatomic) int *preferredImageFormats;	// G=0x33cc0249; 
@property(readonly, assign, nonatomic) unsigned preferredImageFormatsCount;	// G=0x33cc0235; 
- (void)addPreferredImageFormat:(int)format;	// 0x33cc026d
// declared property getter: - (int)availableImageMemory;	// 0x33cc09fd
- (void)clearPreferredImageFormats;	// 0x33cc0259
- (void)dealloc;	// 0x33cc0189
- (id)description;	// 0x33cc03cd
- (id)dictionaryRepresentation;	// 0x33cc043d
// declared property getter: - (BOOL)embedImages;	// 0x33cc0385
// declared property getter: - (BOOL)hasAvailableImageMemory;	// 0x33cc09dd
// declared property getter: - (BOOL)hasEmbedImages;	// 0x33cc0a2d
// declared property getter: - (BOOL)hasHtmlBodyOnly;	// 0x33cc0a0d
// declared property getter: - (BOOL)hasMaxImageHeight;	// 0x33cc09ad
// declared property getter: - (BOOL)hasMaxImageWidth;	// 0x33cc097d
// declared property getter: - (BOOL)htmlBodyOnly;	// 0x33cc033d
// declared property getter: - (int)maxImageHeight;	// 0x33cc09cd
// declared property getter: - (int)maxImageWidth;	// 0x33cc099d
- (int)preferredImageFormatAtIndex:(unsigned)index;	// 0x33cc0281
// declared property getter: - (int *)preferredImageFormats;	// 0x33cc0249
// declared property getter: - (unsigned)preferredImageFormatsCount;	// 0x33cc0235
- (BOOL)readFrom:(id)from;	// 0x33cc0639
// declared property setter: - (void)setAvailableImageMemory:(int)memory;	// 0x33cc0211
// declared property setter: - (void)setEmbedImages:(BOOL)images;	// 0x33cc03a9
// declared property setter: - (void)setHasAvailableImageMemory:(BOOL)memory;	// 0x33cc09ed
// declared property setter: - (void)setHasEmbedImages:(BOOL)images;	// 0x33cc0a3d
// declared property setter: - (void)setHasHtmlBodyOnly:(BOOL)only;	// 0x33cc0a1d
// declared property setter: - (void)setHasMaxImageHeight:(BOOL)height;	// 0x33cc09bd
// declared property setter: - (void)setHasMaxImageWidth:(BOOL)width;	// 0x33cc098d
// declared property setter: - (void)setHtmlBodyOnly:(BOOL)only;	// 0x33cc0361
// declared property setter: - (void)setMaxImageHeight:(int)height;	// 0x33cc01ed
// declared property setter: - (void)setMaxImageWidth:(int)width;	// 0x33cc01c9
- (void)setPreferredImageFormats:(int *)formats count:(unsigned)count;	// 0x33cc0325
- (void)writeTo:(id)to;	// 0x33cc0831
@end

