/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask {
	NSArray *_accessControlEntities;	// 132 = 0x84
}
@property(retain) NSArray *accessControlEntities;	// G=0x35dd4f99; S=0x35dd4fad; @synthesize=_accessControlEntities
@property(assign, nonatomic) id<CoreDAVACLTaskDelegate> delegate;	// @dynamic
- (id)initWithAccessControlEntities:(id)accessControlEntities atURL:(id)url;	// 0x35dd4b4d
- (id)initWithURL:(id)url;	// 0x35dd4b49
// declared property getter: - (id)accessControlEntities;	// 0x35dd4f99
- (void)dealloc;	// 0x35dd4bf9
- (id)description;	// 0x35dd4c45
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35dd4e79
- (id)httpMethod;	// 0x35dd4d19
- (id)requestBody;	// 0x35dd4d25
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x35dd4fad
@end

