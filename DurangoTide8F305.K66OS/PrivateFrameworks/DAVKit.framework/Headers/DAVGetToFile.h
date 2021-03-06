/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVGetToFile : DAVRequest {
}
+ (id)getRequestWithSession:(id)session URI:(id)uri toFileHandle:(id)fileHandle;	// 0x3008222d
+ (id)getRequestWithSession:(id)session path:(id)path toFileHandle:(id)fileHandle;	// 0x30082271
+ (id)getRequestWithURL:(id)url toFileHandle:(id)fileHandle;	// 0x300822b5
- (id)initGetWithSession:(id)session URI:(id)uri toFileHandle:(id)fileHandle;	// 0x300822ed
- (id)initGetWithSession:(id)session path:(id)path toFileHandle:(id)fileHandle;	// 0x30082389
- (id)initGetWithURL:(id)url toFileHandle:(id)fileHandle;	// 0x30082425
@end

