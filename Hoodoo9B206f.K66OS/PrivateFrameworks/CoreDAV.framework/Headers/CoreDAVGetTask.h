/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 132 = 0x84
	BOOL _forceNoCache;	// 136 = 0x88
}
@property(retain) id appSpecificDataItemResult;	// G=0x33a0034d; S=0x33a00361; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign) BOOL forceNoCache;	// G=0x33a00385; S=0x33a00395; @synthesize=_forceNoCache
// declared property getter: - (id)appSpecificDataItemResult;	// 0x33a0034d
- (unsigned)cachePolicy;	// 0x33a00175
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33a0019d
- (void)dealloc;	// 0x339fffd1
- (id)description;	// 0x33a0001d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a001d1
// declared property getter: - (BOOL)forceNoCache;	// 0x33a00385
- (id)httpMethod;	// 0x33a00169
- (id)requestBody;	// 0x33a00199
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x33a00361
// declared property setter: - (void)setForceNoCache:(BOOL)cache;	// 0x33a00395
@end

