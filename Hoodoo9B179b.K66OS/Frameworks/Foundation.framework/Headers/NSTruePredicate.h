/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"


@interface NSTruePredicate : NSPredicate {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3103d815
+ (id)defaultInstance;	// 0x310218ed
+ (void)initialize;	// 0x3103cf5d
- (id)initWithCoder:(id)coder;	// 0x310d8b59
- (BOOL)_isDeallocating;	// 0x310d8ad1
- (BOOL)_tryRetain;	// 0x310d8ad5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x310d8bd1
- (id)autorelease;	// 0x3103d825
- (id)copyWithZone:(NSZone *)zone;	// 0x310d8bb9
- (void)encodeWithCoder:(id)coder;	// 0x310d8ad9
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x310d8bcd
- (unsigned)hash;	// 0x310d8bbd
- (BOOL)isEqual:(id)equal;	// 0x310218fd
- (id)predicateFormat;	// 0x310d8bc1
- (oneway void)release;	// 0x3103d90d
- (id)retain;	// 0x3103d829
- (unsigned)retainCount;	// 0x310d8ac9
@end
