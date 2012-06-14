/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimationShapeTarget.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PDAnimationTextTarget : PDAnimationShapeTarget {
@private
	int mType;	// 8 = 0x8
	NSRange mRange;	// 12 = 0xc
}
@property(assign) NSRange range;	// G=0x312fabd9; S=0x312fabf5; converted property
@property(assign) int type;	// G=0x312fabb9; S=0x312fabc9; converted property
- (id)init;	// 0x312fb79d
- (unsigned)hash;	// 0x312fb8b1
- (BOOL)isEqual:(id)equal;	// 0x312fb7c9
// converted property getter: - (NSRange)range;	// 0x312fabd9
// converted property setter: - (void)setRange:(NSRange)range;	// 0x312fabf5
// converted property setter: - (void)setType:(int)type;	// 0x312fabc9
// converted property getter: - (int)type;	// 0x312fabb9
@end

