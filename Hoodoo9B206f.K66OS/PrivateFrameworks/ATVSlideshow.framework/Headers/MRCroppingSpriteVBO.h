/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MRCroppingSpriteVBO : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	CGSize mHalfSize;	// 12 = 0xc
	float mRotation;	// 20 = 0x14
	CGRect mInnerRect;	// 24 = 0x18
	CGRect mOuterRect;	// 40 = 0x28
	BOOL mPreservesImageAspectRatio;	// 56 = 0x38
	BOOL mHitIsActive;	// 57 = 0x39
	BOOL mNeedsInSpriteCoordinates;	// 58 = 0x3a
	CGSize mSpriteCoordinatesFactor;	// 60 = 0x3c
	CGPoint mSpriteCoordinatesOffset;	// 68 = 0x44
	unsigned char mMeshType;	// 76 = 0x4c
	unsigned mVBO;	// 80 = 0x50
	unsigned char mMiddleOffset;	// 84 = 0x54
	unsigned char mOuterOffset;	// 85 = 0x55
	unsigned char mNumberOfVertices;	// 86 = 0x56
	BOOL mPositionWasUpdated;	// 87 = 0x57
	BOOL mRectsWereUpdated;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) CGSize halfSize;	// G=0x30a1e8cd; @synthesize=mHalfSize
@property(assign, nonatomic) BOOL hitIsActive;	// G=0x30a1e961; S=0x30a1e971; @synthesize=mHitIsActive
@property(assign, nonatomic) CGRect innerRect;	// G=0x30a1e8f9; S=0x30a1d235; @synthesize=mInnerRect
@property(assign, nonatomic) unsigned char meshType;	// G=0x30a1ea01; S=0x30a1ea11; @synthesize=mMeshType
@property(assign, nonatomic) BOOL needsInSpriteCoordinates;	// G=0x30a1e981; S=0x30a1e991; @synthesize=mNeedsInSpriteCoordinates
@property(assign, nonatomic) CGRect outerRect;	// G=0x30a1e91d; S=0x30a1d351; @synthesize=mOuterRect
@property(readonly, assign, nonatomic) CGPoint position;	// G=0x30a1e8b1; @synthesize=mPosition
@property(assign, nonatomic) BOOL preservesImageAspectRatio;	// G=0x30a1e941; S=0x30a1e951; @synthesize=mPreservesImageAspectRatio
@property(readonly, assign, nonatomic) float rotation;	// G=0x30a1e8e9; @synthesize=mRotation
@property(assign, nonatomic) CGSize spriteCoordinatesFactor;	// G=0x30a1e9a1; S=0x30a1e9bd; @synthesize=mSpriteCoordinatesFactor
@property(assign, nonatomic) CGPoint spriteCoordinatesOffset;	// G=0x30a1e9d1; S=0x30a1e9ed; @synthesize=mSpriteCoordinatesOffset
- (id)init;	// 0x30a1ce61
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation context:(id)context;	// 0x30a1cf19
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect context:(id)context;	// 0x30a1cf69
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect outerRect:(CGRect)rect5 context:(id)context;	// 0x30a1cfe9
- (void)fakeRenderInContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1d0f5
- (void)getOpaquePosition:(CGPoint *)position andHalfSize:(CGSize *)size;	// 0x30a1d475
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix;	// 0x30a1e781
// declared property getter: - (CGSize)halfSize;	// 0x30a1e8cd
- (BOOL)hitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30a1e64d
// declared property getter: - (BOOL)hitIsActive;	// 0x30a1e961
// declared property getter: - (CGRect)innerRect;	// 0x30a1e8f9
// declared property getter: - (unsigned char)meshType;	// 0x30a1ea01
// declared property getter: - (BOOL)needsInSpriteCoordinates;	// 0x30a1e981
// declared property getter: - (CGRect)outerRect;	// 0x30a1e91d
// declared property getter: - (CGPoint)position;	// 0x30a1e8b1
// declared property getter: - (BOOL)preservesImageAspectRatio;	// 0x30a1e941
- (void)renderImageInner:(id)inner inContext:(id)context;	// 0x30a1e161
- (void)renderImageMiddle:(id)middle inContext:(id)context;	// 0x30a1e2b9
- (void)renderImageOuter:(id)outer inContext:(id)context;	// 0x30a1e48d
- (void)reset;	// 0x30a1d089
// declared property getter: - (float)rotation;	// 0x30a1e8e9
// declared property setter: - (void)setHitIsActive:(BOOL)active;	// 0x30a1e971
// declared property setter: - (void)setInnerRect:(CGRect)rect;	// 0x30a1d235
// declared property setter: - (void)setMeshType:(unsigned char)type;	// 0x30a1ea11
// declared property setter: - (void)setNeedsInSpriteCoordinates:(BOOL)spriteCoordinates;	// 0x30a1e991
// declared property setter: - (void)setOuterRect:(CGRect)rect;	// 0x30a1d351
// declared property setter: - (void)setPreservesImageAspectRatio:(BOOL)ratio;	// 0x30a1e951
// declared property setter: - (void)setSpriteCoordinatesFactor:(CGSize)factor;	// 0x30a1e9bd
// declared property setter: - (void)setSpriteCoordinatesOffset:(CGPoint)offset;	// 0x30a1e9ed
// declared property getter: - (CGSize)spriteCoordinatesFactor;	// 0x30a1e9a1
// declared property getter: - (CGPoint)spriteCoordinatesOffset;	// 0x30a1e9d1
- (void)updateVBOsInContext:(id)context;	// 0x30a1d5f1
@end

