/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"


@interface ISCertificate : NSObject {
	SecTrust *_trust;	// 4 = 0x4
}
- (void)_invalidate;	// 0x3552fb45
- (BOOL)checkData:(id)data againstAppleSignature:(id)signature;	// 0x3552f7f5
- (BOOL)checkData:(id)data againstSignature:(id)signature;	// 0x3552f6e5
- (void)dealloc;	// 0x3552f6a5
- (BOOL)isValid;	// 0x3552f869
- (void)setCertificateData:(id)data;	// 0x3552f8f9
@end

