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
@property(assign) unsigned long long quota;	// G=0x347f4389; S=0x347f43a9; converted property
- (id)initWithURL:(id)url;	// 0x347f4185
- (SecurityOrigin *)_core;	// 0x347f3b99
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x347999b1
- (id)applicationCacheQuotaManager;	// 0x347f3bb9
- (id)databaseIdentifier;	// 0x347f3e21
- (id)databaseQuotaManager;	// 0x347f3c05
- (void)dealloc;	// 0x347999fd
- (id)domain;	// 0x347f3ba9
- (void)finalize;	// 0x347f3c51
- (id)host;	// 0x347f3f2d
- (BOOL)isEqual:(id)equal;	// 0x347f3ca9
- (unsigned short)port;	// 0x347f3b85
- (id)protocol;	// 0x347f4059
// converted property getter: - (unsigned long long)quota;	// 0x347f4389
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x347f43a9
- (id)toString;	// 0x347f3d15
- (unsigned long long)usage;	// 0x347f4369
@end

