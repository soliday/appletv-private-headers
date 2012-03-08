/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData;

@interface MCChaperonePayload : MCPayload {
@private
	NSData *_pairingCertificateData;	// 40 = 0x28
	BOOL _nonChaperonePairingAllowed;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL nonChaperonePairingAllowed;	// G=0x3647f2d5; @synthesize=_nonChaperonePairingAllowed
@property(readonly, assign, nonatomic) NSData *pairingCertificateData;	// G=0x3647f2e5; @synthesize=_pairingCertificateData
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3647f341
+ (id)typeStrings;	// 0x3647f3a1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3647f59d
- (void)dealloc;	// 0x3647f2f5
- (id)description;	// 0x3647f3d1
// declared property getter: - (BOOL)nonChaperonePairingAllowed;	// 0x3647f2d5
// declared property getter: - (id)pairingCertificateData;	// 0x3647f2e5
- (id)stubDictionary;	// 0x3647f4f1
- (id)subtitle1Description;	// 0x3647f4d1
- (id)subtitle1Label;	// 0x3647f4e1
- (id)subtitle2Description;	// 0x3647f491
- (id)subtitle2Label;	// 0x3647f4c1
@end
