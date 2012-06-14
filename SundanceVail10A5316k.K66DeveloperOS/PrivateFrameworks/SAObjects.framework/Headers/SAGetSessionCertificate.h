/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAGetSessionCertificate : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)getSessionCertificate;	// 0x32f51da9
+ (id)getSessionCertificateWithDictionary:(id)dictionary context:(id)context;	// 0x32f51ded
- (id)encodedClassName;	// 0x32f51d9d
- (id)groupIdentifier;	// 0x32f51d8d
@end
