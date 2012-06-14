/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraph;

__attribute__((visibility("hidden")))
@interface PMParagraphMapper : CMMapper {
@private
	OADParagraph *mParagraph;	// 8 = 0x8
}
- (id)initWithOadParagraph:(id)oadParagraph parent:(id)parent;	// 0x310e863d
- (void)addEndCharacterStyleToStyle:(id)style;	// 0x310e92cd
- (id)createParagraphStyleWithState:(id)state;	// 0x310e899d
- (int)firstTextRunFontSize;	// 0x3116f039
- (id)fontScheme;	// 0x310e9495
- (void)mapAt:(id)at withState:(id)state;	// 0x310e8681
@end

