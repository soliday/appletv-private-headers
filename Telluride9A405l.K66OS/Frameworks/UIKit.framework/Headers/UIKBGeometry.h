/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	XXStruct_tp$7nC m_x;	// 8 = 0x8
	XXStruct_tp$7nC m_y;	// 16 = 0x10
	XXStruct_tp$7nC m_w;	// 24 = 0x18
	XXStruct_tp$7nC m_h;	// 32 = 0x20
	XXStruct_tp$7nC m_paddingTop;	// 40 = 0x28
	XXStruct_tp$7nC m_paddingLeft;	// 48 = 0x30
	XXStruct_tp$7nC m_paddingBottom;	// 56 = 0x38
	XXStruct_tp$7nC m_paddingRight;	// 64 = 0x40
	BOOL m_explicitlySpecified;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x32f7bbf5; S=0x32f7bc05; @synthesize=m_explicitlySpecified
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;	// G=0x32f7bb69; S=0x32f7af71; @synthesize=m_h
@property(retain, nonatomic) NSString *name;	// G=0x32f7bb05; S=0x32f7aeb9; @synthesize=m_name
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;	// G=0x32f7bbbd; S=0x32f7afe9; @synthesize=m_paddingBottom
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;	// G=0x32f7bba1; S=0x32f7afc1; @synthesize=m_paddingLeft
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;	// G=0x32f7bbd9; S=0x32f7b011; @synthesize=m_paddingRight
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;	// G=0x32f7bb85; S=0x32f7af99; @synthesize=m_paddingTop
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;	// G=0x32f7bb4d; S=0x32f7af49; @synthesize=m_w
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;	// G=0x32f7bb15; S=0x32f7aef9; @synthesize=m_x
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;	// G=0x32f7bb31; S=0x32f7af21; @synthesize=m_y
+ (id)geometry;	// 0x32f7a121
+ (id)geometryWithRect:(CGRect)rect;	// 0x32f7a169
- (id)init;	// 0x32f7a335
- (id)initWithCoder:(id)coder;	// 0x32f7a3c5
- (id)initWithName:(id)name rect:(XXStruct_bVmAfD)rect padding:(XXStruct_bVmAfD)padding;	// 0x32f7a20d
- (id)copyWithZone:(NSZone *)zone;	// 0x32f7a89d
- (void)dealloc;	// 0x32f7a379
- (id)description;	// 0x32f7b039
- (void)encodeWithCoder:(id)coder;	// 0x32f7a641
// declared property getter: - (BOOL)explicitlySpecified;	// 0x32f7bbf5
- (CGRect)frame;	// 0x32f7b489
- (CGRect)frameWithContainingFrame:(CGRect)containingFrame;	// 0x32f7b4bd
// declared property getter: - (XXStruct_tp$7nC)h;	// 0x32f7bb69
- (BOOL)isEqual:(id)equal;	// 0x32f7ab45
// declared property getter: - (id)name;	// 0x32f7bb05
- (id)overrideGeometry:(id)geometry;	// 0x32f7b7dd
- (CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;	// 0x32f7b5fd
- (CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;	// 0x32f7b669
// declared property getter: - (XXStruct_tp$7nC)paddingBottom;	// 0x32f7bbbd
// declared property getter: - (XXStruct_tp$7nC)paddingLeft;	// 0x32f7bba1
// declared property getter: - (XXStruct_tp$7nC)paddingRight;	// 0x32f7bbd9
// declared property getter: - (XXStruct_tp$7nC)paddingTop;	// 0x32f7bb85
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x32f7bc05
// declared property setter: - (void)setH:(XXStruct_tp$7nC)h;	// 0x32f7af71
// declared property setter: - (void)setName:(id)name;	// 0x32f7aeb9
// declared property setter: - (void)setPaddingBottom:(XXStruct_tp$7nC)bottom;	// 0x32f7afe9
// declared property setter: - (void)setPaddingLeft:(XXStruct_tp$7nC)left;	// 0x32f7afc1
// declared property setter: - (void)setPaddingRight:(XXStruct_tp$7nC)right;	// 0x32f7b011
// declared property setter: - (void)setPaddingTop:(XXStruct_tp$7nC)top;	// 0x32f7af99
// declared property setter: - (void)setW:(XXStruct_tp$7nC)w;	// 0x32f7af49
// declared property setter: - (void)setX:(XXStruct_tp$7nC)x;	// 0x32f7aef9
// declared property setter: - (void)setY:(XXStruct_tp$7nC)y;	// 0x32f7af21
- (id)shortDescription;	// 0x32f7b2f1
- (BOOL)usesPercentages;	// 0x32f7b9e1
// declared property getter: - (XXStruct_tp$7nC)w;	// 0x32f7bb4d
// declared property getter: - (XXStruct_tp$7nC)x;	// 0x32f7bb15
// declared property getter: - (XXStruct_tp$7nC)y;	// 0x32f7bb31
@end

