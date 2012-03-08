/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDropShadowControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	BRDropShadowControl *_shadow;	// 52 = 0x34
}
@property(retain) id providers;	// G=0x302844a9; S=0x3028446d; converted property
- (id)init;	// 0x302841ed
- (void)dealloc;	// 0x302843cd
- (void)layoutSubcontrols;	// 0x302844e9
- (float)listHeightToMaximum:(float)maximum;	// 0x302844c9
// converted property getter: - (id)providers;	// 0x302844a9
- (void)setProvider:(id)provider;	// 0x3028442d
// converted property setter: - (void)setProviders:(id)providers;	// 0x3028446d
@end
