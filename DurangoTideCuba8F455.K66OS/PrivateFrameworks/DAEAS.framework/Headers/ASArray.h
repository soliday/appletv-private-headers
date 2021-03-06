/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"
#import "ASParsingWithSubItems.h"

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
	NSMutableArray *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x343569d5
+ (BOOL)frontingBasicTypes;	// 0x343568fd
+ (BOOL)notifyOfUnknownTokens;	// 0x343568b5
+ (BOOL)parsingLeafNode;	// 0x3435698d
+ (BOOL)parsingWithSubItems;	// 0x34356945
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x34356865
- (void)addItem:(id)item;	// 0x343567ad
- (id)asParseRules;	// 0x34356751
- (id)commonValue;	// 0x34356761
- (void)dealloc;	// 0x34356809
- (id)description;	// 0x34356a1d
@end

