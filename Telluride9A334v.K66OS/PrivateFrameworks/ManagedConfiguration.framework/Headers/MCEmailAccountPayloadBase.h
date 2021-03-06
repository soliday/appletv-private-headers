/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
@private
	BOOL _preventMove;	// 40 = 0x28
	BOOL _preventAppSheet;	// 41 = 0x29
	BOOL _SMIMEEnabled;	// 42 = 0x2a
	BOOL _SMIMEEncryptionEnabled;	// 43 = 0x2b
	NSString *_SMIMESigningIdentityUUID;	// 44 = 0x2c
	NSString *_SMIMEEncryptionIdentityUUID;	// 48 = 0x30
	NSData *_SMIMESigningIdentityPersistentID;	// 52 = 0x34
	NSData *_SMIMEEncryptionIdentityPersistentID;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) BOOL SMIMEEnabled;	// G=0x3475ebc1; @synthesize=_SMIMEEnabled
@property(readonly, assign, nonatomic) BOOL SMIMEEncryptionEnabled;	// G=0x3475ebb1; @synthesize=_SMIMEEncryptionEnabled
@property(retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;	// G=0x3475eb71; S=0x3475eca1; @synthesize=_SMIMEEncryptionIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMEEncryptionIdentityUUID;	// G=0x3475eb91; @synthesize=_SMIMEEncryptionIdentityUUID
@property(retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;	// G=0x3475eb81; S=0x3475ec79; @synthesize=_SMIMESigningIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMESigningIdentityUUID;	// G=0x3475eba1; @synthesize=_SMIMESigningIdentityUUID
@property(readonly, assign, nonatomic) BOOL preventAppSheet;	// G=0x3475ebd1; @synthesize=_preventAppSheet
@property(readonly, assign, nonatomic) BOOL preventMove;	// G=0x3475ebe1; @synthesize=_preventMove
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3475efe1
// declared property getter: - (BOOL)SMIMEEnabled;	// 0x3475ebc1
// declared property getter: - (BOOL)SMIMEEncryptionEnabled;	// 0x3475ebb1
// declared property getter: - (id)SMIMEEncryptionIdentityPersistentID;	// 0x3475eb71
// declared property getter: - (id)SMIMEEncryptionIdentityUUID;	// 0x3475eb91
// declared property getter: - (id)SMIMESigningIdentityPersistentID;	// 0x3475eb81
// declared property getter: - (id)SMIMESigningIdentityUUID;	// 0x3475eba1
- (void)dealloc;	// 0x3475ebf1
- (id)description;	// 0x3475ecc9
// declared property getter: - (BOOL)preventAppSheet;	// 0x3475ebd1
// declared property getter: - (BOOL)preventMove;	// 0x3475ebe1
// declared property setter: - (void)setSMIMEEncryptionIdentityPersistentID:(id)anId;	// 0x3475eca1
// declared property setter: - (void)setSMIMESigningIdentityPersistentID:(id)anId;	// 0x3475ec79
- (id)stubDictionary;	// 0x3475eea9
@end

