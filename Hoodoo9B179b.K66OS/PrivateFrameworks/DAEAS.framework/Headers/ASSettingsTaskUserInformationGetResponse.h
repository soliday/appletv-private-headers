/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {
	NSArray *_emailAddresses;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *emailAddresses;	// G=0x31dc2b3d; S=0x31dc2b4d; @synthesize=_emailAddresses
+ (BOOL)acceptsTopLevelLeaves;	// 0x31dc26c9
+ (BOOL)frontingBasicTypes;	// 0x31dc27c5
+ (BOOL)notifyOfUnknownTokens;	// 0x31dc2819
+ (BOOL)parsingLeafNode;	// 0x31dc271d
+ (BOOL)parsingWithSubItems;	// 0x31dc2771
- (id)asParseRules;	// 0x31dc2921
- (void)dealloc;	// 0x31dc286d
- (id)description;	// 0x31dc28b9
// declared property getter: - (id)emailAddresses;	// 0x31dc2b3d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31dc2a91
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x31dc2b4d
@end

