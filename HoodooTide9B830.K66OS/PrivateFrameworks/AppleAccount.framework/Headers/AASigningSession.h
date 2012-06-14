/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface AASigningSession : NSObject {
	NACContextOpaque_Ref _context;	// 4 = 0x4
	NSString *_certURL;	// 8 = 0x8
	NSString *_sessionURL;	// 12 = 0xc
	long _error;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) long error;	// G=0x349b53dd; @synthesize=_error
- (id)initWithCertURL:(id)certURL sessionURL:(id)url;	// 0x349b4e55
- (void)dealloc;	// 0x349b5369
// declared property getter: - (long)error;	// 0x349b53dd
- (void)establishSession;	// 0x349b4ec9
- (id)signatureForData:(id)data;	// 0x349b52a5
@end

