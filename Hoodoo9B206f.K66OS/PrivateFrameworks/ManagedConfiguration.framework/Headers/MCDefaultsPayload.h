/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
	NSDictionary *_defaultsByDomain;	// 40 = 0x28
}
+ (id)_allowedDefaults;	// 0x318f3cf1
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x318f40e9
+ (id)typeStrings;	// 0x318f3cc9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x318f4441
- (BOOL)_checkForValidDefaults:(id)validDefaults outError:(id *)error;	// 0x318f3da9
- (void)dealloc;	// 0x318f409d
- (id)defaultsForDomain:(id)domain;	// 0x318f3c99
- (id)description;	// 0x318f4229
- (id)domains;	// 0x318f3c79
- (id)stubDictionary;	// 0x318f42a9
- (id)subtitle1Description;	// 0x318f4149
@end

