/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary;

@interface BRLocalizedStringManager : BRSingleton {
@private
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
+ (id)_backRowFramework;	// 0x33b5bda9
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x33b5b97d
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x33b5ba21
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x33b5b9dd
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x33b5b9b1
+ (id)localizedLanguageForCode:(id)code;	// 0x33b5bd19
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x33b5ba79
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x33b5bc91
+ (void)setSingleton:(id)singleton;	// 0x33b5b7f1
+ (id)singleton;	// 0x33b5b7e1
- (id)init;	// 0x33b5b801
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x33b5bf49
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x33b5c025
- (void)_languageChanged:(id)changed;	// 0x33b5bdad
- (void)dealloc;	// 0x33b5b8ed
@end

