/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewController.h"
#import "AppleTV-Structs.h"

@class ATVMerchant, ATVFeedSearchResultsLoader, NSDictionary, NSString, NSMutableDictionary, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
@private
	ATVMerchant *_merchant;	// 108 = 0x6c
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 112 = 0x70
	NSString *_baseURLString;	// 116 = 0x74
	NSDictionary *_results;	// 120 = 0x78
	NSMutableDictionary *_headerCache;	// 124 = 0x7c
	ATVFeedDocument *_resultsFeedDocument;	// 128 = 0x80
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x32ac9549; S=0x32ac9559; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x32ac88f9
- (id)initWithFeedElement:(id)feedElement;	// 0x32ac85d5
- (id)_elementAtIndexPath:(id)indexPath;	// 0x32ac9669
- (id)_indexPathForFirstItem;	// 0x32ac9a41
- (id)_itemAtIndexPath:(id)indexPath;	// 0x32ac9789
- (long)_numberOfRowsInSection:(long)section;	// 0x32ac992d
- (long)_numberOfSections;	// 0x32ac987d
- (BOOL)_search:(id)search;	// 0x32ac8dc5
- (void)_searchResultsReady:(id)ready;	// 0x32ac957d
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x32ac8edd
- (void)dealloc;	// 0x32ac8c91
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32ac941d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x32ac9379
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32ac90dd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32ac919d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x32ac91b1
- (long)numberOfSectionsInList:(id)list;	// 0x32ac918d
// declared property getter: - (id)resultsFeedDocument;	// 0x32ac9549
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x32ac9559
@end

