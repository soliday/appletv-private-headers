/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSString.h> // Unknown library


@interface NSString (GQCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x30492c11
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x30492b0d
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x30492ba5
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x30492abd
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x304940e9
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x30492a31
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x304929d1
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x30492911
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x304928c1
- (id)digitPlaceholderStringInDigitToken;	// 0x30494ed9
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x3049298d
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x30492961
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x304927ad
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x304927f5
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x304928f9
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x30492861
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x304929a1
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x304929b9
- (id)stringByInsertingGroupingSeparators;	// 0x30493fc1
@end

@interface NSString (GQFormatStringUtilities)
+ (id)numberSymbols;	// 0x304f5e05
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x304f6ec9
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x304f6b85
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x304f7325
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x304f726d
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x304f71a5
- (BOOL)isNumberFormatPattern;	// 0x304f6e5d
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x304f5d1d
- (id)numberPortionOfNumberFormatSubpattern;	// 0x304f5d5d
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x304f5ce5
- (id)prefixOfNumberFormatSubpattern;	// 0x304f5dd5
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x304f7011
- (id)suffixOfNumberFormatSubpattern;	// 0x304f5da5
@end

