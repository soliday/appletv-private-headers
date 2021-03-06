/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DAKeychain : NSObject {
}
+ (id)sharedKeychain;	// 0x3258b9c5
- (CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)persistentUUID accessibility:(int)accessibility;	// 0x3258bb2d
- (CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)persistentUUID;	// 0x3258baa9
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)secAccessibility;	// 0x3258ba45
- (void)_removePersistentCredentialsForAccount:(id)account;	// 0x3258be51
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)dakeychainAccessibility;	// 0x3258ba0d
- (id)guessPasswordForURL:(id)url;	// 0x3258d919
- (id)loadKeychainInformationsForURL:(id)url;	// 0x3258cfe9
- (id)passwordForAccountWithPersistentUUID:(id)persistentUUID expectedAccessibility:(int)accessibility shouldSetAccessibility:(BOOL)accessibility3 passwordExpected:(BOOL)expected;	// 0x3258bb81
- (void)removeKeychainInformationsForURL:(id)url;	// 0x3258d4ad
- (BOOL)removePasswordForAccount:(id)account withPersistentUUID:(id)persistentUUID;	// 0x3258c2b1
- (BOOL)saveKeychainInformationsForURL:(id)url andPassword:(id)password withAccessibility:(int)accessibility;	// 0x3258c9a5
- (BOOL)setPassword:(id)password forAccount:(id)account withPersistentUUID:(id)persistentUUID withAccessibility:(int)accessibility;	// 0x3258c0f5
@end

