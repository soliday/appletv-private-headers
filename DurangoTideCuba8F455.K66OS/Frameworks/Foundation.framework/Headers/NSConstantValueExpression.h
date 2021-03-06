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
@property(readonly, retain) id constantValue;	// G=0x31028d75; converted property
- (id)initWithCoder:(id)coder;	// 0x310b5489
- (id)initWithObject:(id)object;	// 0x30ffdf21
// converted property getter: - (id)constantValue;	// 0x31028d75
- (id)copyWithZone:(NSZone *)zone;	// 0x3102a185
- (void)dealloc;	// 0x31000a39
- (void)encodeWithCoder:(id)coder;	// 0x310b5395
- (id)expressionValueWithObject:(id)object;	// 0x310b51dd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x30ffef59
- (unsigned)hash;	// 0x310b51ed
- (BOOL)isEqual:(id)equal;	// 0x310b5211
- (id)predicateFormat;	// 0x310b5295
@end

