/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSStringPredicateOperator : NSPredicateOperator {
@private
	unsigned _flags;	// 12 = 0xc
}
@property(readonly, assign) unsigned flags;	// G=0x31d2b40d; converted property
- (id)initWithCoder:(id)coder;	// 0x31dc906d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x31d2b1bd
- (id)_modifierString;	// 0x31dc911d
- (void)_setOptions:(unsigned)options;	// 0x31d2b205
- (id)copyWithZone:(NSZone *)zone;	// 0x31dc9301
- (void)encodeWithCoder:(id)coder;	// 0x31dc8fc5
// converted property getter: - (unsigned)flags;	// 0x31d2b40d
- (BOOL)isEqual:(id)equal;	// 0x31dc9249
- (unsigned)options;	// 0x31dc9361
@end

