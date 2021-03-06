/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSURL.h> // Unknown library

@class NSDictionary, ATVThunderAccount;

__attribute__((visibility("hidden")))
@interface ATVThunderMetricURL : NSURL {
@private
	ATVThunderAccount *_account;	// 20 = 0x14
	NSDictionary *_event;	// 24 = 0x18
	BOOL _liveEvent;	// 28 = 0x1c
}
+ (id)URLForLoginEvent;	// 0x3371ed85
+ (id)URLWithSportingEvent:(id)sportingEvent;	// 0x3371edb5
- (id)initForLoginEvent;	// 0x3371eeed
- (id)initWithSportingEvent:(id)sportingEvent;	// 0x3371efa9
- (id)_account;	// 0x3371dc35
- (id)_charset;	// 0x3371dc41
- (id)_company;	// 0x3371dc4d
- (id)_currency;	// 0x3371dc65
- (id)_deviceid;	// 0x3371dcdd
- (id)_devicetype;	// 0x3371ddf9
- (id)_events;	// 0x3371dc71
- (id)_gameid;	// 0x3371e02d
- (id)_location;	// 0x3371e0f9
- (id)_matchup;	// 0x3371dd09
- (id)_pagename;	// 0x3371dc59
- (id)_player;	// 0x3371de49
- (BOOL)_preInit;	// 0x3371ede9
- (id)_screensize;	// 0x3371f149
- (id)_server;	// 0x3371e075
- (id)_suffix;	// 0x3371f0d9
- (id)_tid;	// 0x3371e055
- (id)_time;	// 0x3371e245
- (id)_usertype;	// 0x3371ddb1
- (id)_videolink;	// 0x3371dcb9
- (id)_videotitle;	// 0x3371de85
- (id)_videotype;	// 0x3371dc95
- (void)dealloc;	// 0x3371ee91
- (id)loginBeacon;	// 0x3371e949
- (id)playbackBeacon;	// 0x3371e39d
@end

