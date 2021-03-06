/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSNumber, NSLock, ClientIdentity;

__attribute__((visibility("hidden")))
@interface MicroPaymentQueueRequest : NSObject <NSCopying> {
@private
	ClientIdentity *_clientIdentity;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	BOOL _needsAuthentication;	// 12 = 0xc
	NSNumber *_rangeEndIdentifier;	// 16 = 0x10
	NSNumber *_rangeStartIdentifier;	// 20 = 0x14
	NSNumber *_userIdentifier;	// 24 = 0x18
}
@property(retain) ClientIdentity *clientIdentity;	// G=0x3336c249; S=0x3336c62d; 
@property(assign) BOOL needsAuthentication;	// G=0x3336c2b5; S=0x3336c509; 
@property(retain) NSNumber *rangeEndIdentifier;	// G=0x3336c555; S=0x3336c6b1; 
@property(retain) NSNumber *rangeStartIdentifier;	// G=0x3336c5c1; S=0x3336c735; 
@property(retain) NSNumber *userIdentifier;	// G=0x3336c83d; S=0x3336c7b9; 
- (id)init;	// 0x3336c029
- (id)_ntsClientApplication:(id *)application;	// 0x3336c999
- (id)_ntsQueryParameters:(id *)parameters;	// 0x3336ca9d
// declared property getter: - (id)clientIdentity;	// 0x3336c249
- (id)copyWithZone:(NSZone *)zone;	// 0x3336c129
- (void)dealloc;	// 0x3336c08d
- (id)description;	// 0x3336c8a9
// declared property getter: - (BOOL)needsAuthentication;	// 0x3336c2b5
- (id)newStoreURLOperation:(id *)operation;	// 0x3336c301
// declared property getter: - (id)rangeEndIdentifier;	// 0x3336c555
// declared property getter: - (id)rangeStartIdentifier;	// 0x3336c5c1
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x3336c62d
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x3336c509
// declared property setter: - (void)setRangeEndIdentifier:(id)identifier;	// 0x3336c6b1
// declared property setter: - (void)setRangeStartIdentifier:(id)identifier;	// 0x3336c735
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x3336c7b9
// declared property getter: - (id)userIdentifier;	// 0x3336c83d
@end

