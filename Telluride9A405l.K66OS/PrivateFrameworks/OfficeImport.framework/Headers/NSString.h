/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WideStringCat)
+ (id)stringWithWideCString:(int *)wideCString;	// 0x30ea6e71
- (id)initWithWideCString:(int *)wideCString;	// 0x30ea6ef1
- (int *)cWideString;	// 0x30ea6d55
@end

@interface NSString (OCBStringAdditions)
+ (id)stringWithCsString:(const CsString *)csString;	// 0x30c9c479
+ (id)stringWithOcText:(const OcText *)ocText;	// 0x30cbdc41
- (id)initWithCsString:(const CsString *)csString;	// 0x30c65ddd
- (id)initWithOcText:(const OcText *)ocText;	// 0x30cbdc7d
- (void)copyToCsString:(CsString *)csString;	// 0x30ea7539
- (void)copyToOcText:(OcText *)ocText;	// 0x30d55eb9
- (void)copyToOcText:(OcText *)ocText encoding:(int)encoding;	// 0x30d55ecd
- (id)dataUsingWordEncoding:(int)encoding;	// 0x30d55fa1
- (int)languageTypeAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x30ea748d
@end

@interface NSString (OCStringAdditions)
+ (id)mapString:(id)string;	// 0x30eab279
+ (bool)skipString:(id)string;	// 0x30eab395
@end

@interface NSString (CPStringAdditions_XmlString)
+ (id)stringWithXmlString:(const char *)xmlString;	// 0x30d699f1
- (id)initFromXmlNode:(xmlNode *)xmlNode ns:(const char *)ns attributeName:(const char *)name;	// 0x30d8e505
- (id)initWithContentOfXmlNode:(xmlNode *)xmlNode;	// 0x30d67989
- (id)initWithValueOfXmlAttribute:(xmlAttr *)xmlAttribute;	// 0x30d67529
- (id)initWithXmlString:(const char *)xmlString;	// 0x30cb3245
- (id)componentsSeparatedByWhitespace;	// 0x30d9c435
- (const char *)xmlString;	// 0x30d758f9
@end

@interface NSString (CPStringAdditions)
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length codePointMapper:(/*function-pointer*/ void *)mapper;	// 0x30eb0661
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length fontFamilyName:(id)name;	// 0x30eb0535
- (BOOL)startsWithString:(id)string;	// 0x30d6de01
- (id)stringByFixingSymbolCharacters;	// 0x30eb0359
@end

@interface NSString (NSStringAppKitStubAdditions)
- (NSRange)oi_rangeOfCharactersFromSet:(id)set index:(int)index;	// 0x30d333bd
- (double)oi_realSizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x30ccdbdd
- (double)oi_sizeWithFontName:(id)fontName size:(int)size;	// 0x30c6d9d9
- (double)oi_sizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x30c6da01
@end

@interface NSString (SFAAdditions)
+ (id)stringWithXmlChars:(const char *)xmlChars;	// 0x30d7b5ed
- (id)initFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute ns:(const xmlNs *)ns;	// 0x30eb3525
- (id)initWithXmlChars:(const char *)xmlChars;	// 0x30d7b629
@end

@interface NSString (TSUFormatStringUtilities)
+ (id)numberSymbols;	// 0x30eb828d
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x30eb8915
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x30eb83c1
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x30eb8de5
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x30eb8cb9
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x30eb8bf1
- (BOOL)isNumberFormatPattern;	// 0x30eb88a9
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x30eb73c1
- (id)numberPortionOfNumberFormatSubpattern;	// 0x30eb7401
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x30eb7389
- (id)prefixOfNumberFormatSubpattern;	// 0x30eb7479
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x30eb8a5d
- (id)suffixOfNumberFormatSubpattern;	// 0x30eb7449
@end

@interface NSString (NSURLAdditionsAdditions)
- (BOOL)containsPercentEscapes;	// 0x30ebc691
- (id)stringByPercentEscaping;	// 0x30ebca1d
@end

@interface NSString (SFUJsonAdditions)
- (void)appendJsonStringToString:(id)string;	// 0x30ec26a5
@end

@interface NSString (SFUFormatStringUtilities)
+ (id)numberSymbols;	// 0x30ecab9d
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x30ecb841
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x30ecb4fd
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x30ecbd0d
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x30ecbbe1
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x30ecbb19
- (BOOL)isNumberFormatPattern;	// 0x30ecb7d5
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x30ecaab5
- (id)numberPortionOfNumberFormatSubpattern;	// 0x30ecaaf5
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x30ecaa7d
- (id)prefixOfNumberFormatSubpattern;	// 0x30ecab6d
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x30ecb995
- (id)suffixOfNumberFormatSubpattern;	// 0x30ecab3d
@end

@interface NSString (CSVStringExtensions)
- (id)_createCsvRows:(unsigned *)rows usingDelimiter:(id)delimiter columnCountIsConstant:(BOOL *)constant;	// 0x30edb211
- (id)createCsvRows:(unsigned *)rows;	// 0x30edb625
@end

