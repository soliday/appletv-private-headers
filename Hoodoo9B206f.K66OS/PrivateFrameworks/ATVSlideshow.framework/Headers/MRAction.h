/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MRLayer, MCAction;

@interface MRAction : NSObject {
	MCAction *mMCAction;	// 4 = 0x4
	id mSender;	// 8 = 0x8
	MRLayer *mResolvedTarget;	// 12 = 0xc
	NSMutableDictionary *mStates;	// 16 = 0x10
	double mTime;	// 20 = 0x14
}
@property(readonly, assign) MCAction *action;	// G=0x30aacc3d; @synthesize=mMCAction
@property(readonly, assign) MRLayer *resolvedTarget;	// G=0x30aacc5d; @synthesize=mResolvedTarget
@property(retain, nonatomic) id sender;	// G=0x30aacc4d; S=0x30aac929; @synthesize=mSender
@property(retain) NSMutableDictionary *states;	// G=0x30aacc6d; S=0x30aacc81; @synthesize=mStates
@property(assign, nonatomic) double time;	// G=0x30aacca5; S=0x30aaccbd; @synthesize=mTime
- (id)initWithAction:(id)action andTarget:(id)target;	// 0x30aac809
- (id)initWithAction:(id)action inRenderer:(id)renderer;	// 0x30aac6f5
// declared property getter: - (id)action;	// 0x30aacc3d
- (void)dealloc;	// 0x30aac87d
// declared property getter: - (id)resolvedTarget;	// 0x30aacc5d
// declared property getter: - (id)sender;	// 0x30aacc4d
// declared property setter: - (void)setSender:(id)sender;	// 0x30aac929
// declared property setter: - (void)setStates:(id)states;	// 0x30aacc81
// declared property setter: - (void)setTime:(double)time;	// 0x30aaccbd
// declared property getter: - (id)states;	// 0x30aacc6d
// declared property getter: - (double)time;	// 0x30aacca5
@end

