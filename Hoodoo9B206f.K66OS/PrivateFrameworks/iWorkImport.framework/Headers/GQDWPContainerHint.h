/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPContainerHint : NSObject {
@private
	long mPageIndex;	// 4 = 0x4
	long mCIndex;	// 8 = 0x8
	long mSIndex;	// 12 = 0xc
	long mLIndex;	// 16 = 0x10
	long mAnchorLocation;	// 20 = 0x14
	double mAttachmentPosition;	// 24 = 0x18
	CGRect mFrame;	// 32 = 0x20
}
- (id)initWithPageIndex:(long)pageIndex cIndex:(long)index sIndex:(long)index3 lIndex:(long)index4 anchorLocation:(long)location frame:(CGRect)frame;	// 0x3400935d
- (long)anchorLocation;	// 0x340092d1
- (double)attachmentPosition;	// 0x340092e1
- (long)cIndex;	// 0x340092a1
- (CGRect)frame;	// 0x340092f9
- (long)lIndex;	// 0x340092c1
- (long)pageIndex;	// 0x34009291
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3400943d
- (long)sIndex;	// 0x340092b1
@end

