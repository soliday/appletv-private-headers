/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray, NSNumber, NSDictionary, NSString;

@interface MCWiFiPayload : MCPayload {
	NSString *_ssid;	// 40 = 0x28
	BOOL _hidden;	// 44 = 0x2c
	NSString *_encryptionType;	// 48 = 0x30
	BOOL _isWEP;	// 52 = 0x34
	BOOL _isWPA;	// 53 = 0x35
	BOOL _autoJoin;	// 54 = 0x36
	NSDictionary *_eapClientConfig;	// 56 = 0x38
	BOOL _passwordRequired;	// 60 = 0x3c
	BOOL _usernameRequired;	// 61 = 0x3d
	NSString *_password;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_certificateUUID;	// 72 = 0x48
	NSArray *_payloadCertificateAnchorUUID;	// 76 = 0x4c
	int _proxyType;	// 80 = 0x50
	NSString *_proxyServer;	// 84 = 0x54
	NSNumber *_proxyServerPort;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_proxyPACURLString;	// 96 = 0x60
	NSString *_credentialUUID;	// 100 = 0x64
	NSString *_proxyUsername;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BOOL autoJoin;	// G=0x30432605; @synthesize=_autoJoin
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x304325a5; @synthesize=_certificateUUID
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x30432525; S=0x30434359; @synthesize=_credentialUUID
@property(readonly, assign, nonatomic) NSDictionary *eapClientConfig;	// G=0x304325f5; @synthesize=_eapClientConfig
@property(readonly, assign, nonatomic) NSString *encryptionType;	// G=0x30432635; @synthesize=_encryptionType
@property(readonly, assign, nonatomic) BOOL isHidden;	// G=0x30432645; @synthesize=_hidden
@property(readonly, assign, nonatomic) BOOL isWEP;	// G=0x30432625; @synthesize=_isWEP
@property(readonly, assign, nonatomic) BOOL isWPA;	// G=0x30432615; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x304325b5; S=0x30434331; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL passwordRequired;	// G=0x304325c5; @synthesize=_passwordRequired
@property(readonly, assign, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x30432595; @synthesize=_payloadCertificateAnchorUUID
@property(readonly, assign, nonatomic) NSString *proxyPACURLString;	// G=0x30432535; @synthesize=_proxyPACURLString
@property(readonly, assign, nonatomic) NSString *proxyPassword;	// G=0x30432545; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyServer;	// G=0x30432575; @synthesize=_proxyServer
@property(readonly, assign, nonatomic) NSNumber *proxyServerPort;	// G=0x30432565; @synthesize=_proxyServerPort
@property(readonly, assign, nonatomic) int proxyType;	// G=0x30432585; @synthesize=_proxyType
@property(readonly, assign, nonatomic) NSString *proxyUsername;	// G=0x30432555; @synthesize=_proxyUsername
@property(readonly, assign, nonatomic) NSString *ssid;	// G=0x30432655; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x304325d5; S=0x30434309; @synthesize=_username
@property(readonly, assign, nonatomic) BOOL usernameRequired;	// G=0x304325e5; @synthesize=_usernameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x30434289
+ (id)typeStrings;	// 0x30432861
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30433265
- (BOOL)_configIsValid:(id)valid error:(id *)error;	// 0x30432889
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x30432729
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x30432665
- (BOOL)_isEAPSIMConfig:(id)config;	// 0x304327ed
// declared property getter: - (BOOL)autoJoin;	// 0x30432605
// declared property getter: - (id)certificateUUID;	// 0x304325a5
// declared property getter: - (id)credentialUUID;	// 0x30432525
- (void)dealloc;	// 0x304347d1
- (id)description;	// 0x30434381
// declared property getter: - (id)eapClientConfig;	// 0x304325f5
// declared property getter: - (id)encryptionType;	// 0x30432635
// declared property getter: - (BOOL)isHidden;	// 0x30432645
// declared property getter: - (BOOL)isWEP;	// 0x30432625
// declared property getter: - (BOOL)isWPA;	// 0x30432615
// declared property getter: - (id)password;	// 0x304325b5
// declared property getter: - (BOOL)passwordRequired;	// 0x304325c5
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x30432595
// declared property getter: - (id)proxyPACURLString;	// 0x30432535
// declared property getter: - (id)proxyPassword;	// 0x30432545
// declared property getter: - (id)proxyServer;	// 0x30432575
// declared property getter: - (id)proxyServerPort;	// 0x30432565
// declared property getter: - (int)proxyType;	// 0x30432585
// declared property getter: - (id)proxyUsername;	// 0x30432555
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x30434359
// declared property setter: - (void)setPassword:(id)password;	// 0x30434331
// declared property setter: - (void)setUsername:(id)username;	// 0x30434309
// declared property getter: - (id)ssid;	// 0x30432655
- (id)stubDictionary;	// 0x3043462d
- (id)subtitle1Description;	// 0x30432851
- (id)subtitle1Label;	// 0x3043461d
- (id)subtitle2Description;	// 0x304345b5
- (id)subtitle2Label;	// 0x3043460d
// declared property getter: - (id)username;	// 0x304325d5
// declared property getter: - (BOOL)usernameRequired;	// 0x304325e5
@end
