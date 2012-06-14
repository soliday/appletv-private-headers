/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
@private
	AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 4 = 0x4
}
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x35e42055
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x35e420a9
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x35e41f51
- (int)_auxiliaryTrackID;	// 0x35e42231
- (id)_auxiliaryTrackLayer;	// 0x35e42201
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x35e421c9
- (BOOL)_hasPostProcessingLayers;	// 0x35e42261
- (id)_postProcessingRootLayer;	// 0x35e42299
- (id)_postProcessingVideoLayer;	// 0x35e422cd
- (void)dealloc;	// 0x35e420fd
- (void)finalize;	// 0x35e42185
@end

