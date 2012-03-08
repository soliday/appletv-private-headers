/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVRCButtonPatternSet : NSObject {
@private
	NSArray *_commandPattern;	// 4 = 0x4
	NSArray *_repeatPattern;	// 8 = 0x8
	double _maxRepeatInterval;	// 12 = 0xc
}
@property(retain) NSArray *commandPattern;	// G=0x32f85455; S=0x32f853d5; converted property
@property(assign) double maxRepeatInterval;	// G=0x32f85489; S=0x32f85475; converted property
@property(retain) NSArray *repeatPattern;	// G=0x32f85465; S=0x32f85415; converted property
- (id)initWithDictionary:(id)dictionary;	// 0x32f85261
- (id)_decodePatternFromDictionary:(id)dictionary;	// 0x32f85a2d
- (id)_encodePatternToDictionary:(id)dictionary;	// 0x32f858cd
- (void)clear;	// 0x32f85509
// converted property getter: - (id)commandPattern;	// 0x32f85455
- (void)dealloc;	// 0x32f85375
- (id)description;	// 0x32f85641
- (id)encodeToDictionary;	// 0x32f85559
- (BOOL)isEqual:(id)equal;	// 0x32f8579d
- (BOOL)isOneShot;	// 0x32f854a1
- (BOOL)isValid;	// 0x32f854f1
// converted property getter: - (double)maxRepeatInterval;	// 0x32f85489
// converted property getter: - (id)repeatPattern;	// 0x32f85465
// converted property setter: - (void)setCommandPattern:(id)pattern;	// 0x32f853d5
// converted property setter: - (void)setMaxRepeatInterval:(double)interval;	// 0x32f85475
// converted property setter: - (void)setRepeatPattern:(id)pattern;	// 0x32f85415
@end
