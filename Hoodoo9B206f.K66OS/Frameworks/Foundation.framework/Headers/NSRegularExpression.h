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

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {
	NSString *_pattern;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	void *_internal;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	int _checkout;	// 20 = 0x14
	int _reserved2;	// 24 = 0x18
}
@property(readonly, assign) unsigned numberOfCaptureGroups;	// G=0x31ded211; 
@property(readonly, assign) unsigned options;	// G=0x31ded201; 
@property(readonly, assign) NSString *pattern;	// G=0x31ded1c9; 
+ (id)escapedPatternForString:(id)string;	// 0x31ded23d
+ (id)escapedTemplateForString:(id)string;	// 0x31dee395
+ (void)initialize;	// 0x31d32775
+ (id)regularExpressionWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x31decd51
- (id)initWithCoder:(id)coder;	// 0x31dece79
- (id)initWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x31d327b5
- (id)copyWithZone:(NSZone *)zone;	// 0x31decd99
- (void)dealloc;	// 0x31ded0a1
- (id)description;	// 0x31ded151
- (void)encodeWithCoder:(id)coder;	// 0x31decda9
- (void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;	// 0x31ded355
- (void)finalize;	// 0x31ded109
- (id)firstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x31dedb81
- (unsigned)hash;	// 0x31decfa9
- (BOOL)isEqual:(id)equal;	// 0x31decfe9
- (id)matchesInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x31ded979
// declared property getter: - (unsigned)numberOfCaptureGroups;	// 0x31ded211
- (unsigned)numberOfMatchesInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x31deda41
// declared property getter: - (unsigned)options;	// 0x31ded201
// declared property getter: - (id)pattern;	// 0x31ded1c9
- (NSRange)rangeOfFirstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x31dedd0d
- (unsigned)replaceMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;	// 0x31dee125
- (id)replacementStringForResult:(id)result inString:(id)string offset:(int)offset template:(id)aTemplate;	// 0x31dee3a5
- (id)stringByReplacingMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;	// 0x31dede5d
@end

