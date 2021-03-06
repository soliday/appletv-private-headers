/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSString, NSNumber;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
@private
	NSString *_emailAccountDescription;	// 60 = 0x3c
	NSString *_emailAccountName;	// 64 = 0x40
	NSString *_emailAccountType;	// 68 = 0x44
	NSString *_emailAddress;	// 72 = 0x48
	NSString *_incomingMailServerAuthentication;	// 76 = 0x4c
	NSString *_incomingMailServerHostname;	// 80 = 0x50
	NSNumber *_incomingMailServerPortNumber;	// 84 = 0x54
	BOOL _incomingMailServerUseSSL;	// 88 = 0x58
	NSString *_incomingMailServerUsername;	// 92 = 0x5c
	NSString *_incomingMailServerIMAPPathPrefix;	// 96 = 0x60
	NSString *_incomingPassword;	// 100 = 0x64
	NSString *_outgoingPassword;	// 104 = 0x68
	BOOL _outgoingPasswordSameAsIncomingPassword;	// 108 = 0x6c
	NSString *_outgoingMailServerAuthentication;	// 112 = 0x70
	NSString *_outgoingMailServerHostname;	// 116 = 0x74
	NSNumber *_outgoingMailServerPortNumber;	// 120 = 0x78
	BOOL _outgoingMailServerUseSSL;	// 124 = 0x7c
	NSString *_outgoingMailServerUsername;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) NSString *emailAccountDescription;	// G=0x33079a01; @synthesize=_emailAccountDescription
@property(readonly, assign, nonatomic) NSString *emailAccountName;	// G=0x330799f1; @synthesize=_emailAccountName
@property(readonly, assign, nonatomic) NSString *emailAccountType;	// G=0x330799e1; @synthesize=_emailAccountType
@property(readonly, assign, nonatomic) NSString *emailAddress;	// G=0x330799d1; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSString *incomingMailServerAuthentication;	// G=0x330799c1; @synthesize=_incomingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *incomingMailServerHostname;	// G=0x330799b1; @synthesize=_incomingMailServerHostname
@property(readonly, assign, nonatomic) NSString *incomingMailServerIMAPPathPrefix;	// G=0x33079971; @synthesize=_incomingMailServerIMAPPathPrefix
@property(readonly, assign, nonatomic) NSNumber *incomingMailServerPortNumber;	// G=0x330799a1; @synthesize=_incomingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL incomingMailServerUseSSL;	// G=0x33079991; @synthesize=_incomingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *incomingMailServerUsername;	// G=0x33079981; @synthesize=_incomingMailServerUsername
@property(readonly, assign, nonatomic) NSString *incomingPassword;	// G=0x33079961; @synthesize=_incomingPassword
@property(readonly, assign, nonatomic) NSString *outgoingMailServerAuthentication;	// G=0x33079931; @synthesize=_outgoingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *outgoingMailServerHostname;	// G=0x33079921; @synthesize=_outgoingMailServerHostname
@property(readonly, assign, nonatomic) NSNumber *outgoingMailServerPortNumber;	// G=0x33079911; @synthesize=_outgoingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL outgoingMailServerUseSSL;	// G=0x33079901; @synthesize=_outgoingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *outgoingMailServerUsername;	// G=0x330798f1; @synthesize=_outgoingMailServerUsername
@property(readonly, assign, nonatomic) NSString *outgoingPassword;	// G=0x33079951; @synthesize=_outgoingPassword
@property(readonly, assign, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;	// G=0x33079941; @synthesize=_outgoingPasswordSameAsIncomingPassword
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33079bf5
+ (id)profileNameFromAccountTag:(id)accountTag;	// 0x33079b75
+ (id)typeStrings;	// 0x33079c55
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3307a151
- (void)dealloc;	// 0x33079a11
- (id)description;	// 0x33079d0d
// declared property getter: - (id)emailAccountDescription;	// 0x33079a01
// declared property getter: - (id)emailAccountName;	// 0x330799f1
// declared property getter: - (id)emailAccountType;	// 0x330799e1
// declared property getter: - (id)emailAddress;	// 0x330799d1
// declared property getter: - (id)incomingMailServerAuthentication;	// 0x330799c1
// declared property getter: - (id)incomingMailServerHostname;	// 0x330799b1
// declared property getter: - (id)incomingMailServerIMAPPathPrefix;	// 0x33079971
// declared property getter: - (id)incomingMailServerPortNumber;	// 0x330799a1
// declared property getter: - (BOOL)incomingMailServerUseSSL;	// 0x33079991
// declared property getter: - (id)incomingMailServerUsername;	// 0x33079981
// declared property getter: - (id)incomingPassword;	// 0x33079961
// declared property getter: - (id)outgoingMailServerAuthentication;	// 0x33079931
// declared property getter: - (id)outgoingMailServerHostname;	// 0x33079921
// declared property getter: - (id)outgoingMailServerPortNumber;	// 0x33079911
// declared property getter: - (BOOL)outgoingMailServerUseSSL;	// 0x33079901
// declared property getter: - (id)outgoingMailServerUsername;	// 0x330798f1
// declared property getter: - (id)outgoingPassword;	// 0x33079951
// declared property getter: - (BOOL)outgoingPasswordSameAsIncomingPassword;	// 0x33079941
- (id)stubDictionary;	// 0x3307a0b5
- (id)subtitle1Description;	// 0x33079c9d
- (id)subtitle1Label;	// 0x33079ced
- (id)subtitle2Description;	// 0x33079c7d
- (id)subtitle2Label;	// 0x33079c8d
- (id)title;	// 0x33079cfd
@end

