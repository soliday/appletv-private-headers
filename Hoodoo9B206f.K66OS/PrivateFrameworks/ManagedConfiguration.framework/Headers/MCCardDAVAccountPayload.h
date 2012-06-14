/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x31904b9d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x31904b2d; S=0x31904d2d; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x31904b8d; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x31904b6d; S=0x31904d09; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x31904b3d; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x31904b5d; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x31904b4d; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x31904b7d; S=0x31904ce5; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x31904c5d
+ (id)typeStrings;	// 0x31904cbd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3190505d
// declared property getter: - (id)accountDescription;	// 0x31904b9d
// declared property getter: - (id)accountPersistentUUID;	// 0x31904b2d
- (void)dealloc;	// 0x31904bad
- (id)description;	// 0x31904ea5
// declared property getter: - (id)hostname;	// 0x31904b8d
// declared property getter: - (id)password;	// 0x31904b6d
// declared property getter: - (int)port;	// 0x31904b3d
// declared property getter: - (id)principalURL;	// 0x31904b5d
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x31904d2d
// declared property setter: - (void)setPassword:(id)password;	// 0x31904d09
// declared property setter: - (void)setUsername:(id)username;	// 0x31904ce5
- (id)stubDictionary;	// 0x31904dc1
- (id)subtitle1Description;	// 0x31904d71
- (id)subtitle1Label;	// 0x31904d81
- (id)subtitle2Description;	// 0x31904d51
- (id)subtitle2Label;	// 0x31904d61
- (id)title;	// 0x31904d91
// declared property getter: - (BOOL)useSSL;	// 0x31904b4d
// declared property getter: - (id)username;	// 0x31904b7d
@end

