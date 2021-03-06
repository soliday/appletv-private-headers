/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEOTileRequester, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileRequestContext : NSObject {
	GEOTileKeyList *_fullList;	// 4 = 0x4
	GEOTileKeyList *_networkList;	// 8 = 0x8
	GEOTileRequester *_tileRequester;	// 12 = 0xc
}
@property(retain, nonatomic) GEOTileKeyList *fullList;	// G=0x314412b5; S=0x314412c5; @synthesize=_fullList
@property(retain, nonatomic) GEOTileKeyList *networkList;	// G=0x314412e9; S=0x314412f9; @synthesize=_networkList
@property(retain, nonatomic) GEOTileRequester *tileRequester;	// G=0x3144131d; S=0x3144132d; @synthesize=_tileRequester
- (void)dealloc;	// 0x31441249
// declared property getter: - (id)fullList;	// 0x314412b5
// declared property getter: - (id)networkList;	// 0x314412e9
// declared property setter: - (void)setFullList:(id)list;	// 0x314412c5
// declared property setter: - (void)setNetworkList:(id)list;	// 0x314412f9
// declared property setter: - (void)setTileRequester:(id)requester;	// 0x3144132d
// declared property getter: - (id)tileRequester;	// 0x3144131d
@end

