/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@class NSData;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPostTask : CoreDAVPostOrPutTask {
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(readonly, retain) NSData *responseBodyPayload;	// G=0x3317f4ad; 
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x3317f6fd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3317fb71
- (id)httpMethod;	// 0x3317f4a1
// declared property getter: - (id)responseBodyPayload;	// 0x3317f4ad
@end
