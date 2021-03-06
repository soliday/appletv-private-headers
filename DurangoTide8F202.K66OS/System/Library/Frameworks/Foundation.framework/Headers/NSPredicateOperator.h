/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSPredicateOperator : NSObject <NSCoding, NSCopying> {
@private
	unsigned _operatorType;	// 4 = 0x4
	unsigned _modifier;	// 8 = 0x8
}
@property(readonly, assign) unsigned modifier;	// G=0x32440f75; converted property
@property(readonly, assign) unsigned operatorType;	// G=0x3241738d; converted property
+ (SEL)_getSelectorForType:(unsigned)type;	// 0x324d43bd
+ (id)_getSymbolForType:(unsigned)type;	// 0x324d4469
+ (id)_newOperatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x324160e9
+ (id)operatorWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;	// 0x324d42a5
+ (id)operatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x324d42e9
- (id)initWithCoder:(id)coder;	// 0x324d4155
- (id)initWithOperatorType:(unsigned)operatorType;	// 0x324d428d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier;	// 0x324164a9
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x324d4279
- (void)_setModifier:(unsigned)modifier;	// 0x324d3ff5
- (void)_setOptions:(unsigned)options;	// 0x324d4319
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x324d4005
- (id)copyWithZone:(NSZone *)zone;	// 0x324d435d
- (id)description;	// 0x324d412d
- (void)encodeWithCoder:(id)coder;	// 0x324d41e9
- (unsigned)hash;	// 0x324d4381
- (BOOL)isEqual:(id)equal;	// 0x324d4025
// converted property getter: - (unsigned)modifier;	// 0x32440f75
// converted property getter: - (unsigned)operatorType;	// 0x3241738d
- (unsigned)options;	// 0x324d3ff1
- (BOOL)performOperationUsingObject:(id)object andObject:(id)object2;	// 0x32416f79
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x324d4339
- (id)predicateFormat;	// 0x324d4141
- (SEL)selector;	// 0x324d40f1
- (id)symbol;	// 0x324d40b5
@end

