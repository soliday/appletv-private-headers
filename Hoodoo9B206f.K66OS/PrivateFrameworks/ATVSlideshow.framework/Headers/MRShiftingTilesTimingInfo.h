/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSIndexSet, NSArray;

@interface MRShiftingTilesTimingInfo : NSObject {
	BOOL fallLeft;	// 4 = 0x4
	int fallDirection;	// 8 = 0x8
	BOOL isTop;	// 12 = 0xc
	NSArray *layouts;	// 16 = 0x10
	int add;	// 20 = 0x14
	NSIndexSet *remove;	// 24 = 0x18
	int slideIndex;	// 28 = 0x1c
}
@property(retain, nonatomic) NSArray *layouts;	// G=0x30b417c1; S=0x30b417d1; @synthesize
@property(retain, nonatomic) NSIndexSet *remove;	// G=0x30b417f5; S=0x30b41805; @synthesize
- (void)dealloc;	// 0x30b416a1
- (id)description;	// 0x30b41719
// declared property getter: - (id)layouts;	// 0x30b417c1
// declared property getter: - (id)remove;	// 0x30b417f5
// declared property setter: - (void)setLayouts:(id)layouts;	// 0x30b417d1
// declared property setter: - (void)setRemove:(id)remove;	// 0x30b41805
@end

