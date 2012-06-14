/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSScanner.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner {
@private
	NSString *scanString;	// 4 = 0x4
	NSCharacterSet *skipSet;	// 8 = 0x8
	NSCharacterSet *invertedSkipSet;	// 12 = 0xc
	id locale;	// 16 = 0x10
	unsigned scanLocation;	// 20 = 0x14
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	} flags;	// 24 = 0x18
}
@property(assign) BOOL caseSensitive;	// G=0x31d2de8d; S=0x31d868d9; converted property
@property(retain) id charactersToBeSkipped;	// G=0x31d2dd3d; S=0x31d86861; converted property
@property(retain) id locale;	// G=0x31d382f9; S=0x31d868f1; converted property
@property(assign) unsigned scanLocation;	// G=0x31d2dc21; S=0x31d2dea1; converted property
- (id)initWithString:(id)string;	// 0x31d2da55
- (id)_invertedSkipSet;	// 0x31d2dc31
// converted property getter: - (BOOL)caseSensitive;	// 0x31d2de8d
// converted property getter: - (id)charactersToBeSkipped;	// 0x31d2dd3d
- (void)dealloc;	// 0x31d2df2d
- (void)finalize;	// 0x31d86971
// converted property getter: - (id)locale;	// 0x31d382f9
- (BOOL)scanInt:(int *)int;	// 0x31d380e9
// converted property getter: - (unsigned)scanLocation;	// 0x31d2dc21
- (BOOL)scanLongLong:(long long *)aLong;	// 0x31d86935
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x31d868d9
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x31d86861
// converted property setter: - (void)setLocale:(id)locale;	// 0x31d868f1
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x31d2dea1
- (id)string;	// 0x31d2dc11
@end

