/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BackRow-Structs.h"
#import "BRProvider.h"

@class BRMediaPlayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRVideoChapterProvider : NSObject <BRProvider> {
@private
	BRMediaPlayer *_player;	// 4 = 0x4
	NSRange _invalidTitlesRange;	// 8 = 0x8
	NSTimer *_checkForChapterTitleUpdateTimer;	// 16 = 0x10
}
- (id)initWithPlayer:(id)player;	// 0x32f644d9
- (void)_checkChapterTitle:(id)title;	// 0x32f647e1
- (void)_movieLoadedHandler:(id)handler;	// 0x32f64311
- (BOOL)_videoIsLoaded;	// 0x32f6437d
- (id)controlFactory;	// 0x32f64449
- (id)dataAtIndex:(long)index;	// 0x32f645b1
- (long)dataCount;	// 0x32f64415
- (void)dealloc;	// 0x32f64469
- (id)hashForDataAtIndex:(long)index;	// 0x32f643ed
- (void)stopMonitoring;	// 0x32f643c1
@end

