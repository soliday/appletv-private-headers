/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSComparisonPredicateOperator : NSPredicateOperator {
@private
	unsigned _variant;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(readonly, assign) unsigned options;	// G=0x31dc754d; converted property
@property(readonly, assign) unsigned variant;	// G=0x31dc753d; converted property
- (id)initWithCoder:(id)coder;	// 0x31d2587d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x31d25bad
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant options:(unsigned)options;	// 0x31d25b79
- (id)copyWithZone:(NSZone *)zone;	// 0x31dc7399
- (void)encodeWithCoder:(id)coder;	// 0x31dc72d1
- (BOOL)isEqual:(id)equal;	// 0x31dc755d
// converted property getter: - (unsigned)options;	// 0x31dc754d
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31d28c45
- (id)predicateFormat;	// 0x31dc7425
// converted property getter: - (unsigned)variant;	// 0x31dc753d
@end

