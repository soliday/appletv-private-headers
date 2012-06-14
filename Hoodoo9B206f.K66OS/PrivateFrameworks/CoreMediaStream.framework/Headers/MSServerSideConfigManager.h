/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSServerSideConfigProtocolDelegate.h"

@class NSString, MSServerSideConfigProtocol, NSDictionary, MSMediaStreamDaemon;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	NSDictionary *_config;	// 8 = 0x8
	MSMediaStreamDaemon *_daemon;	// 12 = 0xc
	NSString *_configPath;	// 16 = 0x10
	MSServerSideConfigProtocol *_protocol;	// 20 = 0x14
	int _state;	// 24 = 0x18
}
@property(retain, nonatomic) NSDictionary *config;	// G=0x304dcd15; S=0x304dcd91; 
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x304dd3f1; S=0x304dd401; @synthesize=_daemon
@property(readonly, assign) NSString *personID;	// G=0x304dd3e1; @synthesize=_personID
+ (void)abortAllActivities;	// 0x304dcaad
+ (id)configManagerForPersonID:(id)personID;	// 0x304dc9b9
+ (id)existingConfigManagerForPersonID:(id)personID;	// 0x304dca91
+ (void)forgetPersonID:(id)anId;	// 0x304dcb55
+ (int)intValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(int)value;	// 0x304dd16d
+ (long long)longLongValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(long long)value;	// 0x304dd2bd
+ (long)longValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(long)value;	// 0x304dd215
+ (id)objectForKey:(id)key forPersonID:(id)personID defaultValue:(id)value;	// 0x304dd371
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x304dcba5
- (void)abort;	// 0x304dcfc9
// declared property getter: - (id)config;	// 0x304dcd15
// declared property getter: - (id)daemon;	// 0x304dd3f1
- (void)dealloc;	// 0x304dcc79
// declared property getter: - (id)personID;	// 0x304dd3e1
- (void)refreshConfiguration;	// 0x304dcf45
- (void)serverSideConfigProtocol:(id)protocol didFinishWithConfiguration:(id)configuration error:(id)error;	// 0x304dd025
- (void)serverSideConfigProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x304dd0dd
// declared property setter: - (void)setConfig:(id)config;	// 0x304dcd91
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x304dd401
@end

