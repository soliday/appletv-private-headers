/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {
@private
	NSArray *_payloads;	// 92 = 0x5c
	MCProfileServiceProfile *_OTAProfile;	// 96 = 0x60
}
@property(assign) MCProfileServiceProfile *OTAProfile;	// G=0x318ee179; S=0x318ee189; @synthesize=_OTAProfile
@property(readonly, assign) NSArray *payloads;	// G=0x318ee199; @synthesize=_payloads
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x318eed31
// declared property getter: - (id)OTAProfile;	// 0x318ee179
- (void)_addObjectsOfClass:(Class)aClass fromArray:(id)array toArray:(id)array3;	// 0x318ee1a9
- (void)_sortPayloads;	// 0x318ee37d
- (void)dealloc;	// 0x318ee861
- (id)description;	// 0x318eea85
- (id)earliestCertificateExpiryDate;	// 0x318ee715
- (id)installationWarnings;	// 0x318eec0d
- (BOOL)isManagedByProfileService;	// 0x318ee161
- (id)localizedPayloadSummaryByType;	// 0x318ee24d
- (id)payloadWithUUID:(id)uuid;	// 0x318ee639
// declared property getter: - (id)payloads;	// 0x318ee199
// declared property setter: - (void)setOTAProfile:(id)profile;	// 0x318ee189
- (id)stubDictionary;	// 0x318ee8c1
@end

