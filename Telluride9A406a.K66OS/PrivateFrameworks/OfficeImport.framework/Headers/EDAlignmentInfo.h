/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
@private
	int mHorizontalAlignment;	// 4 = 0x4
	int mVerticalAlignment;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	int mTextRotation;	// 16 = 0x10
	bool mTextWrapped;	// 20 = 0x14
	bool mHorizontalAlignOverridden;	// 21 = 0x15
	bool mVerticalAlignOverridden;	// 22 = 0x16
	bool mIndentOverridden;	// 23 = 0x17
	bool mTextWrappedOveridden;	// 24 = 0x18
	bool mDoNotModify;	// 25 = 0x19
}
@property(assign) int horizontalAlignment;	// G=0x32919191; S=0x328fc395; converted property
@property(assign) int indent;	// G=0x329191a1; S=0x328fc41d; converted property
@property(assign) int textRotation;	// G=0x32919b91; S=0x328fc485; converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// G=0x329191b1; S=0x328fc451; converted property
@property(assign) int verticalAlignment;	// G=0x32919131; S=0x328fc3e9; converted property
+ (id)alignmentInfo;	// 0x328fc259
- (id)init;	// 0x328fc2a1
- (id)copyWithZone:(NSZone *)zone;	// 0x32a69e49
- (unsigned)hash;	// 0x32a69e1d
// converted property getter: - (int)horizontalAlignment;	// 0x32919191
// converted property getter: - (int)indent;	// 0x329191a1
- (BOOL)isEqual:(id)equal;	// 0x328fd3a5
- (BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;	// 0x328fd401
- (bool)isHorizontalAlignOverridden;	// 0x32919181
- (bool)isIndentOverridden;	// 0x3292402d
// converted property getter: - (bool)isTextWrapped;	// 0x329191b1
- (bool)isTextWrappedOverridden;	// 0x32919cc1
- (bool)isVerticalAlignOverridden;	// 0x32919121
- (void)setDoNotModify:(bool)modify;	// 0x328fc521
// converted property setter: - (void)setHorizontalAlignment:(int)alignment;	// 0x328fc395
// converted property setter: - (void)setIndent:(int)indent;	// 0x328fc41d
// converted property setter: - (void)setTextRotation:(int)rotation;	// 0x328fc485
// converted property setter: - (void)setTextWrapped:(bool)wrapped;	// 0x328fc451
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x328fc3e9
// converted property getter: - (int)textRotation;	// 0x32919b91
// converted property getter: - (int)verticalAlignment;	// 0x32919131
@end

