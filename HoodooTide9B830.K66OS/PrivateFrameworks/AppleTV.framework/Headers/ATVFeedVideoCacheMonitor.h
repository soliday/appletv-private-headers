/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSAttributedString, BRMenuItem, BRPosterControl;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoCacheMonitor : NSObject {
@private
	NSAttributedString *_posterOriginalText;	// 4 = 0x4
	BOOL _posterAlwaysShowTitlesOriginal;	// 8 = 0x8
	BRMenuItem *_menuItem;	// 12 = 0xc
	BRPosterControl *_poster;	// 16 = 0x10
	NSArray *_assetIDs;	// 20 = 0x14
}
@property(readonly, assign) NSArray *assetIDs;	// G=0x32ad16d1; @synthesize=_assetIDs
@property(readonly, assign) BRMenuItem *menuItem;	// G=0x32ad16b1; @synthesize=_menuItem
@property(readonly, assign) BRPosterControl *poster;	// G=0x32ad16c1; @synthesize=_poster
- (id)initWithMenuItem:(id)menuItem assetIDs:(id)ids;	// 0x32ad14d9
- (id)initWithPoster:(id)poster assetIDs:(id)ids;	// 0x32ad1555
- (BOOL)_assetWithAssetIDIsLoading;	// 0x32ad19ad
- (void)_cacheManagerStateChanged:(id)changed;	// 0x32ad1ad1
- (id)_initWithObject:(id)object assetIDs:(id)ids;	// 0x32ad16e1
- (void)_itemUpdated:(id)updated;	// 0x32ad1b05
- (void)_updateMenuItemText;	// 0x32ad17e9
- (void)_updatePosterText;	// 0x32ad1881
// declared property getter: - (id)assetIDs;	// 0x32ad16d1
- (void)dealloc;	// 0x32ad1621
// declared property getter: - (id)menuItem;	// 0x32ad16b1
// declared property getter: - (id)poster;	// 0x32ad16c1
@end

