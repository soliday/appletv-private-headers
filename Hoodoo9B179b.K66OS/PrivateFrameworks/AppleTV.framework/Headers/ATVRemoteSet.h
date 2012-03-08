/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVRCPatternMatcherDelegate.h"
#import "AppleTV-Structs.h"

@class NSString, NSArray;

@interface ATVRemoteSet : NSObject <ATVRCPatternMatcherDelegate> {
@private
	NSArray *_remoteSet;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	BOOL _custom;	// 12 = 0xc
}
@property(assign) BOOL custom;	// G=0x301ad145; S=0x301ad155; converted property
@property(retain) NSString *name;	// G=0x301ad0f5; S=0x301ad105; converted property
- (id)init;	// 0x301aca59
- (id)initWithDictionary:(id)dictionary;	// 0x301acaf1
- (id)_initPatternMatcherArray;	// 0x301ad2d5
- (void)_releasePatternMatchers;	// 0x301ad3e5
- (void)_setupTargetEventForMatcher:(id)matcher index:(int)index;	// 0x301ad449
- (void)_setupTargetRemoteEvents;	// 0x301ad39d
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x301ad21d
// converted property getter: - (BOOL)custom;	// 0x301ad145
- (void)dealloc;	// 0x301acd21
- (id)encodeToDictionary;	// 0x301acec9
- (int)findIdenticalButtonPattern:(id)pattern;	// 0x301ad281
- (id)getPatternMatcher:(int)matcher;	// 0x301ace31
- (id)getPatternSet:(int)set;	// 0x301ace09
- (BOOL)hasExtendedSet;	// 0x301ad071
- (BOOL)isEqual:(id)equal;	// 0x301ad165
- (void)matcherButtonDown:(id)down;	// 0x301ace51
- (void)matcherButtonRelease:(id)release;	// 0x301acec5
// converted property getter: - (id)name;	// 0x301ad0f5
- (int)processEvent:(id)event;	// 0x301acd81
- (void)resetMatchers;	// 0x301ad0b5
// converted property setter: - (void)setCustom:(BOOL)custom;	// 0x301ad155
// converted property setter: - (void)setName:(id)name;	// 0x301ad105
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x301ad1c9
@end
