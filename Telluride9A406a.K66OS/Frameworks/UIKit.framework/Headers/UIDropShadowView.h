/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView {
@private
	float _cornerRadius;	// 48 = 0x30
	UIView *_contentView;	// 52 = 0x34
	UIView *_backgroundImage;	// 56 = 0x38
	NSDictionary *_preservedLayerValues;	// 60 = 0x3c
}
@property(assign, nonatomic) UIView *contentView;	// G=0x35982d3d; S=0x35982975; @synthesize=_contentView
@property(assign) float cornerRadius;	// G=0x35982d1d; S=0x35982d2d; @synthesize=_cornerRadius
- (id)init;	// 0x359823c5
- (BOOL)_wantsCornerSnapshotsForScrolling;	// 0x35982d19
// declared property getter: - (id)contentView;	// 0x35982d3d
// declared property getter: - (float)cornerRadius;	// 0x35982d1d
- (void)dealloc;	// 0x359825cd
- (void)didFinishRotation;	// 0x35982c79
- (void)setBounds:(CGRect)bounds;	// 0x359828bd
// declared property setter: - (void)setContentView:(id)view;	// 0x35982975
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x35982d2d
- (void)setFrame:(CGRect)frame;	// 0x35982805
- (void)updateShadowPath;	// 0x3598262d
- (void)willBeginRotationWithOriginalBounds:(CGRect)originalBounds newBounds:(CGRect)bounds;	// 0x35982bbd
@end
