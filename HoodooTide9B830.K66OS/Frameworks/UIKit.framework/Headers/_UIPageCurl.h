/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, _UIPageCurlState, NSNumber, UIView;

@interface _UIPageCurl : NSObject {
	int _spineLocation;	// 4 = 0x4
	CGRect _contentRect;	// 8 = 0x8
	UIView *_contentView;	// 24 = 0x18
	_UIPageCurlState *_manualPageCurlState;	// 28 = 0x1c
	NSMutableArray *_pendingStateQueue;	// 32 = 0x20
	NSMutableArray *_activeStateQueue;	// 36 = 0x24
	NSMutableArray *_orderedCompletedStates;	// 40 = 0x28
	double _delayBetweenSuccessiveAnimations;	// 44 = 0x2c
	float _pageDiagonalAngle;	// 52 = 0x34
	float _pageDiagonalLength;	// 56 = 0x38
	float _manualPageCurlMaxDAngle;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic, getter=_isManualPageCurlInProgress) BOOL _manualPageCurlInProgress;	// G=0x303a6b79; 
@property(assign, nonatomic, setter=_setManualPageCurlMaxDAngle:) float _manualPageCurlMaxDAngle;	// G=0x303aa76d; S=0x303aa77d; @synthesize
@property(readonly, assign, nonatomic) int _spineLocation;	// G=0x303aa75d; @synthesize
@property(readonly, assign, nonatomic) NSNumber *_wrappedManualPageCurlDirection;	// G=0x303a6b91; 
- (id)initWithSpineLocation:(int)spineLocation andContentRect:(CGRect)rect inContentView:(id)contentView;	// 0x303a6865
- (id)_animationKeyPaths;	// 0x303a8b99
- (float)_baseAngleOffsetForState:(id)state;	// 0x303a7009
- (void)_beginCurlWithState:(id)state;	// 0x303a964d
- (void)_cancelManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;	// 0x303aa121
- (void)_cleanupState:(id)state;	// 0x303a95b5
- (void)_completeManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;	// 0x303aa0f1
- (float)_distanceToTravelWithCurrentSpineLocation;	// 0x303a7f0d
- (float)_durationForManualCurlEndAnimationWithSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;	// 0x303a9c6d
- (void)_endManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;	// 0x303a9da9
- (void)_enqueueCurlOfType:(int)type fromLocation:(CGPoint)location inDirection:(int)direction withView:(id)view revealingView:(id)view5 completion:(id)completion;	// 0x303a9219
- (void)_ensureCurlFilterOnLayer:(id)layer;	// 0x303a757d
- (void)_forceCleanupState:(id)state finished:(BOOL)finished completed:(BOOL)completed;	// 0x303a95fd
- (void)_fromValue:(float *)value toValue:(float *)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;	// 0x303a756d
- (float)_inputTimeForProgress:(float)progress distanceToTravel:(float)travel radius:(float *)radius minRadius:(float)radius4 angle:(float)angle dAngle:(float)angle6 touchLocation:(CGPoint)location state:(id)state;	// 0x303a7629
// declared property getter: - (BOOL)_isManualPageCurlInProgress;	// 0x303a6b79
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(int)type inDirection:(int)direction;	// 0x303a9185
// declared property getter: - (float)_manualPageCurlMaxDAngle;	// 0x303aa76d
- (id)_newAnimationForState:(id)state withKeyPath:(id)keyPath duration:(float)duration fromValue:(id)value;	// 0x303a6e25
- (id)_newCurlFilter;	// 0x303a6cb5
- (void)_pageCurlAnimationDidStop:(id)_pageCurlAnimation withState:(id)state;	// 0x303aa151
- (CGRect)_pageViewFrame:(BOOL)frame;	// 0x303a6bf5
- (BOOL)_populateFromValue:(float *)value toValue:(float *)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;	// 0x303a714d
- (CGPoint)_referenceLocationForInitialLocation:(CGPoint)initialLocation direction:(int)direction;	// 0x303a8f79
// declared property setter: - (void)_setManualPageCurlMaxDAngle:(float)angle;	// 0x303aa77d
// declared property getter: - (int)_spineLocation;	// 0x303aa75d
- (void)_updateCurlFromState:(id)state withTime:(float)time radius:(float)radius angle:(float)angle addingAnimations:(id)animations;	// 0x303a8be5
- (void)_updateManualCurlToLocation:(CGPoint)location;	// 0x303a9bd5
- (void)_updatedInputsFromState:(id)state forLocation:(CGPoint)location time:(float *)time radius:(float *)radius angle:(float *)angle;	// 0x303a800d
- (int)_validatedPageCurlTypeForPageCurlType:(int)pageCurlType inDirection:(int)direction;	// 0x303a913d
// declared property getter: - (id)_wrappedManualPageCurlDirection;	// 0x303a6b91
- (void)dealloc;	// 0x303a6add
@end

