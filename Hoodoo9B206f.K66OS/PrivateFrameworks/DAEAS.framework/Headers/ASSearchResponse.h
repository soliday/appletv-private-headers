/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSArray;

@interface ASSearchResponse : ASItem {
	NSArray *_stores;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	int _expectedResultType;	// 48 = 0x30
}
@property(assign) int expectedResultType;	// G=0x321a1e59; S=0x321a1e69; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x321a1e21; S=0x321a1e35; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x321a1de9; S=0x321a1dfd; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a1979
+ (BOOL)frontingBasicTypes;	// 0x321a1a75
+ (BOOL)notifyOfUnknownTokens;	// 0x321a1ac9
+ (BOOL)parsingLeafNode;	// 0x321a19cd
+ (BOOL)parsingWithSubItems;	// 0x321a1a21
- (id)asParseRules;	// 0x321a1be5
- (void)dealloc;	// 0x321a1b1d
- (id)description;	// 0x321a1b7d
// declared property getter: - (int)expectedResultType;	// 0x321a1e59
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x321a1e69
// declared property setter: - (void)setStatus:(id)status;	// 0x321a1e35
// declared property setter: - (void)setStores:(id)stores;	// 0x321a1dfd
// declared property getter: - (id)status;	// 0x321a1e21
// declared property getter: - (id)stores;	// 0x321a1de9
@end
