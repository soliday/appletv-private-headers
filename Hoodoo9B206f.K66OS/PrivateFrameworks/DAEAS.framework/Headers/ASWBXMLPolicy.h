/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary *_policyData;	// 52 = 0x34
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a3515
+ (BOOL)frontingBasicTypes;	// 0x321a3611
+ (BOOL)notifyOfUnknownTokens;	// 0x321a3665
+ (BOOL)parsingLeafNode;	// 0x321a3569
+ (BOOL)parsingWithSubItems;	// 0x321a35bd
- (void)_cleanUpPolicyData:(id)data;	// 0x321a3c0d
- (void)_setPolicyData:(id)data;	// 0x321a3705
- (id)asParseRules;	// 0x321a3749
- (void)dealloc;	// 0x321a36b9
- (id)perDomainDictsForPolicy;	// 0x321a3e0d
@end

