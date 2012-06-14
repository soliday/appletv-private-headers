/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWebSelectionView, UIImageView, UITouch;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView {
@private
	UITouch *_touch;	// 48 = 0x30
	UIImageView *_dragDotView;	// 52 = 0x34
	int _position;	// 56 = 0x38
	int _textPosition;	// 60 = 0x3c
	UIWebSelectionView *_selectionView;	// 64 = 0x40
	CGSize _touchToCenterOffset;	// 68 = 0x44
	CGSize _centerToSelectionPointOffset;	// 76 = 0x4c
}
@property(assign, nonatomic) CGSize centerToSelectionPointOffset;	// G=0x355e3d2d; S=0x355e3d49; @synthesize=_centerToSelectionPointOffset
@property(readonly, assign, nonatomic) BOOL hasTextPosition;	// G=0x355e38e5; 
@property(assign, nonatomic) int position;	// G=0x355e3ce1; S=0x355e3cf1; @synthesize=_position
@property(assign, nonatomic) int textPosition;	// G=0x355e3951; S=0x355e3905; 
@property(retain, nonatomic) UITouch *touch;	// G=0x355e3d01; S=0x354b06a5; @synthesize=_touch
@property(readonly, assign, nonatomic) CGSize touchToCenterOffset;	// G=0x355e3d11; @synthesize=_touchToCenterOffset
- (id)initWithPosition:(int)position selectionView:(id)view;	// 0x355e343d
- (CGPoint)applyCenterToSelectionPointOffset:(CGPoint)selectionPointOffset;	// 0x355e3995
- (CGPoint)applyOffsetInDirectionOfHandle:(float)handle toPoint:(CGPoint)point;	// 0x355e3a25
- (CGPoint)applyTouchToCenterOffset:(CGPoint)centerOffset;	// 0x355e3961
// declared property getter: - (CGSize)centerToSelectionPointOffset;	// 0x355e3d2d
- (void)dealloc;	// 0x354b0645
- (void)dropActiveTouch;	// 0x355e3871
// declared property getter: - (BOOL)hasTextPosition;	// 0x355e38e5
- (float)offsetInDirectionOfHandleFromFirstPoint:(CGPoint)firstPoint toSecondPoint:(CGPoint)secondPoint;	// 0x355e3a95
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x355e3885
// declared property getter: - (int)position;	// 0x355e3ce1
// declared property setter: - (void)setCenterToSelectionPointOffset:(CGSize)selectionPointOffset;	// 0x355e3d49
// declared property setter: - (void)setPosition:(int)position;	// 0x355e3cf1
// declared property setter: - (void)setTextPosition:(int)position;	// 0x355e3905
// declared property setter: - (void)setTouch:(id)touch;	// 0x354b06a5
- (void)snapToCornerOfRange:(id)range atStart:(BOOL)start;	// 0x355e3af9
- (CGPoint)suggestedHandlePositionOnRect:(CGRect)rect;	// 0x355e3c1d
// declared property getter: - (int)textPosition;	// 0x355e3951
// declared property getter: - (id)touch;	// 0x355e3d01
// declared property getter: - (CGSize)touchToCenterOffset;	// 0x355e3d11
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x355e3575
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x355e3821
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x355e3779
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x355e36e5
@end

