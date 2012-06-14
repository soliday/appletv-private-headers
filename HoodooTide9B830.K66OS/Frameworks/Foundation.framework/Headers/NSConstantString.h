/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSSimpleCString.h"


@interface NSConstantString : NSSimpleCString {
}
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x315ce5c9
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x315ce7a5
- (BOOL)_isDeallocating;	// 0x315ce9bd
- (BOOL)_tryRetain;	// 0x315ce9b9
- (id)autorelease;	// 0x315ce9b1
- (const char *)cString;	// 0x315cea05
- (unsigned)cStringLength;	// 0x315ce725
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x315ce759
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x315ce5e5
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x315ce94d
- (id)copy;	// 0x315ce79d
- (id)copyWithZone:(NSZone *)zone;	// 0x315ce7a1
- (void)dealloc;	// 0x315ce9cd
- (unsigned)fastestEncoding;	// 0x315ce739
- (void)finalize;	// 0x315ce9e9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x315ce669
- (unsigned)hash;	// 0x315ce98d
- (BOOL)isEqual:(id)equal;	// 0x315ce7c1
- (BOOL)isEqualToString:(id)string;	// 0x315ce895
- (unsigned)length;	// 0x315ce711
- (const char *)lossyCString;	// 0x315cea19
- (oneway void)release;	// 0x315ce9c9
- (id)retain;	// 0x315ce9b5
- (unsigned)retainCount;	// 0x315ce9c1
- (unsigned)smallestEncoding;	// 0x315ce749
@end

