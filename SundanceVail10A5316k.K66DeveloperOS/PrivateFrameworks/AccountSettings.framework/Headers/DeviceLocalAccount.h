/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "BasicAccount.h"
#import "AccountCreationProtocol.h"


@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}
+ (id)_identifier;	// 0x35d98719
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x35d98671
+ (id)basicAccountProperties;	// 0x35d98001
+ (BOOL)isTetheredSyncingDataclass:(id)dataclass;	// 0x35d98619
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)dataClass;	// 0x35d984f9
+ (id)localizedSyncSourceStringForDataClass:(id)dataClass forBeginningOfSentence:(BOOL)sentence;	// 0x35d981f5
+ (id)tetheredSourceForDataClass:(id)dataClass;	// 0x35d98669
+ (id)typeString;	// 0x35d980e9
- (id)displayName;	// 0x35d986e1
- (id)identifier;	// 0x35d986d5
- (id)syncStoreIdentifier;	// 0x35d98709
@end
