/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
@private
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x33a17389; S=0x33a173a9; converted property
- (id)initWithURL:(id)url;	// 0x33a17185
- (SecurityOrigin *)_core;	// 0x33a16b99
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x339bc9b1
- (id)applicationCacheQuotaManager;	// 0x33a16bb9
- (id)databaseIdentifier;	// 0x33a16e21
- (id)databaseQuotaManager;	// 0x33a16c05
- (void)dealloc;	// 0x339bc9fd
- (id)domain;	// 0x33a16ba9
- (void)finalize;	// 0x33a16c51
- (id)host;	// 0x33a16f2d
- (BOOL)isEqual:(id)equal;	// 0x33a16ca9
- (unsigned short)port;	// 0x33a16b85
- (id)protocol;	// 0x33a17059
// converted property getter: - (unsigned long long)quota;	// 0x33a17389
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x33a173a9
- (id)toString;	// 0x33a16d15
- (unsigned long long)usage;	// 0x33a17369
@end

