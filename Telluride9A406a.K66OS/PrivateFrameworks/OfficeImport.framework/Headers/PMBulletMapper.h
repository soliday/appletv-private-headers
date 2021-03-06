/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraphProperties, CMStyle;

__attribute__((visibility("hidden")))
@interface PMBulletMapper : CMMapper {
@private
	OADParagraphProperties *mProperties;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mFontSize;	// 16 = 0x10
}
+ (id)stringForIndex:(int)index withFormat:(int)format;	// 0x32978ef1
- (id)initWithOadProperties:(id)oadProperties fontSize:(int)size parent:(id)parent;	// 0x328a80c9
- (id)bulletFontName;	// 0x328a88b9
- (int)bulletSize;	// 0x328a8719
- (void)dealloc;	// 0x328a84e5
- (id)makeBulletWithListState:(id)listState;	// 0x328a8531
- (void)mapAt:(id)at withState:(id)state;	// 0x328a8155
- (void)mapBulletColorWithState:(id)state;	// 0x328a8b2d
@end

