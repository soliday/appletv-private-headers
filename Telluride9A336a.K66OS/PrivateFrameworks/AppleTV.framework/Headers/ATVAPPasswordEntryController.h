/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
@private
	BRAirportNetwork *_network;	// 160 = 0xa0
	id<ATVAPPasswordEntryDelegate> _delegate;	// 164 = 0xa4
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x33993dcd
- (void)dealloc;	// 0x33994019
- (void)setInitialPassword:(id)password;	// 0x339940cd
- (void)textDidChange:(id)text;	// 0x33994079
- (void)textDidEndEditing:(id)text;	// 0x3399407d
@end

