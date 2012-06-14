/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsProviderForAccount : ATVFlickrProvider {
@private
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x328b943d
- (id)initWithAccount:(id)account;	// 0x328b9485
- (id)_data;	// 0x328b96c9
- (BOOL)_handlesObject:(id)object;	// 0x328b96e9
- (void)dealloc;	// 0x328b95a9
- (id)hashForDataAtIndex:(long)index;	// 0x328b9669
@end

