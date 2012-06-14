/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSDictionary, MCAudioPlaylist, MCPlug;

@interface MCContainer : MCObject {
	MCAudioPlaylist *mAudioPlaylist;	// 12 = 0xc
	MCPlug *mReferencingPlug;	// 16 = 0x10
	NSDictionary *mInitialState;	// 20 = 0x14
	unsigned short mFlags;	// 24 = 0x18
	unsigned short mSpecialRetainCount;	// 26 = 0x1a
}
@property(readonly, assign) MCAudioPlaylist *audioPlaylist;	// G=0x30adabb9; @synthesize=mAudioPlaylist
@property(readonly, assign) MCAudioPlaylist *audioPlaylistCreateIfNeeded;	// G=0x30ada879; 
@property(retain) NSDictionary *initialState;	// G=0x30adabc9; S=0x30adabdd; @synthesize=mInitialState
@property(readonly, assign) MCPlug *referencingPlug;	// G=0x30adac01; @synthesize=mReferencingPlug
- (id)init;	// 0x30ada5d9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30ada605
// declared property getter: - (id)audioPlaylist;	// 0x30adabb9
// declared property getter: - (id)audioPlaylistCreateIfNeeded;	// 0x30ada879
- (void)demolish;	// 0x30ada711
- (id)imprint;	// 0x30ada7e5
// declared property getter: - (id)initialState;	// 0x30adabc9
- (void)referenceByPlug:(id)plug;	// 0x30ada9e1
// declared property getter: - (id)referencingPlug;	// 0x30adac01
// declared property setter: - (void)setInitialState:(id)state;	// 0x30adabdd
- (void)specialRelease;	// 0x30adab3d
- (id)specialRetain;	// 0x30adaa7d
- (void)unreferenceByPlug:(id)plug;	// 0x30adaa09
@end

