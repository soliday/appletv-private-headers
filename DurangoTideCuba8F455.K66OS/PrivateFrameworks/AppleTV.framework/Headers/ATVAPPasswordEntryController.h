/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRTextEntryController.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
@private
	BRAirportNetwork *_network;	// 136 = 0x88
	id<ATVAPPasswordEntryDelegate> _delegate;	// 140 = 0x8c
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x3068e551
- (void)dealloc;	// 0x3068e4f5
- (void)setInitialPassword:(id)password;	// 0x3068e499
- (void)textDidChange:(id)text;	// 0x3068e495
- (void)textDidEndEditing:(id)text;	// 0x3068e4ad
@end

