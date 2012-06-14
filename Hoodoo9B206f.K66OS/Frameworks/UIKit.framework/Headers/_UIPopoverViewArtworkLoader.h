/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject {
@private
	int _backgroundStyle;	// 4 = 0x4
	NSString *_backgroundSelector;	// 8 = 0x8
}
+ (id)backgroundSelectorForBackgroundStyle:(int)backgroundStyle;	// 0x356cf0f1
- (id)initWithBackgroundStyle:(int)backgroundStyle;	// 0x356cf031
- (id)bottomArrowLeftEndCapView;	// 0x356d078d
- (id)bottomArrowPinnedView;	// 0x356d0599
- (id)bottomArrowRightEndCapView;	// 0x356d0959
- (id)bottomArrowView;	// 0x356d03c9
- (CGRect)contentRectForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x356cf1b5
- (CGRect)contentsCenterForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x356cf1f1
- (void)dealloc;	// 0x356cf0a5
- (id)rightArrowBottomEndCapView;	// 0x356d01b5
- (id)rightArrowPinnedBottomView;	// 0x356cfdf9
- (id)rightArrowPinnedTopView;	// 0x356cfc2d
- (id)rightArrowTopEndCapView;	// 0x356cffe9
- (id)rightArrowView;	// 0x356cfa5d
- (id)shortBottomArrowLeftEndCapView;	// 0x356d161d
- (id)shortBottomArrowPinnedView;	// 0x356d1429
- (id)shortBottomArrowRightEndCapView;	// 0x356d17e9
- (id)shortBottomArrowView;	// 0x356d1259
- (id)shortRightArrowView;	// 0x356d1065
- (id)shortTopArrowLeftEndCapView;	// 0x356d0dd9
- (id)shortTopArrowPinnedView;	// 0x356d0be5
- (id)shortTopArrowRightEndCapView;	// 0x356d0fa9
- (id)shortTopArrowView;	// 0x356d0a15
- (id)templateImageForDirection:(id)direction shortArtwork:(BOOL)artwork;	// 0x356cf12d
- (id)topArrowLeftEndCapView;	// 0x356cf7d5
- (id)topArrowPinnedView;	// 0x356cf5e1
- (id)topArrowRightEndCapView;	// 0x356cf9a1
- (id)topArrowView;	// 0x356cf411
- (id)viewWithContentsImage:(id)contentsImage rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask directionSelector:(id)selector;	// 0x356cf285
@end

