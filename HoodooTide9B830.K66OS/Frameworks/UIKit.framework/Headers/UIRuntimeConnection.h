/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding> {
@private
	id source;	// 4 = 0x4
	id destination;	// 8 = 0x8
	NSString *label;	// 12 = 0xc
}
@property(retain) id destination;	// G=0x302919b1; S=0x302919c1; converted property
@property(retain) NSString *label;	// G=0x30291a05; S=0x30291a15; converted property
@property(retain) id source;	// G=0x3029195d; S=0x3029196d; converted property
- (id)initWithCoder:(id)coder;	// 0x302917a1
- (void)connect;	// 0x30291a59
- (void)connectForSimulator;	// 0x30291a5d
- (void)dealloc;	// 0x302918e9
// converted property getter: - (id)destination;	// 0x302919b1
- (void)encodeWithCoder:(id)coder;	// 0x30291855
// converted property getter: - (id)label;	// 0x30291a05
// converted property setter: - (void)setDestination:(id)destination;	// 0x302919c1
// converted property setter: - (void)setLabel:(id)label;	// 0x30291a15
// converted property setter: - (void)setSource:(id)source;	// 0x3029196d
// converted property getter: - (id)source;	// 0x3029195d
@end

