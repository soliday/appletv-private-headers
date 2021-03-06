/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString {
@private
	NSMutableString *original;	// 4 = 0x4
	NSDictionary *config;	// 8 = 0x8
}
- (id)initWithString:(id)string withFormatConfiguration:(id)formatConfiguration;	// 0x310a3c1d
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x310a3e41
- (const unsigned short *)_fastCharacterContents;	// 0x310a3e2d
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x310a410d
- (void)appendFormat:(id)format;	// 0x310a4059
- (void)appendString:(id)string;	// 0x310a3fb5
- (id)baseString;	// 0x310a3c7d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x310a3cad
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x310a3dc5
- (id)copyWithZone:(NSZone *)zone;	// 0x310a3e65
- (void)dealloc;	// 0x310a3cd1
- (void)deleteCharactersInRange:(NSRange)range;	// 0x310a4005
- (id)formatConfiguration;	// 0x310a3c6d
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x310a3d31
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x310a3f61
- (BOOL)isEqualToString:(id)string;	// 0x310a3e09
- (unsigned)length;	// 0x310a3c8d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310a3eb9
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x310a3f0d
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x310a4179
- (void)setString:(id)string;	// 0x310a40bd
- (id)substringFromIndex:(unsigned)index;	// 0x310a3d65
- (id)substringToIndex:(unsigned)index;	// 0x310a3d85
- (id)substringWithRange:(NSRange)range;	// 0x310a3da5
@end

