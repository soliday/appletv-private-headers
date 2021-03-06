/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
@private
	NSString *_urlString;	// 40 = 0x28
}
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x348d74c5
+ (id)typeStrings;	// 0x348d7369
- (id)initWithURLString:(id)urlstring profile:(id)profile;	// 0x348d7391
- (void)dealloc;	// 0x348d75c5
- (id)description;	// 0x348d7545
- (id)subtitle1Description;	// 0x348d7359
- (id)subtitle1Label;	// 0x348d7525
- (id)title;	// 0x348d7535
@end

