/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRFrameManager : NSObject {
	NSMutableDictionary *mFrameRepository;	// 4 = 0x4
	NSMutableDictionary *mFrameSets;	// 8 = 0x8
	NSMutableDictionary *mFramePools;	// 12 = 0xc
}
+ (void)initialize;	// 0x33568e7d
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x33568ef9
+ (id)sharedManager;	// 0x33568ee9
- (id)initWithPaths:(id)paths;	// 0x33568f55
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x33569ced
- (void)cleanup;	// 0x33569591
- (void)dealloc;	// 0x33569551
- (id)descriptionForFrameID:(id)frameID;	// 0x33569c45
- (id)frameWithFrameID:(id)frameID;	// 0x335697b5
- (void)recycleFrame:(id)frame;	// 0x33569af5
- (void)releaseResources;	// 0x3356960d
- (id)resourcePathForFrameID:(id)frameID andResource:(id)resource;	// 0x33569c65
- (id)sizeScriptForFrameID:(id)frameID;	// 0x33569cb5
@end
