/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSLocale : NSObject <NSCopying, NSCoding> {
}
+ (id)ISOCountryCodes;	// 0x327a63e9
+ (id)ISOCurrencyCodes;	// 0x327a6415
+ (id)ISOLanguageCodes;	// 0x327a63bd
+ (id)allocWithZone:(NSZone *)zone;	// 0x3270f189
+ (id)availableLocaleIdentifiers;	// 0x327a6391
+ (id)canonicalLanguageIdentifierFromString:(id)string;	// 0x3271ad9d
+ (id)canonicalLocaleIdentifierFromString:(id)string;	// 0x327a646d
+ (unsigned)characterDirectionForLanguage:(id)language;	// 0x327388c9
+ (id)commonISOCurrencyCodes;	// 0x327a6441
+ (id)componentsFromLocaleIdentifier:(id)localeIdentifier;	// 0x3271ad25
+ (id)currentLocale;	// 0x3270e451
+ (unsigned)lineDirectionForLanguage:(id)language;	// 0x327a64ed
+ (id)localeIdentifierFromComponents:(id)components;	// 0x3271ad61
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned)windowsLocaleCode;	// 0x327a64a9
+ (id)localeWithLocaleIdentifier:(id)localeIdentifier;	// 0x327a6355
+ (id)preferredLanguages;	// 0x3271ab75
+ (id)systemLocale;	// 0x327a632d
+ (unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)localeIdentifier;	// 0x327a64e5
- (id)init;	// 0x327a6251
- (id)initWithCoder:(id)coder;	// 0x327a6315
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x327a6331
- (unsigned long)_cfTypeID;	// 0x327a6265
- (id)_copyDisplayNameForKey:(id)key value:(id)value;	// 0x327a64f5
- (id)_prefs;	// 0x327a651d
- (id)copyWithZone:(NSZone *)zone;	// 0x3272a38d
- (id)displayNameForKey:(id)key value:(id)value;	// 0x327a622d
- (void)encodeWithCoder:(id)coder;	// 0x327a6319
- (unsigned)hash;	// 0x327a6269
- (id)identifier;	// 0x327a631d
- (BOOL)isEqual:(id)equal;	// 0x327a6291
- (id)localeIdentifier;	// 0x3271ab59
- (id)objectForKey:(id)key;	// 0x327a6209
@end

