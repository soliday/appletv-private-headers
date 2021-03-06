/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverBackgroundView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
@private
	UIView *_arrowView;	// 48 = 0x30
	UIView *_leftCapView;	// 52 = 0x34
	UIView *_rightCapView;	// 56 = 0x38
	float _arrowOffset;	// 60 = 0x3c
	unsigned _arrowDirection;	// 64 = 0x40
	int _backgroundStyle;	// 68 = 0x44
	BOOL _arrowVisible;	// 72 = 0x48
	BOOL useShortMode;	// 73 = 0x49
	BOOL _debugMode;	// 74 = 0x4a
}
@property(assign) unsigned arrowDirection;	// G=0x35472e71; S=0x35472e81; converted property
@property(assign) float arrowOffset;	// G=0x35472de5; S=0x35472e25; converted property
@property(assign, nonatomic, getter=isArrowVisible) BOOL arrowVisible;	// G=0x354739a9; S=0x354739b9; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x35473799; S=0x354737a9; 
@property(assign, nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;	// G=0x35473a05; S=0x35473a15; @synthesize=_debugMode
@property(assign, nonatomic) BOOL useShortMode;	// G=0x354739e5; S=0x354739f5; @synthesize
+ (float)arrowBase;	// 0x35472e99
+ (float)arrowHeight;	// 0x35472e91
+ (UIEdgeInsets)contentViewInsets;	// 0x35472ea1
- (id)initWithFrame:(CGRect)frame;	// 0x354721e5
- (void)_layoutArrowViewsLeftOrRight;	// 0x3547277d
- (void)_layoutArrowViewsNone;	// 0x35472c11
- (void)_layoutArrowViewsUpOrDown;	// 0x35472339
- (void)_loadNecessaryViews;	// 0x35472eb1
// converted property getter: - (unsigned)arrowDirection;	// 0x35472e71
// converted property getter: - (float)arrowOffset;	// 0x35472de5
// declared property getter: - (int)backgroundStyle;	// 0x35473799
- (void)dealloc;	// 0x3547222d
- (BOOL)hasComponentViews;	// 0x35473419
// declared property getter: - (BOOL)isArrowVisible;	// 0x354739a9
// declared property getter: - (BOOL)isDebugModeEnabled;	// 0x35473a05
- (BOOL)isPinned;	// 0x35473459
- (BOOL)isRightArrowPinnedToBottom;	// 0x35473751
- (BOOL)isRightArrowPinnedToTop;	// 0x35473709
- (void)layoutSubviews;	// 0x35472d1d
- (float)maxNonPinnedOffset;	// 0x35473631
- (float)minNonPinnedOffset;	// 0x35473535
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x35472dd9
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x35472de1
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x35472ddd
// converted property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x35472e81
// converted property setter: - (void)setArrowOffset:(float)offset;	// 0x35472e25
// declared property setter: - (void)setArrowVisible:(BOOL)visible;	// 0x354739b9
- (void)setArrowVisible:(BOOL)visible animated:(BOOL)animated;	// 0x354739c9
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x354737a9
- (void)setBackgroundStyle:(int)style animated:(BOOL)animated;	// 0x35473999
// declared property setter: - (void)setDebugModeEnabled:(BOOL)enabled;	// 0x35473a15
// declared property setter: - (void)setUseShortMode:(BOOL)mode;	// 0x354739f5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35472dc9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35472dd5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35472dd1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35472dcd
// declared property getter: - (BOOL)useShortMode;	// 0x354739e5
- (void)willMoveToWindow:(id)window;	// 0x354722a1
- (BOOL)wouldPinForOffset:(float)offset;	// 0x354734cd
@end

