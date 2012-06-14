/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import "BRTextEntryController.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
@private
	BRAirportNetwork *_network;	// 168 = 0xa8
	id<ATVAPPasswordEntryDelegate> _delegate;	// 172 = 0xac
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x365a4b6d
- (void)dealloc;	// 0x365a4db9
- (void)setInitialPassword:(id)password;	// 0x365a4e6d
- (void)textDidChange:(id)text;	// 0x365a4e19
- (void)textDidEndEditing:(id)text;	// 0x365a4e1d
@end

