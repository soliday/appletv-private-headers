/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding> {
	UIKBGeometry *m_geometry;	// 4 = 0x4
	CGRect m_originalFrame;	// 8 = 0x8
	CGRect m_frame;	// 24 = 0x18
	CGRect m_paddedFrame;	// 40 = 0x28
	unsigned m_uid;	// 56 = 0x38
}
@property(assign, nonatomic) CGRect frame;	// G=0x305b7675; S=0x305a0d5d; @synthesize=m_frame
@property(retain, nonatomic) UIKBGeometry *geometry;	// G=0x305a0e29; S=0x305b69a1; @synthesize=m_geometry
@property(readonly, assign, nonatomic) CGRect originalFrame;	// G=0x305a1015; 
@property(assign, nonatomic) CGRect paddedFrame;	// G=0x3059c431; S=0x305a0fd1; @synthesize=m_paddedFrame
@property(readonly, assign, nonatomic) unsigned uid;	// G=0x30595b51; @synthesize=m_uid
+ (id)shape;	// 0x307c5d25
- (id)init;	// 0x3066f8d1
- (id)initWithCoder:(id)coder;	// 0x307c5f0d
- (void)dealloc;	// 0x307c5cdd
- (void)encodeWithCoder:(id)coder;	// 0x307c5bad
// declared property getter: - (CGRect)frame;	// 0x305b7675
// declared property getter: - (id)geometry;	// 0x305a0e29
- (unsigned)hash;	// 0x30595b39
- (BOOL)isEqual:(id)equal;	// 0x30595b85
- (void)makeLikeOther:(id)other;	// 0x307c5d65
// declared property getter: - (CGRect)originalFrame;	// 0x305a1015
// declared property getter: - (CGRect)paddedFrame;	// 0x3059c431
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x305a0d5d
- (void)setFrame:(CGRect)frame resetOriginalFrame:(BOOL)frame2;	// 0x305a0da1
- (void)setFrameOnly:(CGRect)only;	// 0x3066ff71
// declared property setter: - (void)setGeometry:(id)geometry;	// 0x305b69a1
// declared property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x305a0fd1
// declared property getter: - (unsigned)uid;	// 0x30595b51
@end

