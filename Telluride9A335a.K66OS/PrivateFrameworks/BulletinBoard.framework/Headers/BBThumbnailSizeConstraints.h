/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface BBThumbnailSizeConstraints : NSObject <NSCoding> {
@private
	int _constraintType;	// 4 = 0x4
	float _fixedWidth;	// 8 = 0x8
	float _fixedHeight;	// 12 = 0xc
	float _fixedDimension;	// 16 = 0x10
	float _minAspectRatio;	// 20 = 0x14
	float _maxAspectRatio;	// 24 = 0x18
	float _thumbnailScale;	// 28 = 0x1c
}
@property(assign, nonatomic) int constraintType;	// G=0x34cd0475; S=0x34cd0485; @synthesize=_constraintType
@property(assign, nonatomic) float fixedDimension;	// G=0x34cd04d5; S=0x34cd04e5; @synthesize=_fixedDimension
@property(assign, nonatomic) float fixedHeight;	// G=0x34cd04b5; S=0x34cd04c5; @synthesize=_fixedHeight
@property(assign, nonatomic) float fixedWidth;	// G=0x34cd0495; S=0x34cd04a5; @synthesize=_fixedWidth
@property(assign, nonatomic) float maxAspectRatio;	// G=0x34cd0515; S=0x34cd0525; @synthesize=_maxAspectRatio
@property(assign, nonatomic) float minAspectRatio;	// G=0x34cd04f5; S=0x34cd0505; @synthesize=_minAspectRatio
@property(assign, nonatomic) float thumbnailScale;	// G=0x34cd0535; S=0x34cd0545; @synthesize=_thumbnailScale
- (id)initWithCoder:(id)coder;	// 0x34cd0055
- (BOOL)areReasonable;	// 0x34cd02d9
// declared property getter: - (int)constraintType;	// 0x34cd0475
- (void)encodeWithCoder:(id)coder;	// 0x34cd01ad
// declared property getter: - (float)fixedDimension;	// 0x34cd04d5
// declared property getter: - (float)fixedHeight;	// 0x34cd04b5
// declared property getter: - (float)fixedWidth;	// 0x34cd0495
// declared property getter: - (float)maxAspectRatio;	// 0x34cd0515
// declared property getter: - (float)minAspectRatio;	// 0x34cd04f5
// declared property setter: - (void)setConstraintType:(int)type;	// 0x34cd0485
// declared property setter: - (void)setFixedDimension:(float)dimension;	// 0x34cd04e5
// declared property setter: - (void)setFixedHeight:(float)height;	// 0x34cd04c5
// declared property setter: - (void)setFixedWidth:(float)width;	// 0x34cd04a5
// declared property setter: - (void)setMaxAspectRatio:(float)ratio;	// 0x34cd0525
// declared property setter: - (void)setMinAspectRatio:(float)ratio;	// 0x34cd0505
// declared property setter: - (void)setThumbnailScale:(float)scale;	// 0x34cd0545
// declared property getter: - (float)thumbnailScale;	// 0x34cd0535
@end

