/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


@interface NSConstantValueExpression : NSExpression {
@private
	id constantValue;	// 12 = 0xc
}
@property(readonly, retain) id constantValue;	// G=0x30289a9d; converted property
- (id)initWithCoder:(id)coder;	// 0x30289705
- (id)initWithObject:(id)object;	// 0x30267c6d
// converted property getter: - (id)constantValue;	// 0x30289a9d
- (id)copyWithZone:(NSZone *)zone;	// 0x3028d3a1
- (void)dealloc;	// 0x302684cd
- (void)encodeWithCoder:(id)coder;	// 0x303265e9
- (id)expressionValueWithObject:(id)object;	// 0x303268d9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3028c521
- (unsigned)hash;	// 0x303268b1
- (BOOL)isEqual:(id)equal;	// 0x30326825
- (id)predicateFormat;	// 0x303266ed
@end
