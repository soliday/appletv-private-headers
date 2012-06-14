/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {
	NSMutableArray *_contexts;	// 4 = 0x4
	NSMutableSet *_categories;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id mainContext;	// G=0x303d6689; 
+ (id)sharedInstance;	// 0x303d6545
- (id)init;	// 0x303d658d
- (BOOL)_sliderIsVisible:(id)visible;	// 0x303d68c1
- (void)_updateVisibility;	// 0x303d6955
- (void)dealloc;	// 0x303d6629
// declared property getter: - (id)mainContext;	// 0x303d6689
- (void)popContext;	// 0x303d6705
- (id)pushContext;	// 0x303d66a9
- (void)registerView:(id)view inContext:(id)context;	// 0x303d67d5
- (void)setNeedsUpdate;	// 0x303d6865
- (void)unregisterView:(id)view inContext:(id)context;	// 0x303d6835
@end

