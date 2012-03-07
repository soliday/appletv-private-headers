/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSVariableExpression : NSExpression {
	NSString *_variable;	// 12 = 0xc
}
@property(readonly, retain) NSString *variable;	// G=0x320ddd59; converted property
- (id)initWithCoder:(id)coder;	// 0x320ddbd5
- (id)initWithObject:(id)object;	// 0x320414b9
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x320ddf2d
- (id)copyWithZone:(NSZone *)zone;	// 0x320ddc95
- (void)dealloc;	// 0x320ddae1
- (void)encodeWithCoder:(id)coder;	// 0x320ddb2d
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x320dde15
- (unsigned)hash;	// 0x320ddded
- (BOOL)isEqual:(id)equal;	// 0x320ddd69
- (id)predicateFormat;	// 0x320ddcd5
// converted property getter: - (id)variable;	// 0x320ddd59
@end
