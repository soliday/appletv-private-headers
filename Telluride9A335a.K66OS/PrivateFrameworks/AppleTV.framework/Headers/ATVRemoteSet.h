/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVRCPatternMatcherDelegate.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray, NSString;

@interface ATVRemoteSet : NSObject <ATVRCPatternMatcherDelegate> {
@private
	NSArray *_remoteSet;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	BOOL _custom;	// 12 = 0xc
}
@property(assign) BOOL custom;	// G=0x340f69d9; S=0x340f69e9; converted property
@property(retain) NSString *name;	// G=0x340f6989; S=0x340f6999; converted property
- (id)init;	// 0x340f62ad
- (id)initWithDictionary:(id)dictionary;	// 0x340f6345
- (id)_initPatternMatcherArray;	// 0x340f6b69
- (void)_releasePatternMatchers;	// 0x340f6c79
- (void)_setupTargetEventForMatcher:(id)matcher index:(int)index;	// 0x340f6cdd
- (void)_setupTargetRemoteEvents;	// 0x340f6c31
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x340f6ab1
// converted property getter: - (BOOL)custom;	// 0x340f69d9
- (void)dealloc;	// 0x340f65b5
- (id)encodeToDictionary;	// 0x340f675d
- (int)findIdenticalButtonPattern:(id)pattern;	// 0x340f6b15
- (id)getPatternMatcher:(int)matcher;	// 0x340f66c5
- (id)getPatternSet:(int)set;	// 0x340f669d
- (BOOL)hasExtendedSet;	// 0x340f6905
- (BOOL)isEqual:(id)equal;	// 0x340f69f9
- (void)matcherButtonDown:(id)down;	// 0x340f66e5
- (void)matcherButtonRelease:(id)release;	// 0x340f6759
// converted property getter: - (id)name;	// 0x340f6989
- (int)processEvent:(id)event;	// 0x340f6615
- (void)resetMatchers;	// 0x340f6949
// converted property setter: - (void)setCustom:(BOOL)custom;	// 0x340f69e9
// converted property setter: - (void)setName:(id)name;	// 0x340f6999
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x340f6a5d
@end

