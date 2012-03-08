/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpression.h"


@interface NSDataDetector : NSRegularExpression {
	unsigned long long _types;	// 28 = 0x1c
}
@property(readonly, assign) unsigned long long checkingTypes;	// G=0x31105ebd; 
+ (id)dataDetectorWithTypes:(unsigned long long)types error:(id *)error;	// 0x311056c1
+ (void)initialize;	// 0x31105681
- (id)initWithCoder:(id)coder;	// 0x31105c1d
- (id)initWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x31105b51
- (id)initWithTypes:(unsigned long long)types error:(id *)error;	// 0x31105709
// declared property getter: - (unsigned long long)checkingTypes;	// 0x31105ebd
- (void)dealloc;	// 0x31105dbd
- (id)description;	// 0x31105e4d
- (void)encodeWithCoder:(id)coder;	// 0x31105b99
- (void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;	// 0x31105ee1
- (void)finalize;	// 0x31105e05
- (unsigned)hash;	// 0x31105d1d
- (BOOL)isEqual:(id)equal;	// 0x31105d35
- (unsigned)numberOfCaptureGroups;	// 0x31105edd
- (unsigned)options;	// 0x31105ed9
- (id)pattern;	// 0x31105ed5
@end
