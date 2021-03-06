/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString, NSArray;

@interface MCMDMPayload : MCPayload {
@private
	NSString *_identityUUID;	// 40 = 0x28
	NSData *_identityPersistentID;	// 44 = 0x2c
	BOOL _useDevelopmentAPNS;	// 48 = 0x30
	NSString *_topic;	// 52 = 0x34
	NSString *_serverURLString;	// 56 = 0x38
	NSString *_checkInURLString;	// 60 = 0x3c
	int _accessRights;	// 64 = 0x40
	BOOL _signMessage;	// 68 = 0x44
	BOOL _checkOutWhenRemoved;	// 69 = 0x45
}
@property(readonly, assign) int accessRights;	// G=0x348c1c11; @synthesize=_accessRights
@property(readonly, assign) NSString *checkInURLString;	// G=0x348c1c21; @synthesize=_checkInURLString
@property(readonly, assign) BOOL checkOutWhenRemoved;	// G=0x348c1bf1; @synthesize=_checkOutWhenRemoved
@property(retain) NSData *identityPersistentID;	// G=0x348c1fd1; S=0x348c1fad; @synthesize=_identityPersistentID
@property(readonly, assign) NSString *identityUUID;	// G=0x348c1c61; @synthesize=_identityUUID
@property(readonly, assign) NSArray *localizedAccessRightDescriptions;	// G=0x348c2251; 
@property(readonly, assign) NSString *serverURLString;	// G=0x348c1c41; @synthesize=_serverURLString
@property(readonly, assign) BOOL signMessage;	// G=0x348c1c01; @synthesize=_signMessage
@property(readonly, assign) NSString *topic;	// G=0x348c1c51; @synthesize=_topic
@property(readonly, assign) BOOL useDevelopmentAPNS;	// G=0x348c1c31; @synthesize=_useDevelopmentAPNS
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x348c1f9d
+ (id)typeStrings;	// 0x348c1c81
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348c287d
- (id)_invalidRightsError;	// 0x348c1ca9
- (id)_invalidTopicError;	// 0x348c1d19
- (id)_nonHTTPSURLErrorForField:(id)field;	// 0x348c1d89
// declared property getter: - (int)accessRights;	// 0x348c1c11
// declared property getter: - (id)checkInURLString;	// 0x348c1c21
// declared property getter: - (BOOL)checkOutWhenRemoved;	// 0x348c1bf1
- (void)dealloc;	// 0x348c2009
- (id)description;	// 0x348c2505
// declared property getter: - (id)identityPersistentID;	// 0x348c1fd1
// declared property getter: - (id)identityUUID;	// 0x348c1c61
- (id)installationWarnings;	// 0x348c20a5
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x348c2251
// declared property getter: - (id)serverURLString;	// 0x348c1c41
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x348c1fad
// declared property getter: - (BOOL)signMessage;	// 0x348c1c01
- (id)stubDictionary;	// 0x348c1de9
- (id)subtitle1Description;	// 0x348c1bd1
- (id)subtitle1Label;	// 0x348c1ff9
- (id)subtitle2Description;	// 0x348c1be1
- (id)subtitle2Label;	// 0x348c1fe9
- (id)title;	// 0x348c1c71
// declared property getter: - (id)topic;	// 0x348c1c51
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x348c1c31
@end

