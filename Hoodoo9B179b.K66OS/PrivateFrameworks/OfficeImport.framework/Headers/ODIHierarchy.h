/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : NSObject {
@private
	int mType;	// 4 = 0x4
	int mMaxMappableTreeDepth;	// 8 = 0x8
	ODIState *mState;	// 12 = 0xc
	NSMutableDictionary *mNodeInfoMap;	// 16 = 0x10
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x329e9235
- (id)initWithType:(int)type state:(id)state;	// 0x329e930d
- (CGRect)boundsOfNode:(id)node;	// 0x329ea045
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x329e948d
- (void)dealloc;	// 0x329e93dd
- (id)infoForNode:(id)node;	// 0x329e943d
- (void)map;	// 0x329e976d
- (void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x329e96f9
- (void)mapNode:(id)node;	// 0x329ea0c1
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x329e9831
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset;	// 0x329e95a9
@end

