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
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x309d86a5
+ (void)releaseSharedManager;	// 0x309d8075
+ (id)sharedManager;	// 0x309d802d
- (id)initWithPaths:(id)paths;	// 0x309d8bdd
- (id)allCategoryIDs;	// 0x309d8139
- (id)allFrameIDs;	// 0x309d8119
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x309d85c1
- (id)categoryIDsForFrameID:(id)frameID;	// 0x309d844d
- (id)constraintsForFramesMatchingList:(id)framesMatchingList andCriteria:(id)criteria;	// 0x309d8909
- (void)dealloc;	// 0x309d80a1
- (id)framesForCategoryID:(id)categoryID;	// 0x309d84a5
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x309d8355
- (id)localizedFrameNameForFrameID:(id)frameID;	// 0x309d8315
- (id)randomFrameFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x309d8701
- (id)versionOfFrameID:(id)frameID;	// 0x309d82dd
@end

