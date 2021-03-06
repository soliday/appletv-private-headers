/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)data textEncodingName:(id)name;	// 0x347d5ec5
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)bundleIdentifier;	// 0x347762ad
- (id)_web_stringByAbbreviatingWithTildeInPath;	// 0x347d5d81
- (id)_web_stringByStrippingReturnCharacters;	// 0x347d5e11
- (id)_webkit_filenameByFixingIllegalCharacters;	// 0x347d6265
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)prefix;	// 0x34781f79
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)substring;	// 0x347d6259
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)suffix;	// 0x347d624d
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)string;	// 0x3477433d
- (id)_webkit_stringByCollapsingNonPrintingCharacters;	// 0x347d5ee5
- (id)_webkit_stringByCollapsingWhitespaceCharacters;	// 0x347d60b5
- (id)_webkit_stringByTrimmingWhitespace;	// 0x347817d9
@end

@interface NSString (WebNSDataExtrasInternal)
- (id)_web_capitalizeRFC822HeaderFieldName;	// 0x347d6c71
@end

@interface NSString (WebNSURLExtras)
- (id)_web_decodeHostName;	// 0x34798939
- (id)_web_decodeHostNameWithRange:(NSRange)range;	// 0x347d8025
- (id)_web_encodeHostName;	// 0x347d8071
- (id)_web_encodeHostNameWithRange:(NSRange)range;	// 0x347d8049
- (BOOL)_web_hostNameNeedsDecodingWithRange:(NSRange)range;	// 0x347d7fc9
- (BOOL)_web_hostNameNeedsEncodingWithRange:(NSRange)range;	// 0x347d7ff9
- (BOOL)_web_isUserVisibleURL;	// 0x347d85d5
- (id)_web_mapHostNameWithRange:(NSRange)range encode:(BOOL)encode makeString:(BOOL)string;	// 0x34798979
- (id)_webkit_URLFragment;	// 0x347d824d
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x347d7f65
- (BOOL)_webkit_isFileURL;	// 0x347d80f9
- (BOOL)_webkit_isJavaScriptURL;	// 0x34781f59
- (BOOL)_webkit_looksLikeAbsoluteURL;	// 0x347d8211
- (id)_webkit_queryKeysAndValues;	// 0x34798e65
- (NSRange)_webkit_rangeOfURLScheme;	// 0x347d8135
- (id)_webkit_scriptIfJavaScriptURL;	// 0x34781f11
- (id)_webkit_stringByReplacingValidPercentEscapes;	// 0x347d8749
- (id)_webkit_unescapedQueryValue;	// 0x34798ff1
@end

@interface NSString (WebNSStringExtrasIPhone)
- (id)_web_bestURLForUserTypedString;	// 0x347810cd
- (id)_web_possibleURLPrefixesForUserTypedString;	// 0x347f5825
- (id)_web_possibleURLsForForUserTypedString:(BOOL)userTypedString;	// 0x34781135
- (id)_web_possibleURLsForUserTypedString;	// 0x34781121
@end

@interface NSString (WebStringDrawing)
+ (BOOL)_web_ascentRoundingEnabled;	// 0x34770d81
+ (void)_web_setAscentRoundingEnabled:(BOOL)enabled;	// 0x3477131d
+ (void)_web_setWordRoundingAllowed:(BOOL)allowed;	// 0x3477133d
+ (void)_web_setWordRoundingEnabled:(BOOL)enabled;	// 0x34770d45
+ (BOOL)_web_wordRoundingAllowed;	// 0x3477132d
+ (BOOL)_web_wordRoundingEnabled;	// 0x34770d35
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only;	// 0x34770de9
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x34770e45
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x347f772d
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only;	// 0x347710a1
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x34771115
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x347f8701
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x347f8421
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x347f812d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x347f817d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x34770d91
- (CGSize)_web_drawAtPoint:(CGPoint)point withFont:(GSFontRef)font;	// 0x347f80b5
- (CGSize)_web_drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x347f8601
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment;	// 0x347f8285
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing;	// 0x347f8229
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x347f81c5
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7 measureOnly:(BOOL)only;	// 0x3477102d
- (id)_web_securedStringIncludingLastCharacter:(BOOL)character;	// 0x347fa301
- (CGSize)_web_sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x347f8341
- (CGSize)_web_sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x347f8515
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x347f82e5
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis lineSpacing:(int)spacing;	// 0x34770fcd
- (CGSize)_web_sizeWithFont:(GSFontRef)font;	// 0x3476fbb5
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis;	// 0x347f80fd
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x3476fbe5
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing resultRange:(NSRange *)range;	// 0x3476fc25
- (id)_web_stringForWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x347f7d39
@end

