/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


@interface NSDecimalNumber : NSNumber {
@private
	unsigned _exponent : 8;	// 4 = 0x4
	unsigned _length : 4;	// 5 = 0x5
	unsigned _isNegative : 1;	// 5 = 0x5
	unsigned _isCompact : 1;	// 5 = 0x5
	unsigned _reserved : 1;	// 5 = 0x5
	unsigned _hasExternalRefCount : 1;	// 5 = 0x5
	unsigned _refs : 16;	// 6 = 0x6
	unsigned short _mantissa[0];	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3161b8e1
+ (id)decimalNumberWithDecimal:(XXStruct_9isexA)decimal;	// 0x3161b9e5
+ (id)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x3161b9a5
+ (id)decimalNumberWithString:(id)string;	// 0x3161ba35
+ (id)decimalNumberWithString:(id)string locale:(id)locale;	// 0x3161ba65
+ (id)defaultBehavior;	// 0x3161c72d
+ (id)maximumDecimalNumber;	// 0x3161bc79
+ (id)minimumDecimalNumber;	// 0x3161bc0d
+ (id)notANumber;	// 0x3161bd95
+ (id)numberWithBool:(BOOL)aBool;	// 0x3161dc2d
+ (id)numberWithChar:(BOOL)aChar;	// 0x3161d7f9
+ (id)numberWithDouble:(double)aDouble;	// 0x3161dbdd
+ (id)numberWithFloat:(float)aFloat;	// 0x3161db91
+ (id)numberWithInt:(int)int;	// 0x3161d929
+ (id)numberWithInteger:(int)integer;	// 0x3161d975
+ (id)numberWithLong:(long)aLong;	// 0x3161da59
+ (id)numberWithLongLong:(long long)longLong;	// 0x3161daf1
+ (id)numberWithShort:(short)aShort;	// 0x3161d891
+ (id)numberWithUnsignedChar:(unsigned char)unsignedChar;	// 0x3161d845
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x3161d9c1
+ (id)numberWithUnsignedInteger:(unsigned)unsignedInteger;	// 0x3161da0d
+ (id)numberWithUnsignedLong:(unsigned long)unsignedLong;	// 0x3161daa5
+ (id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;	// 0x3161db41
+ (id)numberWithUnsignedShort:(unsigned short)unsignedShort;	// 0x3161d8dd
+ (id)one;	// 0x3161bd25
+ (void)setDefaultBehavior:(id)behavior;	// 0x3161c6d9
+ (id)zero;	// 0x3161bce5
- (id)initWithCoder:(id)coder;	// 0x3161bb89
- (id)initWithDecimal:(XXStruct_9isexA)decimal;	// 0x3161bad5
- (id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x3161ba99
- (id)initWithString:(id)string;	// 0x3161bb11
- (id)initWithString:(id)string locale:(id)locale;	// 0x3161bb4d
- (BOOL)boolValue;	// 0x3161cb01
- (BOOL)charValue;	// 0x3161c985
- (Class)classForCoder;	// 0x3161c79d
- (int)compare:(id)compare;	// 0x3161be05
- (id)copy;	// 0x3161b91d
- (id)copyWithZone:(NSZone *)zone;	// 0x3161b92d
- (id)decimalNumberByAdding:(id)adding;	// 0x3161bfc9
- (id)decimalNumberByAdding:(id)adding withBehavior:(id)behavior;	// 0x3161c019
- (id)decimalNumberByDividingBy:(id)by;	// 0x3161c395
- (id)decimalNumberByDividingBy:(id)by withBehavior:(id)behavior;	// 0x3161c3e5
- (id)decimalNumberByMultiplyingBy:(id)by;	// 0x3161c2b9
- (id)decimalNumberByMultiplyingBy:(id)by withBehavior:(id)behavior;	// 0x3161c309
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10;	// 0x3161c545
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10 withBehavior:(id)behavior;	// 0x3161c595
- (id)decimalNumberByRaisingToPower:(unsigned)power;	// 0x3161c471
- (id)decimalNumberByRaisingToPower:(unsigned)power withBehavior:(id)behavior;	// 0x3161c4c1
- (id)decimalNumberByRoundingAccordingToBehavior:(id)behavior;	// 0x3161c619
- (id)decimalNumberBySubstracting:(id)substracting;	// 0x3161c18d
- (id)decimalNumberBySubstracting:(id)substracting withBehavior:(id)behavior;	// 0x3161c1cd
- (id)decimalNumberBySubtracting:(id)subtracting;	// 0x3161c1dd
- (id)decimalNumberBySubtracting:(id)subtracting withBehavior:(id)behavior;	// 0x3161c22d
- (XXStruct_9isexA)decimalValue;	// 0x3161bbe1
- (id)description;	// 0x3161bbc5
- (id)descriptionWithLocale:(id)locale;	// 0x3161bbd9
- (double)doubleValue;	// 0x3161bed5
- (void)encodeWithCoder:(id)coder;	// 0x3161c7b9
- (float)floatValue;	// 0x3161cadd
- (void)getValue:(void *)value;	// 0x3161bfad
- (int)intValue;	// 0x3161ca15
- (BOOL)isEqual:(id)equal;	// 0x3161be81
- (long long)longLongValue;	// 0x3161caa5
- (long)longValue;	// 0x3161ca5d
- (const char *)objCType;	// 0x3161bec9
- (short)shortValue;	// 0x3161c9cd
- (unsigned char)unsignedCharValue;	// 0x3161c9a9
- (unsigned)unsignedIntValue;	// 0x3161ca39
- (unsigned long long)unsignedLongLongValue;	// 0x3161cac1
- (unsigned long)unsignedLongValue;	// 0x3161ca81
- (unsigned short)unsignedShortValue;	// 0x3161c9f1
@end
