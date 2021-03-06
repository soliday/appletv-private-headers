/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class ATVFeedMerchant, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVFeedRootController : BRViewController {
@private
	ATVFeedMerchant *_merchant;	// 88 = 0x58
	NSTimer *_waitTimer;	// 92 = 0x5c
	NSString *_url;	// 96 = 0x60
}
@property(copy, nonatomic) NSString *url;	// G=0x3296a071; S=0x3296a081; @synthesize=_url
+ (id)controllerWithMerchant:(id)merchant;	// 0x32969601
- (id)initWithMerchant:(id)merchant;	// 0x3296964d
- (void)_readJavaScriptConfig:(id)config;	// 0x32969705
- (void)_showWaitTimer:(id)timer;	// 0x32969f6d
- (void)controlWasDeactivated;	// 0x32969ec5
- (void)dealloc;	// 0x329696a1
- (BOOL)isNetworkDependent;	// 0x32969701
// declared property setter: - (void)setUrl:(id)url;	// 0x3296a081
// declared property getter: - (id)url;	// 0x3296a071
- (void)wasBuried;	// 0x32969f19
- (void)wasPushed;	// 0x32969951
@end

