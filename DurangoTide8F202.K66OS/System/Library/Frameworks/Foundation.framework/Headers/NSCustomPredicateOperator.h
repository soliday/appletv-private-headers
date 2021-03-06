/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


__attribute__((visibility("hidden")))
@interface NSCustomPredicateOperator : NSPredicateOperator {
@private
	SEL _selector;	// 12 = 0xc
}
@property(readonly, assign) SEL selector;	// G=0x324d2f19; converted property
- (id)initWithCoder:(id)coder;	// 0x324d30cd
- (id)initWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;	// 0x324d2f29
- (id)copyWithZone:(NSZone *)zone;	// 0x324d316d
- (void)encodeWithCoder:(id)coder;	// 0x324d302d
- (BOOL)isEqual:(id)equal;	// 0x324d2f65
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x324d31c5
// converted property getter: - (SEL)selector;	// 0x324d2f19
- (id)symbol;	// 0x324d3015
@end

