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
@property(readonly, assign, nonatomic) NSArray *refList;	// G=0x35683ff5; 
@property(retain, nonatomic) NSMutableDictionary *refs;	// G=0x3568412d; S=0x3568413d; @synthesize
@property(retain, nonatomic) NSMutableDictionary *symbols;	// G=0x356840f9; S=0x35684109; @synthesize
@property(assign, nonatomic) BOOL variable;	// G=0x3568402d; S=0x3568407d; 
+ (id)stringEnumForType:(int)type;	// 0x35682451
+ (id)treeOfType:(int)type;	// 0x35681b01
+ (int)typeForString:(id)string;	// 0x356824ed
+ (id)uniqueNameWithType:(int)type;	// 0x35681745
- (id)initWithType:(int)type;	// 0x35681aa9
- (id)attributeSet:(BOOL)set;	// 0x35683d31
- (id)copyWithZone:(NSZone *)zone;	// 0x35681b49
- (id)geometrySet:(BOOL)set;	// 0x35683a6d
- (int)indexOfSubtreeWithName:(id)name rows:(id)rows;	// 0x35682915
- (int)indexOfSubtreeWithType:(int)type;	// 0x356828a1
- (BOOL)isSameAsTree:(id)tree;	// 0x35681d59
- (BOOL)isSymbolType;	// 0x35682649
- (id)listAtIndex:(int)index;	// 0x35682665
- (void)mergePropertiesWithOthers:(id)others;	// 0x35682b6d
- (void)mergePropertiesWithSubtreeRange:(NSRange)subtreeRange properties:(id)properties;	// 0x35682ca9
- (void)mergeSubtreesWithOthers:(id)others;	// 0x35682a15
- (void)mergeSymbolsWithOthers:(id)others;	// 0x35682ae1
// declared property getter: - (id)refList;	// 0x35683ff5
// declared property getter: - (id)refs;	// 0x3568412d
- (void)setAttributeSet:(id)set;	// 0x35683ec1
- (void)setGeometrySet:(id)set;	// 0x35683bfd
// declared property setter: - (void)setRefs:(id)refs;	// 0x3568413d
// declared property setter: - (void)setSymbols:(id)symbols;	// 0x35684109
- (void)setTarget:(id)target forReference:(id)reference;	// 0x356827b1
// declared property setter: - (void)setVariable:(BOOL)variable;	// 0x3568407d
- (int)shapeHash;	// 0x35683721
- (id)simpleName;	// 0x356817b9
- (int)subtreeHash;	// 0x35683961
- (int)symbolHash:(id)hash;	// 0x35683399
- (id)symbolValues:(id)values withSymbols:(id)symbols;	// 0x35683171
// declared property getter: - (id)symbols;	// 0x356840f9
- (void)uniquifyName;	// 0x356819ed
- (BOOL)usesSymbols;	// 0x35682ec9
// declared property getter: - (BOOL)variable;	// 0x3568402d
@end

