/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

@interface DAResolvedRecipient : NSObject {
	int _status;	// 4 = 0x4
	NSMutableDictionary *_resolvedEmailToX509Certs;	// 8 = 0x8
}
@property(readonly, assign) NSDictionary *resolvedEmailToX509Certs;	// G=0x31eb7619; @synthesize=_resolvedEmailToX509Certs
@property(assign) int status;	// G=0x31eb75f9; S=0x31eb7609; @synthesize=_status
- (void)addCert:(id)cert forEmailAddress:(id)emailAddress;	// 0x31eb7505
- (void)dealloc;	// 0x31eb74b9
- (id)description;	// 0x31eb7281
// declared property getter: - (id)resolvedEmailToX509Certs;	// 0x31eb7619
// declared property setter: - (void)setStatus:(int)status;	// 0x31eb7609
// declared property getter: - (int)status;	// 0x31eb75f9
@end

