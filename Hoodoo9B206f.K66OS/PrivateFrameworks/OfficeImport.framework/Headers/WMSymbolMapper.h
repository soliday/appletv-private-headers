/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WMSymbolMapper : CMMapper {
@private
	unsigned short mCharacter;	// 8 = 0x8
	NSString *mFontName;	// 12 = 0xc
}
+ (unsigned short)mapWindingsCharacter:(unsigned short)character;	// 0x34533331
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)character;	// 0x34664ddd
- (id)initWithWDSymbol:(id)wdsymbol parent:(id)parent;	// 0x3452cb49
- (void)mapAt:(id)at withState:(id)state;	// 0x3452cbf1
@end

