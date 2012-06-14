/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {
	NSNumber *_certCount;	// 40 = 0x28
	NSNumber *_recipientCount;	// 44 = 0x2c
	NSNumber *_easStatus;	// 48 = 0x30
	NSMutableArray *_certificates;	// 52 = 0x34
}
@property(retain) NSNumber *certCount;	// G=0x318b8329; S=0x318b833d; @synthesize=_certCount
@property(readonly, assign) NSArray *certificates;	// G=0x318b83d1; @synthesize=_certificates
@property(retain) NSNumber *easStatus;	// G=0x318b8399; @synthesize=_easStatus
@property(retain) NSNumber *recipientCount;	// G=0x318b8361; S=0x318b8375; @synthesize=_recipientCount
+ (BOOL)acceptsTopLevelLeaves;	// 0x318b7c9d
+ (BOOL)frontingBasicTypes;	// 0x318b7d99
+ (BOOL)notifyOfUnknownTokens;	// 0x318b7ded
+ (BOOL)parsingLeafNode;	// 0x318b7cf1
+ (BOOL)parsingWithSubItems;	// 0x318b7d45
- (void)addCertificateString:(id)string;	// 0x318b7e41
- (id)asParseRules;	// 0x318b7ea5
// declared property getter: - (id)certCount;	// 0x318b8329
// declared property getter: - (id)certificates;	// 0x318b83d1
- (void)dealloc;	// 0x318b82a1
- (id)description;	// 0x318b8115
// declared property getter: - (id)easStatus;	// 0x318b8399
// declared property getter: - (id)recipientCount;	// 0x318b8361
// declared property setter: - (void)setCertCount:(id)count;	// 0x318b833d
- (void)setEASStatus:(id)status;	// 0x318b83ad
// declared property setter: - (void)setRecipientCount:(id)count;	// 0x318b8375
@end

