/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSCountedSet, NSString, NSMutableSet;
@protocol CPPowerAssertionManagerDelegate;

@interface CPPowerAssertionManager : NSObject {
@private
	NSString *_uuid;	// 4 = 0x4
	NSCountedSet *_contexts;	// 8 = 0x8
	NSMutableDictionary *_groupIdentifierToContexts;	// 12 = 0xc
	CFDictionaryRef _contextToGroupIdentifier;	// 16 = 0x10
	NSMutableSet *_heldAsideGroupIdentifiers;	// 20 = 0x14
	NSCountedSet *_heldAsideContexts;	// 24 = 0x18
	id<CPPowerAssertionManagerDelegate> _delegate;	// 28 = 0x1c
}
@property(assign) id<CPPowerAssertionManagerDelegate> delegate;	// G=0x31048369; S=0x31048379; @synthesize=_delegate
@property(readonly, assign) NSString *uuid;	// G=0x310496a9; @synthesize=_uuid
+ (id)sharedInstance;	// 0x31048501
- (id)init;	// 0x31049579
- (void)_releaseAssertions;	// 0x310485ed
- (void)_retainAssertions;	// 0x31048655
- (void)dealloc;	// 0x310494b5
// declared property getter: - (id)delegate;	// 0x31048369
- (id)description;	// 0x31048bc1
- (void)releasePowerAssertionWithContext:(id)context;	// 0x31048cd9
- (void)reretainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x310486bd
- (unsigned)retainCountForContext:(id)context;	// 0x3104839d
- (void)retainPowerAssertionWithContext:(id)context;	// 0x31048389
- (void)retainPowerAssertionWithContext:(id)context withGroupIdentifier:(id)groupIdentifier;	// 0x31048ff1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31048379
- (void)setUUIDPrefix:(id)prefix;	// 0x310492a9
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x31048939
// declared property getter: - (id)uuid;	// 0x310496a9
@end

