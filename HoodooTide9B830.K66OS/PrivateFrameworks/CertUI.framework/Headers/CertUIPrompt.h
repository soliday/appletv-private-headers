/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import "CertUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CertUIPrompt : NSObject {
	SecTrust *_trust;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_service;	// 12 = 0xc
	NSString *_connectionDisplayName;	// 16 = 0x10
	id _responseBlock;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x349e2c3d; S=0x349e3999; @synthesize=_connectionDisplayName
@property(retain, nonatomic) NSString *host;	// G=0x349e3931; S=0x349e3941; @synthesize=_host
@property(retain, nonatomic) NSString *service;	// G=0x349e3965; S=0x349e3975; @synthesize=_service
@property(assign) SecTrust *trust;	// G=0x349e2c2d; S=0x349e2bf1; converted property
+ (dispatch_queue_s *)promptQueue;	// 0x349e2c85
+ (id)stringForResponse:(int)response;	// 0x349e2ad9
- (id)_copyPropertiesFromTrust:(SecTrust *)trust;	// 0x349e2ef1
- (id)_digestFromTrust:(SecTrust *)trust;	// 0x349e3339
- (id)_expirationFromTrust:(SecTrust *)trust;	// 0x349e32a1
- (void)_informConsumerOfResponse:(int)response;	// 0x349e3795
- (id)_messagingCenter;	// 0x349e3565
- (id)_newUserInfoForDisplayName:(id)displayName hostname:(id)hostname trust:(SecTrust *)trust;	// 0x349e337d
- (id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;	// 0x349e30ed
- (id)_purposeFromTrustProperties:(id)trustProperties;	// 0x349e3211
- (int)_responseFromReplyDict:(id)replyDict;	// 0x349e3591
- (int)_sendRemoteMessage;	// 0x349e3601
- (id)_sendablePropertiesFromProperties:(id)properties;	// 0x349e2e0d
- (id)_sendablePropertiesFromTrust:(SecTrust *)trust;	// 0x349e2f7d
- (id)_sendablePropertyFromProperty:(id)property;	// 0x349e2cd5
- (id)_subtitleFromTrust:(SecTrust *)trust;	// 0x349e30b9
- (id)_titleFromTrust:(SecTrust *)trust;	// 0x349e3085
// declared property getter: - (id)connectionDisplayName;	// 0x349e2c3d
- (void)dealloc;	// 0x349e2af9
- (id)description;	// 0x349e2b89
// declared property getter: - (id)host;	// 0x349e3931
// declared property getter: - (id)service;	// 0x349e3965
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x349e3999
// declared property setter: - (void)setHost:(id)host;	// 0x349e3941
// declared property setter: - (void)setService:(id)service;	// 0x349e3975
// converted property setter: - (void)setTrust:(SecTrust *)trust;	// 0x349e2bf1
- (int)showAndWaitForResponse;	// 0x349e37c5
- (void)showPromptWithResponseBlock:(id)responseBlock;	// 0x349e36cd
// converted property getter: - (SecTrust *)trust;	// 0x349e2c2d
@end

