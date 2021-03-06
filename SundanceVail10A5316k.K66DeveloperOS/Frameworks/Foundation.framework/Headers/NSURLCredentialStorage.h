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
+ (id)sharedCredentialStorage;	// 0x31aaeafd
- (id)init;	// 0x31aaeae5
- (id)_internalInit;	// 0x31aaeff1
- (id)allCredentials;	// 0x31aaed11
- (id)credentialsForProtectionSpace:(id)protectionSpace;	// 0x31aaeb69
- (void)dealloc;	// 0x31aaea99
- (id)defaultCredentialForProtectionSpace:(id)protectionSpace;	// 0x31aaef29
- (void)removeCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x31aaeee1
- (void)setCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x31aaee99
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x31aaefa9
@end

