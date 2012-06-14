/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, ATVFeedTableElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsItemElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	ATVFeedImageElement *_backgroundImage;	// 32 = 0x20
	ATVFeedTableElement *_table;	// 36 = 0x24
}
@property(retain, nonatomic) ATVFeedImageElement *backgroundImage;	// G=0x367d555d; S=0x367d556d; @synthesize=_backgroundImage
@property(retain, nonatomic) ATVFeedTableElement *table;	// G=0x367d5591; S=0x367d55a1; @synthesize=_table
@property(retain, nonatomic) NSString *title;	// G=0x367d5529; S=0x367d5539; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x367d5385
// declared property getter: - (id)backgroundImage;	// 0x367d555d
- (void)dealloc;	// 0x367d54b5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x367d556d
// declared property setter: - (void)setTable:(id)table;	// 0x367d55a1
// declared property setter: - (void)setTitle:(id)title;	// 0x367d5539
// declared property getter: - (id)table;	// 0x367d5591
// declared property getter: - (id)title;	// 0x367d5529
@end

