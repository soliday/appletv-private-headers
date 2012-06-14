/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, NSNumber, NSArray, BRImageControl;

@interface BRMetadataLongDescriptionControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 48 = 0x30
	BRTextControl *_titleSubtextLayer;	// 52 = 0x34
	BRTextControl *_priceLayer;	// 56 = 0x38
	BRControl *_formatControl;	// 60 = 0x3c
	BRTextControl *_releaseDateLayer;	// 64 = 0x40
	BRTextControl *_lengthLayer;	// 68 = 0x44
	BRTextControl *_studioNameLayer;	// 72 = 0x48
	BRImageControl *_ratingImageLayer;	// 76 = 0x4c
	BRControl *_userRatingControl;	// 80 = 0x50
	BRImageControl *_topRightImageLayer;	// 84 = 0x54
	BRTextControl *_summaryLayer;	// 88 = 0x58
	BRTextControl *_copyrightLayer;	// 92 = 0x5c
	NSNumber *_trackNumber;	// 96 = 0x60
	BRDividerControl *_topDivider;	// 100 = 0x64
	BRDividerControl *_bottomDivider;	// 104 = 0x68
	NSArray *_metadataObjs;	// 108 = 0x6c
	NSArray *_metadataLabels;	// 112 = 0x70
	float _totalHeight;	// 116 = 0x74
	int _alignment;	// 120 = 0x78
	CGSize _artworkSize;	// 124 = 0x7c
}
- (id)init;	// 0x329f4055
- (void)_setCopyright:(id)copyright;	// 0x329f5c8d
- (void)_setFormatControl:(id)control;	// 0x329f5675
- (void)_setLength:(id)length;	// 0x329f57bd
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x329f5bf5
- (void)_setPrice:(id)price;	// 0x329f55a5
- (void)_setRating:(id)rating;	// 0x329f595d
- (void)_setReleaseDate:(id)date;	// 0x329f56ed
- (void)_setStudioName:(id)name;	// 0x329f588d
- (void)_setSummary:(id)summary;	// 0x329f5a51
- (void)_setTitle:(id)title;	// 0x329f52d9
- (void)_setTitleSubtext:(id)subtext;	// 0x329f53a9
- (void)_setTopRightImage:(id)image;	// 0x329f5a31
- (void)_setTrackNumber:(id)number;	// 0x329f5479
- (void)_setUserRatingControl:(id)control;	// 0x329f59b9
- (id)accessibilityScreenContent;	// 0x329f5d5d
- (void)dealloc;	// 0x329f43a1
- (void)layoutSubcontrols;	// 0x329f4a71
- (CGSize)renderedSize;	// 0x329f49d1
- (void)resetAllFields;	// 0x329f455d
- (void)setAlignment:(int)alignment;	// 0x329f5275
- (void)setArtworkSize:(CGSize)size;	// 0x329f5285
- (void)setCopyright:(id)copyright;	// 0x329f4995
- (void)setFormatControl:(id)control;	// 0x329f4769
- (void)setLength:(id)length;	// 0x329f47e1
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x329f4959
- (void)setPrice:(id)price;	// 0x329f472d
- (void)setRating:(id)rating;	// 0x329f4859
- (void)setReleaseDate:(id)date;	// 0x329f47a5
- (void)setStudioName:(id)name;	// 0x329f481d
- (void)setSummary:(id)summary;	// 0x329f491d
- (void)setTitle:(id)title;	// 0x329f4679
- (void)setTitleSubtext:(id)subtext;	// 0x329f46b5
- (void)setTopRightImage:(id)image;	// 0x329f48e1
- (void)setTrackNumber:(id)number;	// 0x329f46f1
- (void)setUserRatingControl:(id)control;	// 0x329f4895
- (id)topRightImageControl;	// 0x329f48d1
- (void)windowMaxBoundsChanged;	// 0x329f4a31
@end

