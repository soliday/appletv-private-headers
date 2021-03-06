/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WMStyle, WDCharacterRun, NSString;

__attribute__((visibility("hidden")))
@interface WMCharacterRunMapper : CMMapper {
@private
	WDCharacterRun *wdCharacterRun;	// 8 = 0x8
	WMStyle *mStyle;	// 12 = 0xc
	float mFontSizeBumpFactor;	// 16 = 0x10
	NSString *mText;	// 20 = 0x14
	BOOL mIsDeleted;	// 24 = 0x18
}
+ (void)addNonCollapsableSpanAt:(id)at withState:(id)state;	// 0x327d4511
- (id)initWithText:(id)text;	// 0x32a24475
- (id)initWithWDCharacterRun:(id)wdcharacterRun parent:(id)parent;	// 0x327d1665
- (id)baseStyle;	// 0x32a24595
- (id)boldStyle;	// 0x32a24505
- (unsigned)countAndStripLeadingTabs;	// 0x32a24149
- (id)createCharacterStyle;	// 0x327d1721
- (void)dealloc;	// 0x327d3295
- (int)defaultTabWidth;	// 0x327d4b49
- (BOOL)isDeleted;	// 0x327d3285
- (void)map1At:(id)at withState:(id)state;	// 0x32a24261
- (void)mapAt:(id)at withState:(id)state;	// 0x327d2b75
- (void)mapSubstring:(id)substring at:(id)at;	// 0x327d3039
- (void)mapTabs:(unsigned)tabs at:(id)at afterText:(id)text;	// 0x327d48a9
@end

