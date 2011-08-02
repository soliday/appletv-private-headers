/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVGet : DAVRequest {
}
+ (id)getRequestWithSession:(id)session URI:(id)uri;	// 0x314c74ed
+ (id)getRequestWithSession:(id)session path:(id)path;	// 0x314c7525
+ (id)getRequestWithURL:(id)url;	// 0x314c755d
- (id)initGetWithSession:(id)session URI:(id)uri;	// 0x314c7591
- (id)initGetWithSession:(id)session path:(id)path;	// 0x314c762d
- (id)initGetWithURL:(id)url;	// 0x314c76c9
- (id)data;	// 0x314c74bd
@end
