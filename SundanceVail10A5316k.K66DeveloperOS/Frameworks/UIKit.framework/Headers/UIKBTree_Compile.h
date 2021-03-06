/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBTree.h"

@class NSMutableDictionary, NSArray;

@interface UIKBTree_Compile : UIKBTree {
	NSMutableDictionary *symbols;	// 24 = 0x18
	NSMutableDictionary *refs;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSArray *refList;	// G=0x303f5001; 
@property(retain, nonatomic) NSMutableDictionary *refs;	// G=0x303f5135; S=0x303f5145; @synthesize
@property(retain, nonatomic) NSMutableDictionary *symbols;	// G=0x303f5115; S=0x303f5125; @synthesize
@property(assign, nonatomic) BOOL variable;	// G=0x303f5039; S=0x303f5091; 
+ (id)stringEnumForType:(int)type;	// 0x303f3305
+ (id)treeOfType:(int)type;	// 0x303f2a75
+ (int)typeForString:(id)string;	// 0x303f33a1
+ (id)uniqueNameWithType:(int)type;	// 0x303f26a9
- (id)initWithType:(int)type;	// 0x303f2a1d
- (BOOL)_needsScaling;	// 0x303f5111
- (id)attributeSet:(BOOL)set;	// 0x303f4d0d
- (id)copyWithZone:(NSZone *)zone;	// 0x303f2abd
- (id)geometrySet:(BOOL)set;	// 0x303f4a19
- (int)indexOfSubtreeWithName:(id)name rows:(id)rows;	// 0x303f37ed
- (int)indexOfSubtreeWithType:(int)type;	// 0x303f376d
- (BOOL)isSameAsTree:(id)tree;	// 0x303f2cd5
- (BOOL)isSymbolType;	// 0x303f34ed
- (id)listAtIndex:(int)index;	// 0x303f3509
- (void)mergePropertiesWithOthers:(id)others;	// 0x303f3a71
- (void)mergePropertiesWithSubtreeRange:(NSRange)subtreeRange properties:(id)properties;	// 0x303f3bc1
- (void)mergeSubtreesWithOthers:(id)others;	// 0x303f38f5
- (void)mergeSymbolsWithOthers:(id)others;	// 0x303f39dd
// declared property getter: - (id)refList;	// 0x303f5001
// declared property getter: - (id)refs;	// 0x303f5135
- (void)setAttributeSet:(id)set;	// 0x303f4eb1
- (void)setGeometrySet:(id)set;	// 0x303f4bbd
// declared property setter: - (void)setRefs:(id)refs;	// 0x303f5145
// declared property setter: - (void)setSymbols:(id)symbols;	// 0x303f5125
- (void)setTarget:(id)target forReference:(id)reference;	// 0x303f3681
// declared property setter: - (void)setVariable:(BOOL)variable;	// 0x303f5091
- (int)shapeHash;	// 0x303f46b5
- (id)simpleName;	// 0x303f271d
- (int)subtreeHash;	// 0x303f48ed
- (int)symbolHash:(id)hash;	// 0x303f4311
- (id)symbolValues:(id)values withSymbols:(id)symbols;	// 0x303f40b1
// declared property getter: - (id)symbols;	// 0x303f5115
- (void)uniquifyName;	// 0x303f2969
- (BOOL)usesSymbols;	// 0x303f3df9
// declared property getter: - (BOOL)variable;	// 0x303f5039
@end

