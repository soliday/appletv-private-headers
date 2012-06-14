/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoAsset : ATVDotMacAsset {
@private
	long _duration;	// 60 = 0x3c
	NSString *_mediaURL;	// 64 = 0x40
	NSString *_description;	// 68 = 0x44
}
@property(assign) long duration;	// G=0x365699b1; S=0x365699c1; converted property
@property(retain) NSString *mediaURL;	// G=0x36569815; S=0x365698e1; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x3656975d
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x36569b8d
- (void)dealloc;	// 0x365697b5
// converted property getter: - (long)duration;	// 0x365699b1
- (BOOL)hasVideoContent;	// 0x36569b89
- (id)mediaDescription;	// 0x365699d1
- (id)mediaType;	// 0x36569b6d
// converted property getter: - (id)mediaURL;	// 0x36569815
- (void)setDescription:(id)description;	// 0x36569a9d
// converted property setter: - (void)setDuration:(long)duration;	// 0x365699c1
// converted property setter: - (void)setMediaURL:(id)url;	// 0x365698e1
@end

