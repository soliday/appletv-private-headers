/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextWithSpinnerController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVJSPlayerMoreAssetsSpinnerController : BRTextWithSpinnerController {
@private
	id _popBlock;	// 108 = 0x6c
	double _popInterval;	// 112 = 0x70
	NSTimer *_popTimer;	// 120 = 0x78
	BOOL _isDiscarded;	// 124 = 0x7c
}
- (id)initWithPopBlock:(id)popBlock popInterval:(double)interval;	// 0x36632359
- (void)_timerFired:(id)fired;	// 0x36632571
- (void)dealloc;	// 0x36632405
- (void)discard;	// 0x36632451
- (void)wasPopped;	// 0x366324f9
- (void)wasPushed;	// 0x36632491
@end

