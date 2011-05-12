/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library


@interface MCKeychain : NSObject {
}
+ (CFDictionaryRef)_newQueryWithService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x32afc845
+ (BOOL)addCertificateToKeychain:(SecCertificate *)keychain;	// 0x32afc97d
+ (SecCertificate *)copyCertificateWithPersistentID:(id)persistentID;	// 0x32afd139
+ (SecIdentity *)copyIdentityWithPersistentID:(id)persistentID;	// 0x32afd105
+ (void *)copyItemWithPersistentID:(id)persistentID;	// 0x32afce15
+ (id)dataFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x32afceb9
+ (BOOL)itemExistsInKeychain:(void *)keychain;	// 0x32afcc15
+ (void)removeDataForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x32afd0b9
+ (void)removeItemWithPersistentID:(id)persistentID;	// 0x32afd03d
+ (void)removeStringForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x32afc741
+ (id)saveItem:(void *)item withLabel:(id)label group:(id)group;	// 0x32afcc99
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description access:(void *)access outError:(id *)error;	// 0x32afc9c1
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x32afc6ed
+ (BOOL)setString:(id)string forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x32afc775
+ (id)stringFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x32afc7d5
@end
