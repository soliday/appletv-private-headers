/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODILinear.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ODIImageLinear : ODILinear {
@private
	NSString *mImagePresentationName;	// 32 = 0x20
}
- (id)initWithImagePresentationName:(id)imagePresentationName state:(id)state;	// 0x34e37119
- (void)dealloc;	// 0x34e370cd
- (void)mapPoint:(id)point bounds:(CGRect)bounds;	// 0x34e36db9
@end

