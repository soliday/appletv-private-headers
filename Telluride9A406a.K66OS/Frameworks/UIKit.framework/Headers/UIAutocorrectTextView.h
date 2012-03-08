/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView {
@private
	NSString *m_string;	// 48 = 0x30
	int m_type;	// 52 = 0x34
	int m_edgeType;	// 56 = 0x38
	UIFont *m_textFont;	// 60 = 0x3c
	BOOL m_animating;	// 64 = 0x40
	BOOL m_isLongString;	// 65 = 0x41
}
@property(assign, nonatomic) BOOL animating;	// G=0x3589997d; S=0x358197a1; @synthesize=m_animating
@property(assign, nonatomic) BOOL isLongString;	// G=0x3589998d; S=0x3589999d; @synthesize=m_isLongString
- (id)initWithFrame:(CGRect)frame string:(id)string type:(int)type edgeType:(int)type4;	// 0x35816615
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x35899775
// declared property getter: - (BOOL)animating;	// 0x3589997d
- (void)dealloc;	// 0x35818a89
- (void)drawRect:(CGRect)rect;	// 0x358172fd
// declared property getter: - (BOOL)isLongString;	// 0x3589998d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x35899771
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x358998c1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x35899941
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x358197a1
- (void)setEdgeType:(int)type;	// 0x358196bd
// declared property setter: - (void)setIsLongString:(BOOL)string;	// 0x3589999d
@end
