/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

@interface BRFeatureManager : BRSingleton {
@private
	NSMutableDictionary *_featureDatabase;	// 4 = 0x4
	NSMutableDictionary *_featureDatabaseOverrides;	// 8 = 0x8
	NSMutableDictionary *_featureCodeLookupTable;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x36727325
+ (id)singleton;	// 0x36727315
- (id)init;	// 0x36727335
- (void)_buildFeatureCodeLookupTable;	// 0x36728069
- (id)_featureNameForCode:(id)code;	// 0x36727bf1
- (void)_loadSavedCodes;	// 0x36727c95
- (void)_markFeatureNamed:(id)named enabled:(BOOL)enabled inTable:(id)table;	// 0x36727af1
- (id)_merchantWithFeatureCode:(id)featureCode;	// 0x367282d1
- (void)_notifyEnabledStateChangedForFeatureNamed:(id)featureNamed;	// 0x36727a65
- (void)_saveFeatureCodes:(id)codes;	// 0x36727f49
- (id)allFeatures;	// 0x367275ed
- (id)availableFeatures;	// 0x36727715
- (void)dealloc;	// 0x36727405
- (void)disableFeatureNamed:(id)named;	// 0x367274a5
- (void)enableFeatureNamed:(id)named;	// 0x36727479
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x367274d1
- (void)resetFeatures;	// 0x36727801
- (void)toggleSettingForCode:(id)code;	// 0x367278b5
@end

