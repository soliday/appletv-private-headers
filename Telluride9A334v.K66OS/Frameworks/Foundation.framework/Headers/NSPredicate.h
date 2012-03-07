/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSPredicate : NSObject <NSCoding, NSCopying> {
	void *_reserved;	// 4 = 0x4
}
+ (void)initialize;	// 0x306321e1
+ (id)newStringFrom:(id)from usingUnicodeTransforms:(unsigned)transforms;	// 0x306cdf79
+ (id)predicateWithBlock:(id)block;	// 0x306ce171
+ (id)predicateWithFormat:(id)format;	// 0x3060d18d
+ (id)predicateWithFormat:(id)format argumentArray:(id)array;	// 0x306cdfb1
+ (id)predicateWithFormat:(id)format arguments:(void *)arguments;	// 0x3060d1b9
+ (id)predicateWithValue:(BOOL)value;	// 0x306ce0f1
+ (CFLocaleRef)retainedLocale;	// 0x306cdf95
- (id)initWithCoder:(id)coder;	// 0x3063263d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x306ce201
- (id)copyWithZone:(NSZone *)zone;	// 0x306ce1b9
- (id)description;	// 0x306ce271
- (void)encodeWithCoder:(id)coder;	// 0x3061328d
- (BOOL)evaluateWithObject:(id)object;	// 0x306347bd
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x306ce1dd
- (id)generateMetadataDescription;	// 0x3064e139
- (id)predicateFormat;	// 0x306ce281
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x306ce225
@end
