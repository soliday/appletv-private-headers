/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacAlbumDelegate : ATVDotMacParserDelegate {
@private
	NSString *_keyImageID;	// 24 = 0x18
	NSArray *_imageOrder;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDictionary *_startSelectors;	// 36 = 0x24
	NSDictionary *_endSelectors;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x330c7e1d; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x330c8135; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x330c7e0d; converted property
- (id)init;	// 0x330c7689
- (void)__atv_end_dotmac_keyImagePath;	// 0x330c7aa1
- (void)__atv_end_dotmac_largeImagePath;	// 0x330c7c01
- (void)__atv_end_dotmac_moviePath;	// 0x330c7d41
- (void)__atv_end_dotmac_title;	// 0x330c7bc1
- (void)__atv_end_dotmac_userHidden;	// 0x330c7c81
- (void)__atv_end_dotmac_useritemguid;	// 0x330c7cc1
- (void)__atv_end_dotmac_userorder;	// 0x330c7ae5
- (void)__atv_end_dotmac_videoDuration;	// 0x330c7d81
- (void)__atv_end_dotmac_viewIdentifier;	// 0x330c7b41
- (void)__atv_end_dotmac_webImagePath;	// 0x330c7c41
- (void)__atv_end_iphoto_photoDate;	// 0x330c7d01
- (void)__atv_end_title;	// 0x330c7b81
- (void)__atv_end_updated;	// 0x330c7dc1
- (id)albumID;	// 0x330c80ed
- (id)albumName;	// 0x330c8145
- (void)dealloc;	// 0x330c7a05
// converted property getter: - (id)endSelectors;	// 0x330c7e1d
- (int)imageCount;	// 0x330c80c5
- (id)itemInfos;	// 0x330c7e2d
- (id)keyImageInfo;	// 0x330c8009
// converted property getter: - (id)modDate;	// 0x330c8135
- (id)sortedItemInfos;	// 0x330c7fb1
// converted property getter: - (id)startSelectors;	// 0x330c7e0d
@end

