/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAnimationPath;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {
	BOOL _isTriggered;	// 4 = 0x4
	NSObject<MPAnimationSupport> *_parentObject;	// 8 = 0x8
	MCAnimationPath *_animationPath;	// 12 = 0xc
}
@property(retain) MCAnimationPath *animationPath;	// G=0x32019239; S=0x32019c61; converted property
@property(assign) BOOL isTriggered;	// G=0x32017281; S=0x32017291; 
@property(retain) id parent;	// G=0x3201732d; S=0x32019915; converted property
+ (id)animationPath;	// 0x32016fc9
- (id)init;	// 0x3201700d
- (id)initWithCoder:(id)coder;	// 0x32017095
- (id)animatedKey;	// 0x320199cd
- (id)animatedParent;	// 0x32019971
// converted property getter: - (id)animationPath;	// 0x32019239
- (void)cleanup;	// 0x32019cd1
- (id)copyWithZone:(NSZone *)zone;	// 0x32017159
- (void)dealloc;	// 0x32017105
- (id)description;	// 0x320171c1
- (void)encodeWithCoder:(id)coder;	// 0x32017059
// declared property getter: - (BOOL)isTriggered;	// 0x32017281
- (id)key;	// 0x32017235
// converted property getter: - (id)parent;	// 0x3201732d
- (id)parentDocument;	// 0x32019a49
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x32019c61
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x32017291
// converted property setter: - (void)setParent:(id)parent;	// 0x32019915
@end

