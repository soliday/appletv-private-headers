/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class BRImage;

@interface BRPosterControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BRImage *_defaultImage;	// 4 = 0x4
}
+ (id)factory;	// 0x329b8a39
- (id)init;	// 0x329b8a71
- (id)_posterForGridFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x329b8e85
- (id)_posterForShelfFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x329b8ed1
- (id)_posterFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x329b8f29
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x329b8af9
- (void)dealloc;	// 0x329b8aad
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x329b8d59
- (void)setDefaultImage:(id)image;	// 0x329b8e45
@end

