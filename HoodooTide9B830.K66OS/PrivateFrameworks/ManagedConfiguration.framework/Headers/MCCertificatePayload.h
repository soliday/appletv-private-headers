/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSData, NSString, NSDate;

@interface MCCertificatePayload : MCPayload {
@private
	NSData *_certificatePersistentID;	// 40 = 0x28
	NSString *_installedOnDeviceID;	// 44 = 0x2c
}
@property(retain) NSData *certificatePersistentID;	// G=0x33b15d05; S=0x33b15ce1; @synthesize=_certificatePersistentID
@property(readonly, assign) NSDate *expiry;	// G=0x33b15d5d; 
@property(copy) NSString *installedOnDeviceID;	// G=0x33b15d45; S=0x33b15d1d; @synthesize=_installedOnDeviceID
@property(readonly, assign) BOOL isIdentity;	// G=0x33b16251; 
@property(readonly, assign) BOOL isRoot;	// G=0x33b16275; 
@property(readonly, assign) BOOL isSigned;	// G=0x33b15c7d; 
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b16391
// declared property getter: - (id)certificatePersistentID;	// 0x33b15d05
- (SecCertificate *)copyCertificate;	// 0x33b162d9
- (SecIdentity *)copyIdentityFromKeychain;	// 0x33b162a1
- (void)dealloc;	// 0x33b15c81
- (id)description;	// 0x33b15da9
// declared property getter: - (id)expiry;	// 0x33b15d5d
// declared property getter: - (id)installedOnDeviceID;	// 0x33b15d45
// declared property getter: - (BOOL)isIdentity;	// 0x33b16251
// declared property getter: - (BOOL)isRoot;	// 0x33b16275
// declared property getter: - (BOOL)isSigned;	// 0x33b15c7d
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x33b15ce1
// declared property setter: - (void)setInstalledOnDeviceID:(id)anId;	// 0x33b15d1d
- (id)stubDictionary;	// 0x33b16311
- (id)subtitle1Description;	// 0x33b160d5
- (id)subtitle1Label;	// 0x33b1614d
- (id)subtitle2Description;	// 0x33b15f65
- (id)subtitle2Label;	// 0x33b16079
- (id)title;	// 0x33b161a9
@end

