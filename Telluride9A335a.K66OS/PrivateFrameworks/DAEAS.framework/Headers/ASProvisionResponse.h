/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
	NSArray *_policies;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	BOOL _remoteWipe;	// 48 = 0x30
	NSString *_policyType;	// 52 = 0x34
}
@property(readonly, retain) NSArray *policies;	// G=0x321d5505; converted property
@property(retain) NSString *policyType;	// G=0x321d54b1; S=0x321d54c1; converted property
@property(readonly, assign) BOOL remoteWipe;	// G=0x321d5525; converted property
@property(readonly, retain) NSNumber *status;	// G=0x321d5515; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x321d5239
+ (BOOL)frontingBasicTypes;	// 0x321d5335
+ (BOOL)notifyOfUnknownTokens;	// 0x321d5389
+ (BOOL)parsingLeafNode;	// 0x321d528d
+ (BOOL)parsingWithSubItems;	// 0x321d52e1
- (id)init;	// 0x321d5451
- (id)initWithPolicyType:(id)policyType;	// 0x321d5471
- (void)_setPolicies:(id)policies;	// 0x321d5535
- (void)_setRemoteWipe:(id)wipe;	// 0x321d5579
- (void)_setStatus:(id)status;	// 0x321d558d
- (id)asParseRules;	// 0x321d55d1
- (void)dealloc;	// 0x321d53dd
- (id)description;	// 0x321d59a1
// converted property getter: - (id)policies;	// 0x321d5505
// converted property getter: - (id)policyType;	// 0x321d54b1
// converted property getter: - (BOOL)remoteWipe;	// 0x321d5525
// converted property setter: - (void)setPolicyType:(id)type;	// 0x321d54c1
// converted property getter: - (id)status;	// 0x321d5515
@end
