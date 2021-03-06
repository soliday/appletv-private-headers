/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, ATVFeedDocument, ATVMerchant, ATVURLDocument, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchResultsLoader : NSObject {
@private
	ATVURLDocument *_document;	// 4 = 0x4
	NSString *_baseURLString;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	NSDictionary *_results;	// 20 = 0x14
	ATVFeedDocument *_resultsFeedDocument;	// 24 = 0x18
}
@property(readonly, assign) NSDictionary *results;	// G=0x32aca38d; @synthesize=_results
@property(readonly, assign) ATVFeedDocument *resultsFeedDocument;	// G=0x32aca39d; @synthesize=_resultsFeedDocument
@property(readonly, assign) NSString *searchTerm;	// G=0x32aca37d; @synthesize=_searchTerm
- (id)initWithSearchTerm:(id)searchTerm baseURLString:(id)string merchant:(id)merchant;	// 0x32ac9aad
- (id)_escapedSearchStringForString:(id)string;	// 0x32ac9ca1
- (void)_loadResultsFromURL:(id)url;	// 0x32ac9d85
- (void)_searchRequestProcessed:(id)processed;	// 0x32ac9f2d
- (void)_setDocument:(id)document;	// 0x32ac9e81
- (void)dealloc;	// 0x32ac9b3d
- (void)load;	// 0x32ac9c1d
// declared property getter: - (id)results;	// 0x32aca38d
// declared property getter: - (id)resultsFeedDocument;	// 0x32aca39d
// declared property getter: - (id)searchTerm;	// 0x32aca37d
@end

