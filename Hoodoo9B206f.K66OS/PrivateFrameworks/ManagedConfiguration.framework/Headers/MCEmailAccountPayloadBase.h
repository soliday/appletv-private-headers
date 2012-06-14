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
@property(readonly, assign, nonatomic) BOOL SMIMEEnabled;	// G=0x319132d5; @synthesize=_SMIMEEnabled
@property(readonly, assign, nonatomic) BOOL SMIMEEncryptionEnabled;	// G=0x319132c5; @synthesize=_SMIMEEncryptionEnabled
@property(retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;	// G=0x31913285; S=0x319133b5; @synthesize=_SMIMEEncryptionIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMEEncryptionIdentityUUID;	// G=0x319132a5; @synthesize=_SMIMEEncryptionIdentityUUID
@property(retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;	// G=0x31913295; S=0x3191338d; @synthesize=_SMIMESigningIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMESigningIdentityUUID;	// G=0x319132b5; @synthesize=_SMIMESigningIdentityUUID
@property(readonly, assign, nonatomic) BOOL preventAppSheet;	// G=0x319132e5; @synthesize=_preventAppSheet
@property(readonly, assign, nonatomic) BOOL preventMove;	// G=0x319132f5; @synthesize=_preventMove
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x319136f5
// declared property getter: - (BOOL)SMIMEEnabled;	// 0x319132d5
// declared property getter: - (BOOL)SMIMEEncryptionEnabled;	// 0x319132c5
// declared property getter: - (id)SMIMEEncryptionIdentityPersistentID;	// 0x31913285
// declared property getter: - (id)SMIMEEncryptionIdentityUUID;	// 0x319132a5
// declared property getter: - (id)SMIMESigningIdentityPersistentID;	// 0x31913295
// declared property getter: - (id)SMIMESigningIdentityUUID;	// 0x319132b5
- (void)dealloc;	// 0x31913305
- (id)description;	// 0x319133dd
// declared property getter: - (BOOL)preventAppSheet;	// 0x319132e5
// declared property getter: - (BOOL)preventMove;	// 0x319132f5
// declared property setter: - (void)setSMIMEEncryptionIdentityPersistentID:(id)anId;	// 0x319133b5
// declared property setter: - (void)setSMIMESigningIdentityPersistentID:(id)anId;	// 0x3191338d
- (id)stubDictionary;	// 0x319135bd
@end

