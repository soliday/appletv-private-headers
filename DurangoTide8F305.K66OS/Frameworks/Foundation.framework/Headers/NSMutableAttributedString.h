/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSAttributedString.h"


@interface NSMutableAttributedString : NSAttributedString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x327ff801
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x327ffb41
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x327ff9e9
- (void)addAttributesWeakly:(id)weakly range:(NSRange)range;	// 0x327feee5
- (void)appendAttributedString:(id)string;	// 0x328015e1
- (void)beginEditing;	// 0x327fe20d
- (void)deleteCharactersInRange:(NSRange)range;	// 0x327fe8ad
- (void)endEditing;	// 0x327fe211
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x328015bd
- (id)mutableString;	// 0x327fe86d
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x327fedf9
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x328014ed
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x327fe3a5
- (void)setAttributedString:(id)string;	// 0x32801635
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x327fe379
@end

