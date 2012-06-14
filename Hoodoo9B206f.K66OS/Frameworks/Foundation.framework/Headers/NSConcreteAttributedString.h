/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSAttributedString.h"

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {
@private
	NSString *string;	// 4 = 0x4
	NSRLEArray *attributes;	// 8 = 0x8
}
@property(readonly, retain) NSString *string;	// G=0x31d111f1; converted property
- (id)init;	// 0x31d0cd79
- (id)initWithAttributedString:(id)attributedString;	// 0x31d1096d
- (id)initWithString:(id)string;	// 0x31d0cd95
- (id)initWithString:(id)string attributes:(id)attributes;	// 0x31dcd419
- (id)_runArrayHoldingAttributes;	// 0x31d12a99
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31d10e39
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31d11141
- (void)dealloc;	// 0x31d14815
- (void)finalize;	// 0x31dcd4e9
- (unsigned)length;	// 0x31d10e05
// converted property getter: - (id)string;	// 0x31d111f1
@end

