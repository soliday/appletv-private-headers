/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCSubCalAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSString *_accountPersistentUUID;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x30435031; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x30434fe1; S=0x30435165; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x30435021; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSString *password;	// G=0x30435001; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x30434ff1; @synthesize=_useSSL
@property(readonly, assign, nonatomic) NSString *username;	// G=0x30435011; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x304350dd
+ (id)typeStrings;	// 0x3043513d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30435441
// declared property getter: - (id)accountDescription;	// 0x30435031
// declared property getter: - (id)accountPersistentUUID;	// 0x30434fe1
- (void)dealloc;	// 0x30435041
- (id)description;	// 0x304352dd
// declared property getter: - (id)hostname;	// 0x30435021
// declared property getter: - (id)password;	// 0x30435001
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x30435165
- (id)stubDictionary;	// 0x304351f9
- (id)subtitle1Description;	// 0x304351a9
- (id)subtitle1Label;	// 0x304351b9
- (id)subtitle2Description;	// 0x30435189
- (id)subtitle2Label;	// 0x30435199
- (id)title;	// 0x304351c9
// declared property getter: - (BOOL)useSSL;	// 0x30434ff1
// declared property getter: - (id)username;	// 0x30435011
@end

