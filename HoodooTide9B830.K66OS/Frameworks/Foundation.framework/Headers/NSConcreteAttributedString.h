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
@property(readonly, retain) NSString *string;	// G=0x315911f1; converted property
- (id)init;	// 0x3158cd79
- (id)initWithAttributedString:(id)attributedString;	// 0x3159096d
- (id)initWithString:(id)string;	// 0x3158cd95
- (id)initWithString:(id)string attributes:(id)attributes;	// 0x3164d419
- (id)_runArrayHoldingAttributes;	// 0x31592a99
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31590e39
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31591141
- (void)dealloc;	// 0x31594815
- (void)finalize;	// 0x3164d4e9
- (unsigned)length;	// 0x31590e05
// converted property getter: - (id)string;	// 0x315911f1
@end

