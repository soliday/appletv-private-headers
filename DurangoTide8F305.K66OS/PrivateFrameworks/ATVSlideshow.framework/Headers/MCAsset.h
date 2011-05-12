/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString, NSMutableSet;

@interface MCAsset : MCObject {
	NSString *mPath;	// 12 = 0xc
	NSMutableSet *mTexts;	// 16 = 0x10
}
@property(readonly, assign) BOOL isInUse;	// G=0x3331ed95; 
@property(copy) NSString *path;	// G=0x3331ef05; S=0x3331ef1d; @synthesize=mPath
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3331ec75
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3331ee01
- (void)demolish;	// 0x3331ece5
- (void)forgetText:(id)text;	// 0x3331ede1
- (id)imprint;	// 0x3331ed39
// declared property getter: - (BOOL)isInUse;	// 0x3331ed95
- (void)learnText:(id)text;	// 0x3331edc1
// declared property getter: - (id)path;	// 0x3331ef05
// declared property setter: - (void)setPath:(id)path;	// 0x3331ef1d
@end
