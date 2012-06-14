/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRottenTomatoesRatingElement : ATVFeedElement {
@private
	NSString *_freshness;	// 28 = 0x1c
	float _ratingPercentage;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *freshness;	// G=0x367d21bd; S=0x367d21cd; @synthesize=_freshness
@property(assign, nonatomic) float ratingPercentage;	// G=0x367d21f1; S=0x367d2201; @synthesize=_ratingPercentage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x367d20a5
- (void)dealloc;	// 0x367d2171
// declared property getter: - (id)freshness;	// 0x367d21bd
// declared property getter: - (float)ratingPercentage;	// 0x367d21f1
// declared property setter: - (void)setFreshness:(id)freshness;	// 0x367d21cd
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x367d2201
@end

