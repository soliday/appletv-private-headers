/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRAggregateDataStore : BRDataStore {
@private
	NSArray *_dataStores;	// 40 = 0x28
}
- (id)initWithDataStores:(id)dataStores;	// 0x32a788bd
- (void)dealloc;	// 0x32a78955
- (id)loadData;	// 0x32a789f1
- (void)purge;	// 0x32a789a1
- (void)setUseLocalProvidersOnly:(BOOL)only;	// 0x32a78a8d
- (BOOL)storeAppliesToObject:(id)object;	// 0x32a78b0d
@end

