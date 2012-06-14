/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject {
@private
	NSMutableArray *mRules;	// 4 = 0x4
	EDReferenceCollection *mRanges;	// 8 = 0x8
}
+ (id)conditionalFormatting;	// 0x313314f9
- (id)init;	// 0x311efd15
- (void)addRange:(id)range;	// 0x311f005d
- (void)addRule:(id)rule;	// 0x311f2cb9
- (void)dealloc;	// 0x311f5861
- (void)insertRule:(id)rule atIndex:(unsigned)index;	// 0x313315d5
- (id)rangeAtIndex:(unsigned)index;	// 0x31331541
- (unsigned)rangeCount;	// 0x31331585
- (id)ruleAtIndex:(unsigned)index;	// 0x31331619
- (unsigned)ruleCount;	// 0x3133165d
- (void)sortRulesByPriority;	// 0x313315a5
@end

