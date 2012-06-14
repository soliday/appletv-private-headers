/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
@private
	NSMutableAttributedString *mutableAttributedString;	// 4 = 0x4
}
- (id)initWithMutableAttributedString:(id)mutableAttributedString;	// 0x31dce13d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x31dce241
- (void)dealloc;	// 0x31dce191
- (void)finalize;	// 0x31dce1dd
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x31dce279
- (unsigned)length;	// 0x31dce209
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x31dce2bd
@end

