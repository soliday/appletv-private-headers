/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, ASSettingsTaskUserInformationResponse;

@interface ASSettingsTaskResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationResponse *_userInformation;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *status;	// G=0x302fc4f1; S=0x302fd1a9; @synthesize=_status
@property(retain, nonatomic) ASSettingsTaskUserInformationResponse *userInformation;	// G=0x302fc4e1; S=0x302fd1d1; @synthesize=_userInformation
+ (BOOL)acceptsTopLevelLeaves;	// 0x302fcce1
+ (BOOL)frontingBasicTypes;	// 0x302fcc09
+ (BOOL)notifyOfUnknownTokens;	// 0x302fcbc1
+ (BOOL)parsingLeafNode;	// 0x302fcc99
+ (BOOL)parsingWithSubItems;	// 0x302fcc51
- (id)asParseRules;	// 0x302fca89
- (void)dealloc;	// 0x302fcdcd
- (id)description;	// 0x302fcf15
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x302fd0a1
// declared property setter: - (void)setStatus:(id)status;	// 0x302fd1a9
// declared property setter: - (void)setUserInformation:(id)information;	// 0x302fd1d1
// declared property getter: - (id)status;	// 0x302fc4f1
// declared property getter: - (id)userInformation;	// 0x302fc4e1
@end

