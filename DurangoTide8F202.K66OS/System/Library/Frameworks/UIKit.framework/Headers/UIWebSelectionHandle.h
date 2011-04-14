/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UITouch, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView {
@private
	UITouch *_touch;	// 44 = 0x2c
	UIImageView *_dragDotView;	// 48 = 0x30
	int _position;	// 52 = 0x34
	int _textPosition;	// 56 = 0x38
	UIWebSelectionView *_tintView;	// 60 = 0x3c
	CGSize _touchToCenterOffset;	// 64 = 0x40
	CGSize _centerToSelectionPointOffset;	// 72 = 0x48
}
@property(assign, nonatomic) CGSize centerToSelectionPointOffset;	// G=0x307ea015; S=0x307ea02d; @synthesize=_centerToSelectionPointOffset
@property(readonly, assign, nonatomic) BOOL hasTextPosition;	// G=0x307ea1b1; 
@property(assign, nonatomic) int position;	// G=0x307ea06d; S=0x307ea07d; @synthesize=_position
@property(assign, nonatomic) int textPosition;	// G=0x307e9fcd; S=0x307ea161; 
@property(retain, nonatomic) UITouch *touch;	// G=0x307ea05d; S=0x307ece95; @synthesize=_touch
@property(readonly, assign, nonatomic) CGSize touchToCenterOffset;	// G=0x307ea045; @synthesize=_touchToCenterOffset
- (id)initWithPosition:(int)position tintView:(id)view;	// 0x30614e29
- (CGPoint)applyCenterToSelectionPointOffset:(CGPoint)selectionPointOffset;	// 0x307eae35
- (CGPoint)applyOffsetInDirectionOfHandle:(float)handle toPoint:(CGPoint)point;	// 0x307ea0f9
- (CGPoint)applyTouchToCenterOffset:(CGPoint)centerOffset;	// 0x307e9fdd
// declared property getter: - (CGSize)centerToSelectionPointOffset;	// 0x307ea015
- (void)dealloc;	// 0x307eacf1
- (void)dropActiveTouch;	// 0x307ea1cd
// declared property getter: - (BOOL)hasTextPosition;	// 0x307ea1b1
- (float)offsetInDirectionOfHandleFromFirstPoint:(CGPoint)firstPoint toSecondPoint:(CGPoint)secondPoint;	// 0x307ea08d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x307ecee5
// declared property getter: - (int)position;	// 0x307ea06d
// declared property setter: - (void)setCenterToSelectionPointOffset:(CGSize)selectionPointOffset;	// 0x307ea02d
// declared property setter: - (void)setPosition:(int)position;	// 0x307ea07d
// declared property setter: - (void)setTextPosition:(int)position;	// 0x307ea161
// declared property setter: - (void)setTouch:(id)touch;	// 0x307ece95
- (void)snapToCornerOfRange:(id)range atStart:(BOOL)start;	// 0x307ed6d9
- (CGPoint)suggestedHandlePositionOnRect:(CGRect)rect;	// 0x307edc61
// declared property getter: - (int)textPosition;	// 0x307e9fcd
// declared property getter: - (id)touch;	// 0x307ea05d
// declared property getter: - (CGSize)touchToCenterOffset;	// 0x307ea045
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x307eaea5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x307ea1e5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x307ea22d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x307ea2d5
@end
