/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WideStringCat)
+ (id)stringWithWideCString:(int *)wideCString;	// 0x313a8e71
- (id)initWithWideCString:(int *)wideCString;	// 0x313a8ef1
- (int *)cWideString;	// 0x313a8d55
@end

@interface NSString (OCBStringAdditions)
+ (id)stringWithCsString:(const CsString *)csString;	// 0x3119e479
+ (id)stringWithOcText:(const OcText *)ocText;	// 0x311bfc41
- (id)initWithCsString:(const CsString *)csString;	// 0x31167ddd
- (id)initWithOcText:(const OcText *)ocText;	// 0x311bfc7d
- (void)copyToCsString:(CsString *)csString;	// 0x313a9539
- (void)copyToOcText:(OcText *)ocText;	// 0x31257eb9
- (void)copyToOcText:(OcText *)ocText encoding:(int)encoding;	// 0x31257ecd
- (id)dataUsingWordEncoding:(int)encoding;	// 0x31257fa1
- (int)languageTypeAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x313a948d
@end

@interface NSString (OCStringAdditions)
+ (id)mapString:(id)string;	// 0x313ad279
+ (bool)skipString:(id)string;	// 0x313ad395
@end

@interface NSString (CPStringAdditions_XmlString)
+ (id)stringWithXmlString:(const char *)xmlString;	// 0x3126b9f1
- (id)initFromXmlNode:(xmlNode *)xmlNode ns:(const char *)ns attributeName:(const char *)name;	// 0x31290505
- (id)initWithContentOfXmlNode:(xmlNode *)xmlNode;	// 0x31269989
- (id)initWithValueOfXmlAttribute:(xmlAttr *)xmlAttribute;	// 0x31269529
- (id)initWithXmlString:(const char *)xmlString;	// 0x311b5245
- (id)componentsSeparatedByWhitespace;	// 0x3129e435
- (const char *)xmlString;	// 0x312778f9
@end

@interface NSString (CPStringAdditions)
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length codePointMapper:(/*function-pointer*/ void *)mapper;	// 0x313b2661
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length fontFamilyName:(id)name;	// 0x313b2535
- (BOOL)startsWithString:(id)string;	// 0x3126fe01
- (id)stringByFixingSymbolCharacters;	// 0x313b2359
@end

@interface NSString (NSStringAppKitStubAdditions)
- (NSRange)oi_rangeOfCharactersFromSet:(id)set index:(int)index;	// 0x312353bd
- (double)oi_realSizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x311cfbdd
- (double)oi_sizeWithFontName:(id)fontName size:(int)size;	// 0x3116f9d9
- (double)oi_sizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x3116fa01
@end

@interface NSString (SFAAdditions)
+ (id)stringWithXmlChars:(const char *)xmlChars;	// 0x3127d5ed
- (id)initFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute ns:(const xmlNs *)ns;	// 0x313b5525
- (id)initWithXmlChars:(const char *)xmlChars;	// 0x3127d629
@end

@interface NSString (TSUFormatStringUtilities)
+ (id)numberSymbols;	// 0x313ba28d
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x313ba915
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x313ba3c1
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x313bade5
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x313bacb9
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x313babf1
- (BOOL)isNumberFormatPattern;	// 0x313ba8a9
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x313b93c1
- (id)numberPortionOfNumberFormatSubpattern;	// 0x313b9401
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x313b9389
- (id)prefixOfNumberFormatSubpattern;	// 0x313b9479
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x313baa5d
- (id)suffixOfNumberFormatSubpattern;	// 0x313b9449
@end

@interface NSString (NSURLAdditionsAdditions)
- (BOOL)containsPercentEscapes;	// 0x313be691
- (id)stringByPercentEscaping;	// 0x313bea1d
@end

@interface NSString (SFUJsonAdditions)
- (void)appendJsonStringToString:(id)string;	// 0x313c46a5
@end

@interface NSString (SFUFormatStringUtilities)
+ (id)numberSymbols;	// 0x313ccb9d
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x313cd841
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x313cd4fd
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x313cdd0d
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x313cdbe1
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x313cdb19
- (BOOL)isNumberFormatPattern;	// 0x313cd7d5
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x313ccab5
- (id)numberPortionOfNumberFormatSubpattern;	// 0x313ccaf5
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x313cca7d
- (id)prefixOfNumberFormatSubpattern;	// 0x313ccb6d
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x313cd995
- (id)suffixOfNumberFormatSubpattern;	// 0x313ccb3d
@end

@interface NSString (CSVStringExtensions)
- (id)_createCsvRows:(unsigned *)rows usingDelimiter:(id)delimiter columnCountIsConstant:(BOOL *)constant;	// 0x313dd211
- (id)createCsvRows:(unsigned *)rows;	// 0x313dd625
@end

