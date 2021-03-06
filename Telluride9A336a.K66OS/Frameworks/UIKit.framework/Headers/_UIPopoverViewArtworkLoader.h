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
+ (id)backgroundSelectorForBackgroundStyle:(int)backgroundStyle;	// 0x35473ae5
- (id)initWithBackgroundStyle:(int)backgroundStyle;	// 0x35473a25
- (id)bottomArrowLeftEndCapView;	// 0x35475181
- (id)bottomArrowPinnedView;	// 0x35474f8d
- (id)bottomArrowRightEndCapView;	// 0x3547534d
- (id)bottomArrowView;	// 0x35474dbd
- (CGRect)contentRectForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x35473ba9
- (CGRect)contentsCenterForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x35473be5
- (void)dealloc;	// 0x35473a99
- (id)rightArrowBottomEndCapView;	// 0x35474ba9
- (id)rightArrowPinnedBottomView;	// 0x354747ed
- (id)rightArrowPinnedTopView;	// 0x35474621
- (id)rightArrowTopEndCapView;	// 0x354749dd
- (id)rightArrowView;	// 0x35474451
- (id)shortBottomArrowLeftEndCapView;	// 0x35476011
- (id)shortBottomArrowPinnedView;	// 0x35475e1d
- (id)shortBottomArrowRightEndCapView;	// 0x354761dd
- (id)shortBottomArrowView;	// 0x35475c4d
- (id)shortRightArrowView;	// 0x35475a59
- (id)shortTopArrowLeftEndCapView;	// 0x354757cd
- (id)shortTopArrowPinnedView;	// 0x354755d9
- (id)shortTopArrowRightEndCapView;	// 0x3547599d
- (id)shortTopArrowView;	// 0x35475409
- (id)templateImageForDirection:(id)direction shortArtwork:(BOOL)artwork;	// 0x35473b21
- (id)topArrowLeftEndCapView;	// 0x354741c9
- (id)topArrowPinnedView;	// 0x35473fd5
- (id)topArrowRightEndCapView;	// 0x35474395
- (id)topArrowView;	// 0x35473e05
- (id)viewWithContentsImage:(id)contentsImage rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask directionSelector:(id)selector;	// 0x35473c79
@end

