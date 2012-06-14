/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGUserProfile : PBCodable {
	NSString *_userName;	// 4 = 0x4
	NSString *_authToken;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *authToken;	// G=0x31fb922d; S=0x31fb923d; @synthesize=_authToken
@property(readonly, assign, nonatomic) BOOL hasAuthToken;	// G=0x31fb8fa5; 
@property(readonly, assign, nonatomic) BOOL hasUserName;	// G=0x31fb8f8d; 
@property(retain, nonatomic) NSString *userName;	// G=0x31fb91f9; S=0x31fb9209; @synthesize=_userName
// declared property getter: - (id)authToken;	// 0x31fb922d
- (void)dealloc;	// 0x31fb8f35
- (id)description;	// 0x31fb8fbd
- (id)dictionaryRepresentation;	// 0x31fb902d
// declared property getter: - (BOOL)hasAuthToken;	// 0x31fb8fa5
// declared property getter: - (BOOL)hasUserName;	// 0x31fb8f8d
- (BOOL)readFrom:(id)from;	// 0x31fb90ad
// declared property setter: - (void)setAuthToken:(id)token;	// 0x31fb923d
// declared property setter: - (void)setUserName:(id)name;	// 0x31fb9209
// declared property getter: - (id)userName;	// 0x31fb91f9
- (void)writeTo:(id)to;	// 0x31fb91a1
@end

