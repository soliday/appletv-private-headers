/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIImage;

@interface UIProgressView : UIView <NSCoding> {
@private
	int _progressViewStyle;	// 44 = 0x2c
	float _progress;	// 48 = 0x30
	int _barStyle;	// 52 = 0x34
	UIColor *_customColor;	// 56 = 0x38
	UIImage *_customColorImage;	// 60 = 0x3c
}
@property(assign) int barStyle;	// G=0x32188141; S=0x32188165; converted property
@property(assign, nonatomic) float progress;	// G=0x32188121; S=0x3218822d; @synthesize=_progress
@property(assign, nonatomic) int progressViewStyle;	// G=0x32188131; S=0x321882f1; @synthesize=_progressViewStyle
+ (void)_loadResourcesForStyle:(int)style barStyle:(int)style2;	// 0x32188501
+ (int)_styleImageIndexForStyle:(int)style barStyle:(int)style2;	// 0x321884a5
+ (CGSize)defaultSize;	// 0x32188151
- (id)initWithCoder:(id)coder;	// 0x3218839d
- (id)initWithFrame:(CGRect)frame;	// 0x32188445
- (id)initWithProgressViewStyle:(int)progressViewStyle;	// 0x32188bf9
- (id)_progressColor;	// 0x321881fd
- (void)_setProgressColor:(id)color;	// 0x3218818d
- (id)_tintedImage;	// 0x32188851
// converted property getter: - (int)barStyle;	// 0x32188141
- (void)drawOverlayProgressView:(CGRect)view;	// 0x32188c65
- (void)drawProgressView:(CGRect)view;	// 0x32188a0d
- (void)drawRect:(CGRect)rect;	// 0x32188289
- (void)encodeWithCoder:(id)coder;	// 0x32188311
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c3dd
// declared property getter: - (float)progress;	// 0x32188121
// declared property getter: - (int)progressViewStyle;	// 0x32188131
// converted property setter: - (void)setBarStyle:(int)style;	// 0x32188165
// declared property setter: - (void)setProgress:(float)progress;	// 0x3218822d
// declared property setter: - (void)setProgressViewStyle:(int)style;	// 0x321882f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32188715
@end

