/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, BRMerchantInfo;

@interface BRMerchant : NSObject {
@private
	BRMerchantInfo *_info;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(readonly, retain) NSString *identifier;	// G=0x33b3ad1d; converted property
@property(retain) BRMerchantInfo *info;	// G=0x33b3accd; S=0x33b3acdd; @dynamic
+ (id)flagstaff;	// 0x339c1f65
+ (id)itms;	// 0x339c1ee5
+ (id)merchantForControl:(id)control;	// 0x33b3aa09
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x33b3aa1d
+ (id)merchantForObject:(id)object;	// 0x33b3a78d
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x33b3a7a1
+ (id)merchantWithClosestAffinityToURL:(id)url;	// 0x33b3aa61
+ (id)merchantWithIdentifier:(id)identifier;	// 0x33b3a761
+ (void)registerMerchant:(id)merchant withIdentifier:(id)identifier;	// 0x33b3a6c9
+ (id)registeredMerchants;	// 0x33b3a745
+ (id)sedona;	// 0x339c1f0d
+ (id)thunder;	// 0x339c1f39
- (id)initWithCoder:(id)coder;	// 0x33b3abf5
- (id)initWithIdentifier:(id)identifier;	// 0x33b3ab1d
- (void)_updateMerchantInfo:(id)info;	// 0x33b3aff5
- (id)accountType;	// 0x33b3ad2d
- (void)assignToControl:(id)control;	// 0x33b3ae71
- (BOOL)assignToObject:(id)object;	// 0x33b3ad31
- (Class)catalogAgent;	// 0x339c1f8d
- (id)copyWithZone:(NSZone *)zone;	// 0x33b3abf1
- (void)dealloc;	// 0x33b3abfd
- (id)description;	// 0x33b3ac8d
- (void)encodeWithCoder:(id)coder;	// 0x33b3abf9
- (id)evaluatePlist:(id)plist;	// 0x33b3afe9
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x33b3aea9
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x33b3aecd
- (BOOL)hasAffinityToURL:(id)url;	// 0x33b3aff1
// converted property getter: - (id)identifier;	// 0x33b3ad1d
// declared property getter: - (id)info;	// 0x33b3accd
- (id)localizedStringForKey:(id)key;	// 0x33b3afdd
- (id)merchantErrorForError:(id)error;	// 0x33b3afe5
- (id)playerDelegate;	// 0x33b3afed
- (oneway void)release;	// 0x33b3abe5
- (id)retain;	// 0x33b3abe1
- (unsigned)retainCount;	// 0x33b3abe9
// declared property setter: - (void)setInfo:(id)info;	// 0x33b3acdd
@end

