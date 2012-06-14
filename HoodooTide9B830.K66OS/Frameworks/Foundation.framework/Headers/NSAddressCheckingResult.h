/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x31657315; converted property
@property(readonly, assign) NSRange range;	// G=0x31657139; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x31657325; 
- (id)initWithCoder:(id)coder;	// 0x31657009
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x31656efd
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x31656e69
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31657279
// converted property getter: - (id)components;	// 0x31657315
- (void)dealloc;	// 0x31656f21
- (void)encodeWithCoder:(id)coder;	// 0x31656f81
// converted property getter: - (NSRange)range;	// 0x31657139
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x31657155
- (unsigned long long)resultType;	// 0x31657131
// declared property getter: - (void *)underlyingResult;	// 0x31657325
@end

