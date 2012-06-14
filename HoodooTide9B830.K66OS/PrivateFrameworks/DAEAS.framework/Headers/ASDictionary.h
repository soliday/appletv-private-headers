/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASItem.h"
#import "ASParsingWithSubItems.h"
#import "ASParsingFrontingBasicType.h"

@class NSMutableDictionary, NSDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
	NSMutableDictionary *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
	NSMutableDictionary *_placeHolder;	// 48 = 0x30
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x31885c95
+ (BOOL)frontingBasicTypes;	// 0x31885d91
+ (BOOL)notifyOfUnknownTokens;	// 0x31885de5
+ (BOOL)parsingLeafNode;	// 0x31885ce9
+ (BOOL)parsingWithSubItems;	// 0x31885d3d
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x31885e39
- (void)_setItems:(id)items;	// 0x31885f9d
- (void)applyPlaceHolder;	// 0x31885fe1
- (id)asParseRules;	// 0x31885f8d
- (void)clearPlaceHolder;	// 0x31886001
- (id)commonValue;	// 0x3188604d
- (void)dealloc;	// 0x31885ebd
- (id)description;	// 0x31885f31
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x3188602d
@end

