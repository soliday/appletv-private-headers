/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 104 = 0x68
}
@property(retain) id appSpecificDataItemResult;	// G=0x317b595d; S=0x317b59a1; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property getter: - (id)appSpecificDataItemResult;	// 0x317b595d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x317b54d5
- (void)dealloc;	// 0x317b57a5
- (id)description;	// 0x317b5685
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317b57e1
- (id)httpMethod;	// 0x317b547d
- (id)requestBody;	// 0x317b5489
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x317b59a1
@end

