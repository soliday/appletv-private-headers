/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject {
@private
	NSURLCredentialStorageInternal *_internal;	// 4 = 0x4
}
+ (id)sharedCredentialStorage;	// 0x31db27dd
- (id)init;	// 0x31db27c5
- (id)_internalInit;	// 0x31db2c8d
- (id)allCredentials;	// 0x31db29c9
- (id)credentialsForProtectionSpace:(id)protectionSpace;	// 0x31db2849
- (void)dealloc;	// 0x31db2779
- (id)defaultCredentialForProtectionSpace:(id)protectionSpace;	// 0x31db2bc5
- (void)removeCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x31db2b7d
- (void)setCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x31db2b35
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x31db2c45
@end

