/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MRAsset : NSObject {
	NSString *mPath;	// 4 = 0x4
}
@property(copy) NSString *path;	// G=0x3435f3ad; S=0x3435f3c1; @synthesize=mPath
+ (id)mrAssetWithPath:(id)path;	// 0x3435f2e5
- (CGImageRef)CGImageForSize:(CGSize)size;	// 0x3435f3a9
- (void)dealloc;	// 0x3435f345
// declared property getter: - (id)path;	// 0x3435f3ad
// declared property setter: - (void)setPath:(id)path;	// 0x3435f3c1
- (id)workingPath;	// 0x3435f389
- (id)workingPathForSize:(CGSize)size;	// 0x3435f399
@end

