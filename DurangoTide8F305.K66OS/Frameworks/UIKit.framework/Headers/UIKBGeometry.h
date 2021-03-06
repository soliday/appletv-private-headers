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
	BOOL m_explicit;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL explicit;	// G=0x31f86fc1; S=0x32201efd; @synthesize=m_explicit
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;	// G=0x32201f6d; S=0x32201e5d; @synthesize=m_h
@property(retain, nonatomic) NSString *name;	// G=0x32201fcd; S=0x32202019; @synthesize=m_name
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;	// G=0x32201f25; S=0x32201ebd; @synthesize=m_paddingBottom
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;	// G=0x32201f3d; S=0x32201e9d; @synthesize=m_paddingLeft
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;	// G=0x32201f0d; S=0x32201edd; @synthesize=m_paddingRight
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;	// G=0x32201f55; S=0x32201e7d; @synthesize=m_paddingTop
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;	// G=0x32201f85; S=0x32201e3d; @synthesize=m_w
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;	// G=0x32201fb5; S=0x32201dfd; @synthesize=m_x
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;	// G=0x32201f9d; S=0x32201e1d; @synthesize=m_y
+ (id)geometry;	// 0x322022ad
+ (id)geometryWithRect:(CGRect)rect;	// 0x32202bbd
- (id)init;	// 0x32201fdd
- (id)initWithCoder:(id)coder;	// 0x32202979
- (id)initWithName:(id)name rect:(XXStruct_bVmAfD)rect padding:(XXStruct_bVmAfD)padding;	// 0x32055b29
- (id)copyWithZone:(NSZone *)zone;	// 0x322024d5
- (void)dealloc;	// 0x32202265
- (id)description;	// 0x32202661
- (void)encodeWithCoder:(id)coder;	// 0x32202051
// declared property getter: - (BOOL)explicit;	// 0x31f86fc1
- (CGRect)frame;	// 0x32056821
- (CGRect)frameWithContainingFrame:(CGRect)containingFrame;	// 0x31f9c48d
// declared property getter: - (XXStruct_tp$7nC)h;	// 0x32201f6d
// declared property getter: - (id)name;	// 0x32201fcd
- (id)overrideGeometry:(id)geometry;	// 0x322022ed
- (CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;	// 0x31f9c42d
- (CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;	// 0x31f86e39
// declared property getter: - (XXStruct_tp$7nC)paddingBottom;	// 0x32201f25
// declared property getter: - (XXStruct_tp$7nC)paddingLeft;	// 0x32201f3d
// declared property getter: - (XXStruct_tp$7nC)paddingRight;	// 0x32201f0d
// declared property getter: - (XXStruct_tp$7nC)paddingTop;	// 0x32201f55
// declared property setter: - (void)setExplicit:(BOOL)anExplicit;	// 0x32201efd
// declared property setter: - (void)setH:(XXStruct_tp$7nC)h;	// 0x32201e5d
// declared property setter: - (void)setName:(id)name;	// 0x32202019
// declared property setter: - (void)setPaddingBottom:(XXStruct_tp$7nC)bottom;	// 0x32201ebd
// declared property setter: - (void)setPaddingLeft:(XXStruct_tp$7nC)left;	// 0x32201e9d
// declared property setter: - (void)setPaddingRight:(XXStruct_tp$7nC)right;	// 0x32201edd
// declared property setter: - (void)setPaddingTop:(XXStruct_tp$7nC)top;	// 0x32201e7d
// declared property setter: - (void)setW:(XXStruct_tp$7nC)w;	// 0x32201e3d
// declared property setter: - (void)setX:(XXStruct_tp$7nC)x;	// 0x32201dfd
// declared property setter: - (void)setY:(XXStruct_tp$7nC)y;	// 0x32201e1d
// declared property getter: - (XXStruct_tp$7nC)w;	// 0x32201f85
// declared property getter: - (XXStruct_tp$7nC)x;	// 0x32201fb5
// declared property getter: - (XXStruct_tp$7nC)y;	// 0x32201f9d
@end

