/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"
#import "BRControl.h"

@class NSArray;

@interface BRMetadataLinesLayer : BRControl <BRMetadataContainer> {
@private
	CGSize _sizeThatFits;	// 48 = 0x30
	float _lineHeight;	// 56 = 0x38
	BOOL _delimeterDisabled;	// 60 = 0x3c
	NSArray *_lineLayers;	// 64 = 0x40
	NSArray *_values;	// 68 = 0x44
	NSArray *_labels;	// 72 = 0x48
	float _extraLineHeight;	// 76 = 0x4c
	BOOL _useMultiLineMetadata;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL delimeterDisabled;	// G=0x33aa63ed; S=0x33aa63fd; @synthesize=_delimeterDisabled
@property(assign, nonatomic) float extraLineHeight;	// G=0x33aa64a9; S=0x33aa64b9; @synthesize=_extraLineHeight
@property(retain, nonatomic) NSArray *labels;	// G=0x33aa6475; S=0x33aa6485; @synthesize=_labels
@property(retain, nonatomic) NSArray *lineLayers;	// G=0x33aa640d; S=0x33aa641d; @synthesize=_lineLayers
@property(assign, nonatomic) BOOL useMultiLineMetadata;	// G=0x33aa64c9; S=0x33aa64d9; @synthesize=_useMultiLineMetadata
@property(retain, nonatomic) NSArray *values;	// G=0x33aa6441; S=0x33aa6451; @synthesize=_values
- (id)init;	// 0x33aa601d
- (void)_buildLineLayersForValues:(id)values andLabels:(id)labels usingIndexes:(id)indexes;	// 0x33aa67e1
- (void)_layoutLines;	// 0x33aa6b2d
- (void)_setLineHeightUsingValues:(id)values andLabels:(id)labels;	// 0x33aa64e9
- (id)_visibleMetadataIndexesForHeight:(float)height andValues:(id)values;	// 0x33aa6699
- (float)_widthOfWidestLabel;	// 0x33aa6d41
- (id)accessibilityLabel;	// 0x33aa6e49
- (void)dealloc;	// 0x33aa6081
// declared property getter: - (BOOL)delimeterDisabled;	// 0x33aa63ed
// declared property getter: - (float)extraLineHeight;	// 0x33aa64a9
// declared property getter: - (id)labels;	// 0x33aa6475
- (void)layoutSubcontrols;	// 0x33aa6299
// declared property getter: - (id)lineLayers;	// 0x33aa640d
// declared property setter: - (void)setDelimeterDisabled:(BOOL)disabled;	// 0x33aa63fd
// declared property setter: - (void)setExtraLineHeight:(float)height;	// 0x33aa64b9
// declared property setter: - (void)setLabels:(id)labels;	// 0x33aa6485
// declared property setter: - (void)setLineLayers:(id)layers;	// 0x33aa641d
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x33aa60f5
- (void)setMetadata:(id)metadata withLabels:(id)labels frameWidth:(float)width maxHeight:(float)height;	// 0x33aa617d
// declared property setter: - (void)setUseMultiLineMetadata:(BOOL)metadata;	// 0x33aa64d9
// declared property setter: - (void)setValues:(id)values;	// 0x33aa6451
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33aa627d
// declared property getter: - (BOOL)useMultiLineMetadata;	// 0x33aa64c9
// declared property getter: - (id)values;	// 0x33aa6441
@end
