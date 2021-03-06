/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
@private
	int _dataNetworkType;	// 76 = 0x4c
	int _wifiStrengthRaw;	// 80 = 0x50
	int _wifiStrengthBars;	// 84 = 0x54
	BOOL _enableRSSI;	// 88 = 0x58
	BOOL _showRSSI;	// 89 = 0x59
}
- (id)_dataNetworkImageForStyle:(int)style;	// 0x3004fef9
- (id)_stringForRSSI;	// 0x3032b78d
- (id)contentsImageForStyle:(int)style;	// 0x3004fd81
- (float)extraLeftPadding;	// 0x3002f371
- (float)maximumOverlap;	// 0x3032b6b9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3032b6c9
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3002dda9
@end

