/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIView {
@private
	UISelectionGrabber *m_grabber;	// 48 = 0x30
}
@property(assign, nonatomic) UISelectionGrabber *grabber;	// G=0x33189bb1; S=0x33189bc1; @synthesize=m_grabber
- (id)initWithFrame:(CGRect)frame container:(id)container;	// 0x331899b1
- (void)dealloc;	// 0x33189b85
// declared property getter: - (id)grabber;	// 0x33189bb1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33189ac1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33189a61
// declared property setter: - (void)setGrabber:(id)grabber;	// 0x33189bc1
- (int)textEffectsVisibilityLevel;	// 0x33189b81
- (int)textEffectsVisibilityLevelWhenKey;	// 0x33189b6d
@end

