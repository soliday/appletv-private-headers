/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollingTextElement : ATVFeedRootElement {
@private
	NSString *_title;	// 52 = 0x34
	NSString *_text;	// 56 = 0x38
	NSArray *_buttons;	// 60 = 0x3c
	int _initialSelection;	// 64 = 0x40
}
@property(retain, nonatomic) NSArray *buttons;	// G=0x367dab71; S=0x367dab81; @synthesize=_buttons
@property(assign, nonatomic) int initialSelection;	// G=0x367daba5; S=0x367dabb5; @synthesize=_initialSelection
@property(retain, nonatomic) NSString *text;	// G=0x367dab3d; S=0x367dab4d; @synthesize=_text
@property(retain, nonatomic) NSString *title;	// G=0x367dab09; S=0x367dab19; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x367da871
// declared property getter: - (id)buttons;	// 0x367dab71
- (void)dealloc;	// 0x367daa95
// declared property getter: - (int)initialSelection;	// 0x367daba5
// declared property setter: - (void)setButtons:(id)buttons;	// 0x367dab81
// declared property setter: - (void)setInitialSelection:(int)selection;	// 0x367dabb5
// declared property setter: - (void)setText:(id)text;	// 0x367dab4d
// declared property setter: - (void)setTitle:(id)title;	// 0x367dab19
// declared property getter: - (id)text;	// 0x367dab3d
// declared property getter: - (id)title;	// 0x367dab09
@end

