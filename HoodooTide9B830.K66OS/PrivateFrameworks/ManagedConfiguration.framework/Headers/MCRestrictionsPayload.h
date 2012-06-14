/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSMutableDictionary;

@interface MCRestrictionsPayload : MCPayload {
@private
	NSMutableDictionary *_restrictions;	// 40 = 0x28
}
@property(readonly, assign) NSDictionary *restrictions;	// G=0x33b25da5; @synthesize=_restrictions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33b260bd
+ (id)typeStrings;	// 0x33b26049
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b26cb1
- (id)_defaultMediaSettings;	// 0x33b26971
- (id)_enforcedFeatureStrings;	// 0x33b2699d
- (void)_insertRestrictedBoolForKey:(id)key value:(id)value preferenc:(BOOL)preferenc;	// 0x33b25f7d
- (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x33b25db5
- (id)_restrictedFeatureStrings;	// 0x33b269c9
- (void)dealloc;	// 0x33b26071
- (id)description;	// 0x33b269f5
- (id)installationWarnings;	// 0x33b2611d
// declared property getter: - (id)restrictions;	// 0x33b25da5
- (id)stubDictionary;	// 0x33b26a71
- (id)subtitle1Description;	// 0x33b2634d
@end

