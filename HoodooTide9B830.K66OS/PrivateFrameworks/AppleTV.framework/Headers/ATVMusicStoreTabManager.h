/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabManager : BRSingleton {
@private
	NSMutableDictionary *_tabsContainer;	// 4 = 0x4
	NSString *_savedTabsFilePath;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x328e26a5
+ (id)singleton;	// 0x328e2695
- (id)init;	// 0x328e26b5
- (void)_loadTabs;	// 0x328e28b9
- (void)_saveTabs;	// 0x328e2ae9
- (id)_tabs;	// 0x328e2891
- (void)dealloc;	// 0x328e2749
- (BOOL)preferredSegmentExistsForTabName:(id)tabName;	// 0x328e2845
- (id)preferredSegmentNameForTabName:(id)tabName;	// 0x328e27a9
- (BOOL)segmentNamed:(id)named isPreferredSegmentForTabName:(id)tabName;	// 0x328e2865
- (void)setPreferredSegmentName:(id)name forTabName:(id)tabName;	// 0x328e27d5
@end

