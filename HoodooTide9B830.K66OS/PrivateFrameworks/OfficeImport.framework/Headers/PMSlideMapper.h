/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class PDSlideBase;

__attribute__((visibility("hidden")))
@interface PMSlideMapper : CMMapper {
@private
	PDSlideBase *mSlide;	// 8 = 0x8
	CGRect mRect;	// 12 = 0xc
}
- (id)initWithPDSlide:(id)pdslide slideRect:(CGRect)rect parent:(id)parent;	// 0x3116e021
- (id)defaultTheme;	// 0x310e953d
- (void)mapAt:(id)at withState:(id)state;	// 0x3116e081
- (void)mapBackgroundAt:(id)at recursive:(BOOL)recursive withState:(id)state;	// 0x3116e5f9
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x3116eeb9
- (void)mapMasterGraphicsAt:(id)at withState:(id)state;	// 0x3116ed8d
- (void)mapMasterSlideAt:(id)at withState:(id)state;	// 0x3116e475
- (id)slideName;	// 0x313dc211
- (CGRect)slideRect;	// 0x313dc1ed
- (id)styleMatrix;	// 0x312b2d2d
@end

