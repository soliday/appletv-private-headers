/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTypesetLine;

__attribute__((visibility("hidden")))
@interface BRTextLineControl : BRControl {
@private
	BRTypesetLine *_line;	// 48 = 0x30
}
- (void)dealloc;	// 0x32a04ad1
- (void)drawInContext:(CGContextRef)context;	// 0x32a04b71
- (void)setLine:(id)line;	// 0x32a04b1d
@end

