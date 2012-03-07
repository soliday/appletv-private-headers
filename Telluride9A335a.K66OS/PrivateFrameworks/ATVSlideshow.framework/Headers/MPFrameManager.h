/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPFrameManager : NSObject {
	NSMutableDictionary *mFrames;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
}
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x31aa8765
+ (void)releaseSharedManager;	// 0x31aa8135
+ (id)sharedManager;	// 0x31aa80ed
- (id)initWithPaths:(id)paths;	// 0x31aa8c9d
- (id)allCategoryIDs;	// 0x31aa81f9
- (id)allFrameIDs;	// 0x31aa81d9
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x31aa8681
- (id)categoryIDsForFrameID:(id)frameID;	// 0x31aa850d
- (id)constraintsForFramesMatchingList:(id)framesMatchingList andCriteria:(id)criteria;	// 0x31aa89c9
- (void)dealloc;	// 0x31aa8161
- (id)framesForCategoryID:(id)categoryID;	// 0x31aa8565
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x31aa8415
- (id)localizedFrameNameForFrameID:(id)frameID;	// 0x31aa83d5
- (id)randomFrameFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x31aa87c1
- (id)versionOfFrameID:(id)frameID;	// 0x31aa839d
@end
