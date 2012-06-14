/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton {
@private
	SEL m_action;	// 140 = 0x8c
	int m_position;	// 144 = 0x90
	int m_type;	// 148 = 0x94
	UITextReplacement *m_textReplacement;	// 152 = 0x98
	float m_contentWidth;	// 156 = 0x9c
	float m_contentScale;	// 160 = 0xa0
	float m_additionalContentHeight;	// 164 = 0xa4
	float m_dividerOffset;	// 168 = 0xa8
	float m_imageVerticalAdjust;	// 172 = 0xac
	int m_page;	// 176 = 0xb0
	BOOL m_isText;	// 180 = 0xb4
	BOOL m_configured;	// 181 = 0xb5
	BOOL m_single;	// 182 = 0xb6
	BOOL m_padLeft;	// 183 = 0xb7
	BOOL m_padRight;	// 184 = 0xb8
	BOOL m_dontDismiss;	// 185 = 0xb9
	BOOL forceFlash;	// 186 = 0xba
}
@property(readonly, assign, nonatomic) SEL action;	// G=0x3541204d; @synthesize=m_action
@property(readonly, assign, nonatomic) float additionalContentHeight;	// G=0x3546b1dd; @synthesize=m_additionalContentHeight
@property(readonly, assign, nonatomic) float contentScale;	// G=0x355d7185; @synthesize=m_contentScale
@property(readonly, assign, nonatomic) float contentWidth;	// G=0x3546b1cd; @synthesize=m_contentWidth
@property(assign, nonatomic) float dividerOffset;	// G=0x3546ce4d; S=0x3546c901; @synthesize=m_dividerOffset
@property(assign, nonatomic) BOOL dontDismiss;	// G=0x3546e37d; S=0x3540fafd; @synthesize=m_dontDismiss
@property(assign, nonatomic) BOOL forceFlash;	// G=0x35411f35; S=0x3546e0f1; @synthesize
@property(assign, nonatomic) float imageVerticalAdjust;	// G=0x355d71c9; S=0x3540fb0d; @synthesize=m_imageVerticalAdjust
@property(assign, nonatomic) int page;	// G=0x35412979; S=0x3541200d; @synthesize=m_page
@property(retain, nonatomic) UITextReplacement *textReplacement;	// G=0x355d7195; S=0x355d71a5; @synthesize=m_textReplacement
@property(readonly, assign, nonatomic) int type;	// G=0x3546e36d; @synthesize=m_type
+ (id)buttonWithImage:(id)image action:(SEL)action type:(int)type inView:(id)view;	// 0x3540f9b1
+ (id)buttonWithTitle:(id)title action:(SEL)action type:(int)type inView:(id)view;	// 0x3540f765
+ (id)buttonWithTitle:(id)title subtitle:(id)subtitle maxWidth:(float)width action:(SEL)action type:(int)type inView:(id)view;	// 0x355d6965
- (void)_commonSetupWithAction:(SEL)action type:(int)type;	// 0x3540f8c5
// declared property getter: - (SEL)action;	// 0x3541204d
// declared property getter: - (float)additionalContentHeight;	// 0x3546b1dd
- (CGRect)adjustRectForPosition:(CGRect)position scaleVertically:(BOOL)vertically;	// 0x35412bfd
- (void)cancelFlash;	// 0x3546e159
- (void)configureForLeftPosition:(int)leftPosition;	// 0x3546c651
- (void)configureForMiddlePosition;	// 0x3546c911
- (void)configureForRightPosition:(int)rightPosition;	// 0x3546c9bd
- (void)configureForSingle:(int)single;	// 0x355d7051
- (void)configureLabel;	// 0x35412e21
// declared property getter: - (float)contentScale;	// 0x355d7185
// declared property getter: - (float)contentWidth;	// 0x3546b1cd
- (void)dealloc;	// 0x355d6fb1
// declared property getter: - (float)dividerOffset;	// 0x3546ce4d
// declared property getter: - (BOOL)dontDismiss;	// 0x3546e37d
- (void)fadeAndSendAction;	// 0x3546e101
- (void)flash;	// 0x3546e05d
// declared property getter: - (BOOL)forceFlash;	// 0x35411f35
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x35412b49
// declared property getter: - (float)imageVerticalAdjust;	// 0x355d71c9
- (void)layoutSubviews;	// 0x35412ae5
// declared property getter: - (int)page;	// 0x35412979
- (void)removeFromSuperview;	// 0x355d7011
- (void)setContentScale:(float)scale;	// 0x3546c5b1
// declared property setter: - (void)setDividerOffset:(float)offset;	// 0x3546c901
// declared property setter: - (void)setDontDismiss:(BOOL)dismiss;	// 0x3540fafd
// declared property setter: - (void)setForceFlash:(BOOL)flash;	// 0x3546e0f1
- (void)setHighlighted:(BOOL)highlighted;	// 0x35411ea1
// declared property setter: - (void)setImageVerticalAdjust:(float)adjust;	// 0x3540fb0d
// declared property setter: - (void)setPage:(int)page;	// 0x3541200d
// declared property setter: - (void)setTextReplacement:(id)replacement;	// 0x355d71a5
- (void)setupWithImage:(id)image action:(SEL)action type:(int)type;	// 0x3540fa11
- (void)setupWithTitle:(id)title action:(SEL)action type:(int)type;	// 0x3540f7c5
- (void)setupWithTitle:(id)title subtitle:(id)subtitle maxWidth:(float)width action:(SEL)action type:(int)type;	// 0x355d69d5
// declared property getter: - (id)textReplacement;	// 0x355d7195
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x35412d79
// declared property getter: - (int)type;	// 0x3546e36d
@end

