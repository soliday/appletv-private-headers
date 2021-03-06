/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"


@interface NSSpellCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
}
@property(readonly, assign) NSRange range;	// G=0x324e242d; converted property
- (id)initWithCoder:(id)coder;	// 0x324e60ad
- (id)initWithRange:(NSRange)range;	// 0x324e3df1
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x324e54d1
- (void)encodeWithCoder:(id)coder;	// 0x324e2ea9
// converted property getter: - (NSRange)range;	// 0x324e242d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x324e5575
- (unsigned long long)resultType;	// 0x324e2425
@end

