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
#import "NSMutableCopying.h"


@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x3164c851
+ (id)allocWithZone:(NSZone *)zone;	// 0x3158cd2d
- (id)initWithCoder:(id)coder;	// 0x3158e929
- (unsigned long)_cfTypeID;	// 0x31670131
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x31670135
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3164c8a9
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3164cd75
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x3164c9fd
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x315928e5
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x3164c8dd
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3164c885
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x31591061
- (Class)classForCoder;	// 0x3164d095
- (id)copyWithZone:(NSZone *)zone;	// 0x31592a61
- (id)description;	// 0x3164cc6d
- (void)encodeWithCoder:(id)coder;	// 0x3164d0b1
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x3164cf71
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x3164ce69
- (unsigned)hash;	// 0x3164caad
- (BOOL)isEqual:(id)equal;	// 0x3164cad5
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x3164cb31
- (unsigned)length;	// 0x3164ca85
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3164cc35
- (id)string;	// 0x3164c861
@end

