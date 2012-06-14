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
+ (void)initialize;	// 0x315a51d1
+ (id)newStringFrom:(id)from usingUnicodeTransforms:(unsigned)transforms;	// 0x31640f69
+ (id)predicateWithBlock:(id)block;	// 0x31641161
+ (id)predicateWithFormat:(id)format;	// 0x3158017d
+ (id)predicateWithFormat:(id)format argumentArray:(id)array;	// 0x31640fa1
+ (id)predicateWithFormat:(id)format arguments:(void *)arguments;	// 0x315801a9
+ (id)predicateWithValue:(BOOL)value;	// 0x316410e1
+ (CFLocaleRef)retainedLocale;	// 0x31640f85
- (id)initWithCoder:(id)coder;	// 0x315a562d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x316411f1
- (id)copyWithZone:(NSZone *)zone;	// 0x316411a9
- (id)description;	// 0x31641261
- (void)encodeWithCoder:(id)coder;	// 0x3158627d
- (BOOL)evaluateWithObject:(id)object;	// 0x315a77ad
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x316411cd
- (id)generateMetadataDescription;	// 0x315c1129
- (id)predicateFormat;	// 0x31641271
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x31641215
@end

