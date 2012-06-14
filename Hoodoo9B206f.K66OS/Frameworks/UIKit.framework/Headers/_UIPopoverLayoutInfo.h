/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
@private
	UIEdgeInsets _contentInset;	// 4 = 0x4
	float _arrowHeight;	// 20 = 0x14
	CGSize _preferredContentSize;	// 24 = 0x18
	unsigned _preferredArrowDirections;	// 32 = 0x20
	CGRect _containingFrame;	// 36 = 0x24
	UIEdgeInsets _containingFrameInsets;	// 52 = 0x34
	CGRect _targetRect;	// 68 = 0x44
	BOOL _constrainToTargetRect;	// 84 = 0x54
	CGRect _frame;	// 88 = 0x58
	float _offset;	// 104 = 0x68
	unsigned _arrowDirection;	// 108 = 0x6c
	BOOL _updatesEnabled;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x3567816d; @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// G=0x35677fe9; S=0x35677ff9; @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x35678119; S=0x35678129; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x35678059; S=0x3567807d; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x35678099; S=0x356780bd; @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x35677fa9; S=0x35677fcd; @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x35678139; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x3567815d; @synthesize=_offset
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x35678039; S=0x35678049; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x35678009; S=0x35678025; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x356780d9; S=0x356780fd; @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// G=0x3567817d; S=0x3567818d; @synthesize=_updatesEnabled
+ (id)_observationKeys;	// 0x35676d21
- (id)init;	// 0x35676db9
- (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x3567737d
// declared property setter: - (void)_setUpdatesEnabled:(BOOL)enabled;	// 0x3567818d
- (void)_updateOutputs;	// 0x35677549
// declared property getter: - (BOOL)_updatesEnabled;	// 0x3567817d
// declared property getter: - (unsigned)arrowDirection;	// 0x3567816d
// declared property getter: - (float)arrowHeight;	// 0x35677fe9
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x35678119
// declared property getter: - (CGRect)containingFrame;	// 0x35678059
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x35678099
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x35677fa9
- (id)copyWithZone:(NSZone *)zone;	// 0x35676ef5
- (void)dealloc;	// 0x356770a9
- (id)description;	// 0x35677189
// declared property getter: - (CGRect)frame;	// 0x35678139
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35677f7d
// declared property getter: - (float)offset;	// 0x3567815d
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x35678039
// declared property getter: - (CGSize)preferredContentSize;	// 0x35678009
// declared property setter: - (void)setArrowHeight:(float)height;	// 0x35677ff9
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x35678129
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x3567807d
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x356780bd
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x35677fcd
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x35678049
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x35678025
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x356780fd
// declared property getter: - (CGRect)targetRect;	// 0x356780d9
@end

