/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRViewController.h> // Unknown library

@class NSDictionary, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVOptionListController : BRViewController {
@private
	NSDictionary *_data;	// 64 = 0x40
	ATVMerchant *_merchant;	// 68 = 0x44
	BOOL eventHandled;	// 72 = 0x48
}
@property(readonly, assign) NSDictionary *data;	// G=0x306f7f79; @synthesize=_data
- (id)initWithDictionary:(id)dictionary;	// 0x306f812d
- (BOOL)brEventAction:(id)action;	// 0x306f7f89
- (void)controlWasActivated;	// 0x306f8019
- (void)controlWasDeactivated;	// 0x306f8075
// declared property getter: - (id)data;	// 0x306f7f79
- (void)dealloc;	// 0x306f80a9
- (void)wasPushed;	// 0x306f7fc9
@end

