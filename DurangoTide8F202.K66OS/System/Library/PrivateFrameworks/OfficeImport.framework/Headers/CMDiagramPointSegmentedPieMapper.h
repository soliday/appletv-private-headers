/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramPointMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {
@private
	float mStartAngle;	// 24 = 0x18
	float mStopAngle;	// 28 = 0x1c
	BOOL mDrawArrows;	// 32 = 0x20
	unsigned mSegmentIndex;	// 36 = 0x24
	unsigned mSegmentCount;	// 40 = 0x28
}
- (id)_arrowFillWithState:(id)state;	// 0x31aa33ad
- (void)mapAt:(id)at withState:(id)state;	// 0x31aa3515
- (void)setDrawArrows:(BOOL)arrows;	// 0x31aa336d
- (void)setSegmentCount:(unsigned)count;	// 0x31aa338d
- (void)setSegmentIndex:(unsigned)index;	// 0x31aa337d
- (void)setStartAngle:(float)angle;	// 0x31aa334d
- (void)setStopAngle:(float)angle;	// 0x31aa335d
- (id)transformPresentationName;	// 0x31aa339d
@end
