/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill {
@private
	int mType;	// 8 = 0x8
	EDColorReference *mBackColorReference;	// 12 = 0xc
	EDColorReference *mForeColorReference;	// 16 = 0x10
}
@property(retain) id backColor;	// G=0x31237f59; S=0x31331b55; converted property
@property(retain) id backColorReference;	// G=0x31334bf1; S=0x311c4009; converted property
@property(retain) id foreColor;	// G=0x311eafdd; S=0x31331ae9; converted property
@property(retain) id foreColorReference;	// G=0x31334be1; S=0x311c3fc1; converted property
@property(assign) int type;	// G=0x311dfdc9; S=0x311c3fad; converted property
+ (id)patternFillWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x31334c01
+ (id)patternFillWithType:(int)type foreColor:(id)color resources:(id)resources;	// 0x31334c39
+ (id)patternFillWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x312875b1
+ (id)patternFillWithType:(int)type resources:(id)resources;	// 0x31334c69
- (id)initWithResources:(id)resources;	// 0x311c3ec5
- (id)initWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x312de4b9
- (id)initWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x312875fd
// converted property getter: - (id)backColor;	// 0x31237f59
// converted property getter: - (id)backColorReference;	// 0x31334bf1
- (id)copyWithZone:(NSZone *)zone;	// 0x31334cbd
- (void)dealloc;	// 0x311cb435
// converted property getter: - (id)foreColor;	// 0x311eafdd
// converted property getter: - (id)foreColorReference;	// 0x31334be1
- (unsigned)hash;	// 0x31334c91
- (bool)isEmpty;	// 0x31334bc9
- (BOOL)isEqual:(id)equal;	// 0x311c45b5
- (BOOL)isEqualToPatternFill:(id)patternFill;	// 0x311c4611
// converted property setter: - (void)setBackColor:(id)color;	// 0x31331b55
// converted property setter: - (void)setBackColorReference:(id)reference;	// 0x311c4009
// converted property setter: - (void)setForeColor:(id)color;	// 0x31331ae9
// converted property setter: - (void)setForeColorReference:(id)reference;	// 0x311c3fc1
// converted property setter: - (void)setType:(int)type;	// 0x311c3fad
// converted property getter: - (int)type;	// 0x311dfdc9
@end

