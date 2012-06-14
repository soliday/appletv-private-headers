/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class NSString, BRMerchant;

@interface ATVMusicStoreSearchAgent : ATVSearchAgent {
@private
	NSString *_baseURLString;	// 12 = 0xc
	BRMerchant *_merchant;	// 16 = 0x10
}
- (id)initWithBaseURLString:(id)baseURLString merchant:(id)merchant;	// 0x328e0be1
- (void)_loadSearchURL:(id)url forSearchTerm:(id)searchTerm;	// 0x328e0e79
- (void)_searchComplete:(id)complete forSearchTerm:(id)searchTerm;	// 0x328e1139
- (void)_searchRequestProcessed:(id)processed;	// 0x328e0fb9
- (void)dealloc;	// 0x328e0c55
- (BOOL)isNetworkDependent;	// 0x328e0e75
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x328e0ce5
- (BOOL)showRecentSearches;	// 0x328e0e71
@end

