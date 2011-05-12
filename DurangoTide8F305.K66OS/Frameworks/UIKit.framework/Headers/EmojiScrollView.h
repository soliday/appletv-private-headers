/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"


__attribute__((visibility("hidden")))
@interface EmojiScrollView : UIScrollView {
@private
	double _delay;	// 388 = 0x184
	BOOL _canDragToScroll;	// 396 = 0x18c
}
@property(assign) double delay;	// G=0x3219314d; S=0x32193121; @synthesize=_delay
- (id)initWithFrame:(CGRect)frame;	// 0x32193095
- (void)_lookForScrolling;	// 0x32193045
- (void)_stopLookingForScrolling;	// 0x32192a25
- (double)_touchDelayForScrollDetection;	// 0x32192a15
// declared property getter: - (double)delay;	// 0x3219314d
- (void)setContentOffset:(CGPoint)offset;	// 0x32192a75
// declared property setter: - (void)setDelay:(double)delay;	// 0x32193121
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x3219302d
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x32192a35
@end
