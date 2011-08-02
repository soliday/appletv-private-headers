/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OADImageRecolorInfoClient.h"
#import "OADClient.h"

@class OADImageRecolorInfo, PDAnimationInfo, PDPlaceholder;

__attribute__((visibility("hidden")))
@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
@private
	OADImageRecolorInfo *mImageRecolorInfo;	// 4 = 0x4
	PDPlaceholder *mPlaceholder;	// 8 = 0x8
	BOOL mIsComment;	// 12 = 0xc
	PDAnimationInfo *mAnimationInfo;	// 16 = 0x10
	BOOL mHasOleChart;	// 20 = 0x14
	int mInheritedTextStylePlaceholderType;	// 24 = 0x18
}
@property(retain) id animationInfo;	// G=0x32d16629; S=0x32d16649; converted property
@property(assign) BOOL hasOleChart;	// G=0x32d16639; S=0x32c7a0d9; converted property
@property(retain) id imageRecolorInfo;	// G=0x32d165e5; S=0x32ba0821; converted property
@property(assign, nonatomic) int inheritedTextStylePlaceholderType;	// G=0x32b98d65; S=0x32ba6181; @synthesize=mInheritedTextStylePlaceholderType
@property(assign) BOOL isComment;	// G=0x32d165f5; S=0x32d16605; converted property
@property(retain) id placeholder;	// G=0x32b903c1; S=0x32b8d4f5; converted property
- (id)init;	// 0x32b89415
// converted property getter: - (id)animationInfo;	// 0x32d16629
- (CGRect)bounds;	// 0x32d165cd
- (void)dealloc;	// 0x32b8f24d
- (BOOL)hasAnimationInfo;	// 0x32d16615
- (BOOL)hasBounds;	// 0x32b1a461
// converted property getter: - (BOOL)hasOleChart;	// 0x32d16639
- (BOOL)hasPlaceholder;	// 0x32b903ad
// converted property getter: - (id)imageRecolorInfo;	// 0x32d165e5
// declared property getter: - (int)inheritedTextStylePlaceholderType;	// 0x32b98d65
// converted property getter: - (BOOL)isComment;	// 0x32d165f5
// converted property getter: - (id)placeholder;	// 0x32b903c1
// converted property setter: - (void)setAnimationInfo:(id)info;	// 0x32d16649
// converted property setter: - (void)setHasOleChart:(BOOL)chart;	// 0x32c7a0d9
// converted property setter: - (void)setImageRecolorInfo:(id)info;	// 0x32ba0821
// declared property setter: - (void)setInheritedTextStylePlaceholderType:(int)type;	// 0x32ba6181
// converted property setter: - (void)setIsComment:(BOOL)comment;	// 0x32d16605
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x32b8d4f5
@end
