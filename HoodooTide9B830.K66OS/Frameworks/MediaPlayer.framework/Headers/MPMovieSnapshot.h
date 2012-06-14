/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UIView;

@interface MPMovieSnapshot : NSObject {
	id _delegate;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	int _interfaceOrientation;	// 16 = 0x10
	float _time;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
	UIView *_snapshot;	// 28 = 0x1c
}
@property(readonly, retain) id delegate;	// G=0x3462c871; converted property
@property(readonly, retain) UIView *snapshot;	// G=0x3462c881; converted property
@property(readonly, assign) float time;	// G=0x3462c891; converted property
+ (id)infoWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x3462c289
- (void)dealloc;	// 0x3462c235
// converted property getter: - (id)delegate;	// 0x3462c871
- (id)description;	// 0x3462c331
- (BOOL)prepareForSnapshotOfLayer:(id)layer withPlayer:(id)player;	// 0x3462c3a5
// converted property getter: - (id)snapshot;	// 0x3462c881
- (void)snapshotLayer:(id)layer;	// 0x3462c431
// converted property getter: - (float)time;	// 0x3462c891
@end

