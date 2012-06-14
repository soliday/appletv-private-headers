/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {
	NSMutableDictionary *mTransitions;	// 4 = 0x4
	NSMutableDictionary *mTransitionCategories;	// 8 = 0x8
	NSMutableDictionary *mTransitionPresets;	// 12 = 0xc
}
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x320af3bd
+ (void)releaseSharedManager;	// 0x320ae8d9
+ (id)sharedManager;	// 0x320ae891
- (id)initWithPaths:(id)paths;	// 0x320afead
- (id)allCategoryIDs;	// 0x320ae9b9
- (id)allTransitionIDs;	// 0x320ae999
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x320aeff5
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x320afe01
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x320afe55
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x320aeb95
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x320af419
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x320af219
- (void)dealloc;	// 0x320ae905
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x320af2f1
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x320aeefd
- (id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;	// 0x320aed7d
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x320af179
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x320aed09
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x320aee55
- (id)presetsForTransitionID:(id)transitionID;	// 0x320af375
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x320af8b5
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x320af1c1
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x320afabd
- (id)transitionsForCategoryID:(id)categoryID;	// 0x320aebed
- (id)versionOfTransitionID:(id)transitionID;	// 0x320aeb5d
@end

