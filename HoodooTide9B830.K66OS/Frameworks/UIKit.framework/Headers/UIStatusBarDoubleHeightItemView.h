/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
@private
	NSString *_contentsString;	// 76 = 0x4c
	float _letterSpacing;	// 80 = 0x50
	BOOL _ellipsize;	// 84 = 0x54
}
- (id)contentsImageForStyle:(int)style;	// 0x3038d8d9
- (void)dealloc;	// 0x3038d6dd
- (float)extraRightPadding;	// 0x3038daa9
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3038d729
- (BOOL)usesSmallerTextFont;	// 0x3038daa5
@end

