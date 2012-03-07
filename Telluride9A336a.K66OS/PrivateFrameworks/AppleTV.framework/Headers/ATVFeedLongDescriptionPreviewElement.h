/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSArray, ATVFeedMediaBadgesElement, ATVFeedStarRatingElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedLongDescriptionPreviewElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_footnote;	// 36 = 0x24
	NSString *_rating;	// 40 = 0x28
	ATVFeedImageElement *_image;	// 44 = 0x2c
	NSArray *_metadataLabels;	// 48 = 0x30
	ATVFeedMediaBadgesElement *_mediaBadges;	// 52 = 0x34
	ATVFeedStarRatingElement *_starRating;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *footnote;	// G=0x33babec1; S=0x33babed1; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x33babf29; S=0x33babf39; @synthesize=_image
@property(retain, nonatomic) ATVFeedMediaBadgesElement *mediaBadges;	// G=0x33babf91; S=0x33babfa1; @synthesize=_mediaBadges
@property(retain, nonatomic) NSArray *metadataLabels;	// G=0x33babf5d; S=0x33babf6d; @synthesize=_metadataLabels
@property(copy, nonatomic) NSString *rating;	// G=0x33babef5; S=0x33babf05; @synthesize=_rating
@property(retain, nonatomic) ATVFeedStarRatingElement *starRating;	// G=0x33babfc5; S=0x33babfd5; @synthesize=_starRating
@property(copy, nonatomic) NSString *summary;	// G=0x33babe8d; S=0x33babe9d; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x33babe59; S=0x33babe69; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33baba49
- (void)dealloc;	// 0x33babd81
// declared property getter: - (id)footnote;	// 0x33babec1
// declared property getter: - (id)image;	// 0x33babf29
// declared property getter: - (id)mediaBadges;	// 0x33babf91
// declared property getter: - (id)metadataLabels;	// 0x33babf5d
// declared property getter: - (id)rating;	// 0x33babef5
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x33babed1
// declared property setter: - (void)setImage:(id)image;	// 0x33babf39
// declared property setter: - (void)setMediaBadges:(id)badges;	// 0x33babfa1
// declared property setter: - (void)setMetadataLabels:(id)labels;	// 0x33babf6d
// declared property setter: - (void)setRating:(id)rating;	// 0x33babf05
// declared property setter: - (void)setStarRating:(id)rating;	// 0x33babfd5
// declared property setter: - (void)setSummary:(id)summary;	// 0x33babe9d
// declared property setter: - (void)setTitle:(id)title;	// 0x33babe69
// declared property getter: - (id)starRating;	// 0x33babfc5
// declared property getter: - (id)summary;	// 0x33babe8d
// declared property getter: - (id)title;	// 0x33babe59
@end
