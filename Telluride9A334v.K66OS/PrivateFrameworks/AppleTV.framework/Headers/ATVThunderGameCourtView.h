/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, NSMutableArray, BRAsyncImageControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderGameCourtView : BRControl {
@private
	NSDictionary *_data;	// 48 = 0x30
	BRAsyncImageControl *_court;	// 52 = 0x34
	BRControl *_courtContainer;	// 56 = 0x38
	BRImageControl *_courtGlass;	// 60 = 0x3c
	NSMutableArray *_homePlayerCards;	// 64 = 0x40
	NSMutableArray *_awayPlayerCards;	// 68 = 0x44
}
- (id)initWithDictionary:(id)dictionary;	// 0x33169b61
- (id)accessibilityLabel;	// 0x3316a699
- (void)dealloc;	// 0x3316a171
- (void)layoutSubcontrols;	// 0x3316a251
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3316a221
@end

