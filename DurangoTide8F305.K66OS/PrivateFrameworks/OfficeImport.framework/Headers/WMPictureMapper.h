/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"

@class WDPicture;

__attribute__((visibility("hidden")))
@interface WMPictureMapper : CMDrawableMapper {
@private
	WDPicture *wdPicture;	// 80 = 0x50
}
- (id)initWithWDPicture:(id)wdpicture parent:(id)parent;	// 0x344677bd
- (void)mapAt:(id)at withState:(id)state;	// 0x34461b39
- (void)mapBounds;	// 0x34461cb9
- (void)setBoundingBox;	// 0x34467899
@end

