/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityIndicatorView.h"
#import "UIKit-Structs.h"


@interface UIProgressIndicator : UIActivityIndicatorView {
}
@property(assign, nonatomic) int progressIndicatorStyle;	// G=0x354f84f1; S=0x354f8501; 
+ (CGSize)size;	// 0x354f8511
// declared property getter: - (int)progressIndicatorStyle;	// 0x354f84f1
- (void)setAnimating:(BOOL)animating;	// 0x354f8545
// declared property setter: - (void)setProgressIndicatorStyle:(int)style;	// 0x354f8501
- (void)setStyle:(int)style;	// 0x354f8535
- (void)startAnimation;	// 0x354f856d
- (void)stopAnimation;	// 0x354f857d
@end

