/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFString : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32760d19
- (const char *)UTF8String;	// 0x326f7d6d
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x32760d1d
- (const unsigned short *)_fastCharacterContents;	// 0x32738681
- (BOOL)_isCString;	// 0x32760db1
- (BOOL)_isDeallocating;	// 0x32760cc5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x3271a051
- (BOOL)_tryRetain;	// 0x32760cb1
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x32760eed
- (void)appendFormat:(id)format;	// 0x3273861d
- (void)appendString:(id)string;	// 0x326ed165
- (const char *)cString;	// 0x32760d49
- (unsigned)cStringLength;	// 0x326fb3f1
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x32711fa9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x326fff95
- (Class)classForCoder;	// 0x3272492d
- (id)copyWithZone:(NSZone *)zone;	// 0x326ecead
- (void)deleteCharactersInRange:(NSRange)range;	// 0x3272dd79
- (unsigned)fastestEncoding;	// 0x326fb1c1
- (void)finalize;	// 0x32760cd5
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x326ff6c9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x326e90a1
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x32737235
- (BOOL)hasPrefix:(id)prefix;	// 0x326ffab9
- (BOOL)hasSuffix:(id)suffix;	// 0x3271bdf5
- (unsigned)hash;	// 0x3270dc59
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x32738ff9
- (BOOL)isEqual:(id)equal;	// 0x326e6f4d
- (BOOL)isEqualToString:(id)string;	// 0x326e8fd5
- (BOOL)isNSString__;	// 0x326f7c39
- (unsigned)length;	// 0x326e909d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x326ed455
- (oneway void)release;	// 0x326e6c71
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3271400d
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x326ed6a1
- (id)retain;	// 0x326ef605
- (unsigned)retainCount;	// 0x32760cd1
- (void)setString:(id)string;	// 0x3271b389
- (unsigned)smallestEncoding;	// 0x32760da1
- (id)substringWithRange:(NSRange)range;	// 0x326ecef5
@end
