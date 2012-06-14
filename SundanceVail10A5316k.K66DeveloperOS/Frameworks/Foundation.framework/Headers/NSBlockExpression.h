/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;	// 12 = 0xc
	NSArray *_arguments;	// 16 = 0x10
}
@property(readonly, retain) NSArray *arguments;	// G=0x31ac8129; converted property
- (id)initWithCoder:(id)coder;	// 0x31ac80dd
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x31ac7f41
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31ac83ed
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31ac85a5
// converted property getter: - (id)arguments;	// 0x31ac8129
- (id)copyWithZone:(NSZone *)zone;	// 0x31ac8031
- (void)dealloc;	// 0x31ac7fb9
- (void)encodeWithCoder:(id)coder;	// 0x31ac80a1
- (id)expressionBlock;	// 0x31ac8119
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31ac8139
- (id)predicateFormat;	// 0x31ac8399
@end
