/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
}
+ (void)initialize;	// 0x30a1516d
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x30a151e9
+ (id)sharedManager;	// 0x30a151d9
- (id)initWithPaths:(id)paths;	// 0x30a15245
- (void)cleanup;	// 0x30a1549d
- (void)dealloc;	// 0x30a1545d
@end

