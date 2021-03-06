/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSString, NSArray;

@interface MCWiFiPayload : MCPayload {
	NSString *_ssid;	// 40 = 0x28
	BOOL _hidden;	// 44 = 0x2c
	NSString *_encryptionType;	// 48 = 0x30
	BOOL _isWEP;	// 52 = 0x34
	BOOL _isWPA;	// 53 = 0x35
	NSDictionary *_eapClientConfig;	// 56 = 0x38
	BOOL _passwordRequired;	// 60 = 0x3c
	BOOL _usernameRequired;	// 61 = 0x3d
	NSString *_password;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_certificateUUID;	// 72 = 0x48
	NSArray *_payloadCertificateAnchorUUID;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x3006bad9; @synthesize=_certificateUUID
@property(readonly, assign, nonatomic) NSDictionary *eapClientConfig;	// G=0x3006bb29; @synthesize=_eapClientConfig
@property(readonly, assign, nonatomic) NSString *encryptionType;	// G=0x3006bb59; @synthesize=_encryptionType
@property(readonly, assign, nonatomic) BOOL isHidden;	// G=0x3006bb69; @synthesize=_hidden
@property(readonly, assign, nonatomic) BOOL isWEP;	// G=0x3006bb49; @synthesize=_isWEP
@property(readonly, assign, nonatomic) BOOL isWPA;	// G=0x3006bb39; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x3006bae9; S=0x3006cfa1; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL passwordRequired;	// G=0x3006baf9; @synthesize=_passwordRequired
@property(readonly, assign, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x3006bac9; @synthesize=_payloadCertificateAnchorUUID
@property(readonly, assign, nonatomic) NSString *ssid;	// G=0x3006bb79; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x3006bb09; S=0x3006cf79; @synthesize=_username
@property(readonly, assign, nonatomic) BOOL usernameRequired;	// G=0x3006bb19; @synthesize=_usernameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3006cfc9
+ (id)typeStrings;	// 0x3006bcf5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3006c71d
- (BOOL)_configIsValid:(id)valid error:(id *)error;	// 0x3006bd1d
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x3006bb9d
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x3006bc49
// declared property getter: - (id)certificateUUID;	// 0x3006bad9
- (void)dealloc;	// 0x3006c669
- (id)description;	// 0x3006ce65
// declared property getter: - (id)eapClientConfig;	// 0x3006bb29
// declared property getter: - (id)encryptionType;	// 0x3006bb59
// declared property getter: - (BOOL)isHidden;	// 0x3006bb69
// declared property getter: - (BOOL)isWEP;	// 0x3006bb49
// declared property getter: - (BOOL)isWPA;	// 0x3006bb39
// declared property getter: - (id)password;	// 0x3006bae9
// declared property getter: - (BOOL)passwordRequired;	// 0x3006baf9
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x3006bac9
// declared property setter: - (void)setPassword:(id)password;	// 0x3006cfa1
// declared property setter: - (void)setUsername:(id)username;	// 0x3006cf79
// declared property getter: - (id)ssid;	// 0x3006bb79
- (id)stubDictionary;	// 0x3006c5ed
- (id)subtitle1Description;	// 0x3006bb89
- (id)subtitle1Label;	// 0x3006ce51
- (id)subtitle2Description;	// 0x3006cded
- (id)subtitle2Label;	// 0x3006ce3d
// declared property getter: - (id)username;	// 0x3006bb09
// declared property getter: - (BOOL)usernameRequired;	// 0x3006bb19
@end

