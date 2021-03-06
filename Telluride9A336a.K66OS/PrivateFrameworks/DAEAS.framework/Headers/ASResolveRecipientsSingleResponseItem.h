/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
	NSMutableArray *_recipients;	// 48 = 0x30
}
@property(retain) NSNumber *easStatus;	// G=0x315a6f6d; @synthesize=_easStatus
@property(retain) NSString *emailAddress;	// G=0x315a6f35; S=0x315a6f49; @synthesize=_emailAddress
@property(retain) NSMutableArray *recipients;	// G=0x315a6fa5; S=0x315a6fb9; @synthesize=_recipients
+ (BOOL)acceptsTopLevelLeaves;	// 0x315a6995
+ (BOOL)frontingBasicTypes;	// 0x315a6a91
+ (BOOL)notifyOfUnknownTokens;	// 0x315a6ae5
+ (BOOL)parsingLeafNode;	// 0x315a69e9
+ (BOOL)parsingWithSubItems;	// 0x315a6a3d
- (void)addRecipient:(id)recipient;	// 0x315a6b39
- (id)asParseRules;	// 0x315a6b9d
- (void)dealloc;	// 0x315a6ec1
- (id)description;	// 0x315a6e39
// declared property getter: - (id)easStatus;	// 0x315a6f6d
// declared property getter: - (id)emailAddress;	// 0x315a6f35
// declared property getter: - (id)recipients;	// 0x315a6fa5
- (void)setEASStatus:(id)status;	// 0x315a6f81
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x315a6f49
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x315a6fb9
@end

