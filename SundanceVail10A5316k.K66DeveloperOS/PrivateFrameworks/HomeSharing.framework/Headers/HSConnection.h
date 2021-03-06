/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSURL, HSFairPlayInfo, HSConnectionStream, HSConnectionConfiguration;
@protocol OS_dispatch_queue;

@interface HSConnection : NSObject {
@private
	HSConnectionConfiguration *_configuration;	// 4 = 0x4
	int _connectionState;	// 8 = 0x8
	HSConnectionStream *_connectionStream;	// 12 = 0xc
	HSConnectionStream *_concurrentConnectionStream;	// 16 = 0x10
	int _connectionType;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	CFReadStreamRef _readStream;	// 28 = 0x1c
	BOOL authenticationRequired;	// 32 = 0x20
	unsigned basePlaylistContainerID;	// 36 = 0x24
	unsigned databaseID;	// 40 = 0x28
	unsigned databaseRevision;	// 44 = 0x2c
	HSFairPlayInfo *fairPlayInfo;	// 48 = 0x30
	NSString *homeSharingGroupID;	// 52 = 0x34
	NSString *password;	// 56 = 0x38
	unsigned sessionID;	// 60 = 0x3c
	NSString *username;	// 64 = 0x40
}
@property(assign, getter=isAuthenticationRequired) BOOL authenticationRequired;	// G=0x308c5a31; S=0x308c5a49; @synthesize
@property(assign) unsigned basePlaylistContainerID;	// G=0x308c5a61; S=0x308c5a75; @synthesize
@property(readonly, assign) NSURL *baseURL;	// G=0x308c32cd; 
@property(assign) int connectionState;	// G=0x308c5a8d; S=0x308c5aa1; @synthesize=_connectionState
@property(readonly, assign) int connectionType;	// G=0x308c5ab9; @synthesize=_connectionType
@property(assign) unsigned databaseID;	// G=0x308c5acd; S=0x308c5ae1; @synthesize
@property(assign) unsigned databaseRevision;	// G=0x308c5af9; S=0x308c5b0d; @synthesize
@property(retain) HSFairPlayInfo *fairPlayInfo;	// G=0x308c5b25; S=0x308c5b39; @synthesize
@property(copy) NSString *homeSharingGroupID;	// G=0x308c5b49; S=0x308c5b5d; @synthesize
@property(copy) NSString *password;	// G=0x308c5b6d; S=0x308c5b81; @synthesize
@property(assign) unsigned sessionID;	// G=0x308c5b91; S=0x308c5ba5; @synthesize
@property(copy) NSString *username;	// G=0x308c5bbd; S=0x308c5bd1; @synthesize
- (id)initWithBaseURL:(id)baseURL;	// 0x308c3079
- (id)initWithBaseURL:(id)baseURL connectionType:(int)type;	// 0x308c308d
- (id)initWithConfiguration:(id)configuration connectionType:(int)type;	// 0x308c310d
- (void)_continueFPSetupNegotiationWithData:(id)data internalConnectionCompletionHandler:(id)handler;	// 0x308c3fe5
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;	// 0x308c4225
- (void)_notifyServerOfActivity;	// 0x308c4c05
- (void)_sendRequest:(id)request onConnectionStream:(id)stream withInternalResponseHandler:(id)internalResponseHandler;	// 0x308c4cad
// declared property getter: - (unsigned)basePlaylistContainerID;	// 0x308c5a61
// declared property getter: - (id)baseURL;	// 0x308c32cd
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)completionHandler;	// 0x308c3d19
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x308c3315
// declared property getter: - (int)connectionState;	// 0x308c5a8d
// declared property getter: - (int)connectionType;	// 0x308c5ab9
// declared property getter: - (unsigned)databaseID;	// 0x308c5acd
// declared property getter: - (unsigned)databaseRevision;	// 0x308c5af9
- (void)dealloc;	// 0x308c3205
- (void)disconnect;	// 0x308c38a9
// declared property getter: - (id)fairPlayInfo;	// 0x308c5b25
// declared property getter: - (id)homeSharingGroupID;	// 0x308c5b49
// declared property getter: - (BOOL)isAuthenticationRequired;	// 0x308c5a31
// declared property getter: - (id)password;	// 0x308c5b6d
- (void)sendConcurrentRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x308c3c05
- (void)sendRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x308c3af1
// declared property getter: - (unsigned)sessionID;	// 0x308c5b91
// declared property setter: - (void)setAuthenticationRequired:(BOOL)required;	// 0x308c5a49
// declared property setter: - (void)setBasePlaylistContainerID:(unsigned)anId;	// 0x308c5a75
// declared property setter: - (void)setConnectionState:(int)state;	// 0x308c5aa1
// declared property setter: - (void)setDatabaseID:(unsigned)anId;	// 0x308c5ae1
// declared property setter: - (void)setDatabaseRevision:(unsigned)revision;	// 0x308c5b0d
// declared property setter: - (void)setFairPlayInfo:(id)info;	// 0x308c5b39
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x308c5b5d
// declared property setter: - (void)setPassword:(id)password;	// 0x308c5b81
// declared property setter: - (void)setSessionID:(unsigned)anId;	// 0x308c5ba5
// declared property setter: - (void)setUsername:(id)username;	// 0x308c5bd1
// declared property getter: - (id)username;	// 0x308c5bbd
@end

