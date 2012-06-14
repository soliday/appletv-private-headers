/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVCopyOrMoveTask.h"

@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {
	NSString *_previousETag;	// 140 = 0x8c
}
@property(assign, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousETag;	// G=0x35dd0ead; S=0x35dd0ec1; @synthesize=_previousETag
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x35dd0e35
- (id)additionalHeaderValues;	// 0x35dd0d7d
- (void)dealloc;	// 0x35dd0c4d
- (id)description;	// 0x35dd0cad
- (id)httpMethod;	// 0x35dd0d71
// declared property getter: - (id)previousETag;	// 0x35dd0ead
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x35dd0ec1
@end

