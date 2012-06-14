/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSScanner : NSObject <NSCopying> {
}
@property(assign) BOOL caseSensitive;	// G=0x31d86781; S=0x31d86819; converted property
@property(retain) id charactersToBeSkipped;	// G=0x31d86739; S=0x31d867f5; converted property
@property(retain) id locale;	// G=0x31d86785; S=0x31d8683d; converted property
@property(assign) unsigned scanLocation;	// G=0x31d867d1; S=0x31d867ad; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31d2da0d
+ (id)localizedScannerWithString:(id)string;	// 0x31d859d5
+ (id)scannerWithString:(id)string;	// 0x31d2d9c1
- (id)initWithString:(id)string;	// 0x31d2db31
- (id)_invertedSkipSet;	// 0x31d85b3d
- (id)_remainingString;	// 0x31d48fe9
- (BOOL)_scanDecimal:(unsigned)decimal into:(int *)into;	// 0x31d3d769
// converted property getter: - (BOOL)caseSensitive;	// 0x31d86781
// converted property getter: - (id)charactersToBeSkipped;	// 0x31d86739
- (id)copyWithZone:(NSZone *)zone;	// 0x31d85a51
- (BOOL)isAtEnd;	// 0x31d2db5d
// converted property getter: - (id)locale;	// 0x31d86785
- (BOOL)scanCharactersFromSet:(id)set intoString:(id *)string;	// 0x31d3d5dd
- (BOOL)scanDecimal:(XXStruct_9isexA *)decimal;	// 0x31d9d10d
- (BOOL)scanDouble:(double *)aDouble;	// 0x31d38265
- (BOOL)scanFloat:(float *)aFloat;	// 0x31d85ebd
- (BOOL)scanHexDouble:(double *)aDouble;	// 0x31d85f6d
- (BOOL)scanHexFloat:(float *)aFloat;	// 0x31d86001
- (BOOL)scanHexInt:(unsigned *)int;	// 0x31d86591
- (BOOL)scanHexLongLong:(unsigned long long *)aLong;	// 0x31d86199
- (BOOL)scanInt:(int *)int;	// 0x31d86125
- (BOOL)scanInteger:(int *)integer;	// 0x31d380d1
// converted property getter: - (unsigned)scanLocation;	// 0x31d867d1
- (BOOL)scanLongLong:(long long *)aLong;	// 0x31d860b1
- (BOOL)scanString:(id)string intoString:(id *)string2;	// 0x31d38125
- (BOOL)scanUpToCharactersFromSet:(id)set intoString:(id *)string;	// 0x31d2dd4d
- (BOOL)scanUpToString:(id)string intoString:(id *)string2;	// 0x31d865f9
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x31d86819
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x31d867f5
// converted property setter: - (void)setLocale:(id)locale;	// 0x31d8683d
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x31d867ad
- (id)string;	// 0x31d86789
@end

