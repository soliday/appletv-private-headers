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


@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)alphanumericCharacterSet;	// 0x32063671
+ (id)capitalizedLetterCharacterSet;	// 0x32063691
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x32063729
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3202a631
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x320636a9
+ (id)characterSetWithRange:(NSRange)range;	// 0x320636f9
+ (id)controlCharacterSet;	// 0x32028265
+ (id)decimalDigitCharacterSet;	// 0x32029b25
+ (id)decomposableCharacterSet;	// 0x32063681
+ (id)illegalCharacterSet;	// 0x32063699
+ (void)initialize;	// 0x32028211
+ (id)letterCharacterSet;	// 0x32063659
+ (id)lowercaseLetterCharacterSet;	// 0x32063661
+ (id)newlineCharacterSet;	// 0x3204c7ed
+ (id)nonBaseCharacterSet;	// 0x32063679
+ (id)punctuationCharacterSet;	// 0x32063689
+ (id)symbolCharacterSet;	// 0x320636a1
+ (id)uppercaseLetterCharacterSet;	// 0x32063669
+ (id)whitespaceAndNewlineCharacterSet;	// 0x3202826d
+ (id)whitespaceCharacterSet;	// 0x32029b1d
- (id)init;	// 0x32054991
- (id)initWithCoder:(id)coder;	// 0x32063b5d
- (unsigned long)_cfTypeID;	// 0x320635b1
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x320635b5
- (id)_retainedBitmapRepresentation;	// 0x32063dd9
- (id)bitmapRepresentation;	// 0x320639d1
- (BOOL)characterIsMember:(unsigned short)member;	// 0x32063899
- (id)copyWithZone:(NSZone *)zone;	// 0x3206377d
- (unsigned)count;	// 0x32063831
- (void)encodeWithCoder:(id)coder;	// 0x32063ac9
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x32063931
- (unsigned)hash;	// 0x32063755
- (id)invertedSet;	// 0x3206378d
- (BOOL)isEmpty;	// 0x320637d9
- (BOOL)isEqual:(id)equal;	// 0x32063971
- (BOOL)isMutable;	// 0x32063891
- (BOOL)isSupersetOfSet:(id)set;	// 0x320638f1
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x320638d9
- (void)makeImmutable;	// 0x32063895
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32063a89
@end

