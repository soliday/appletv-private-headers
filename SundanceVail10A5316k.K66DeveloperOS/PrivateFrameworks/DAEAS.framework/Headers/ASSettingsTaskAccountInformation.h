/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSString, ASSettingsTaskAccountEmailAddresses;

@interface ASSettingsTaskAccountInformation : ASItem {
	ASSettingsTaskAccountEmailAddresses *_emailAddressList;	// 40 = 0x28
	NSString *_accountId;	// 44 = 0x2c
}
@property(retain) NSString *accountId;	// G=0x3095a249; S=0x3095a25d; @synthesize=_accountId
@property(retain) ASSettingsTaskAccountEmailAddresses *emailAddressList;	// G=0x3095a225; S=0x3095a239; @synthesize=_emailAddressList
+ (BOOL)acceptsTopLevelLeaves;	// 0x30959ba1
+ (id)asParseRules;	// 0x30959e2d
+ (BOOL)frontingBasicTypes;	// 0x30959c9d
+ (BOOL)notifyOfUnknownTokens;	// 0x30959cf1
+ (BOOL)parsingLeafNode;	// 0x30959bf5
+ (BOOL)parsingWithSubItems;	// 0x30959c49
// declared property getter: - (id)accountId;	// 0x3095a249
- (void)dealloc;	// 0x30959d45
- (id)description;	// 0x30959da9
// declared property getter: - (id)emailAddressList;	// 0x3095a225
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3095a17d
// declared property setter: - (void)setAccountId:(id)anId;	// 0x3095a25d
// declared property setter: - (void)setEmailAddressList:(id)list;	// 0x3095a239
@end
