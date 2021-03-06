/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <NSString.h> // Unknown library
#import "ProofReader-Structs.h"


@interface PRPinyinString : NSString {
	NSString *_string;	// 4 = 0x4
	unsigned _syllableCount;	// 8 = 0x8
	unsigned _score;	// 12 = 0xc
	unsigned _rangeCount;	// 16 = 0x10
	NSRange *_ranges;	// 20 = 0x14
}
@property(readonly, assign) unsigned score;	// G=0x3430a035; converted property
@property(readonly, retain) NSString *string;	// G=0x3430a015; converted property
@property(readonly, assign) unsigned syllableCount;	// G=0x3430a025; converted property
+ (id)alternativesForInputString:(id)inputString;	// 0x3430a1e5
- (id)initWithString:(id)string syllableCount:(unsigned)count score:(unsigned)score rangeCount:(unsigned)count4 ranges:(NSRange *)ranges;	// 0x3430a2d5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3430a075
- (void)dealloc;	// 0x3430a511
- (id)description;	// 0x3430a0f5
- (unsigned)hash;	// 0x3430a09d
- (BOOL)isEqual:(id)equal;	// 0x3430a395
- (unsigned)length;	// 0x3430a055
- (NSRange)nonPinyinRangeAtIndex:(unsigned)index;	// 0x3430a16d
- (unsigned)numberOfNonPinyinRanges;	// 0x3430a045
// converted property getter: - (unsigned)score;	// 0x3430a035
// converted property getter: - (id)string;	// 0x3430a015
// converted property getter: - (unsigned)syllableCount;	// 0x3430a025
@end

