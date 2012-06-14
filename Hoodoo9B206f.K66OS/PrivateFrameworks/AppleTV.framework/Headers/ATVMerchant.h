/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVReadWriteFeedResource.h"
#import "BRMerchant.h"

@class ATVPreferenceFeedResource, ATVDictionaryFeedResource;

@interface ATVMerchant : BRMerchant <ATVReadWriteFeedResource> {
@private
	ATVPreferenceFeedResource *_preferenceResource;	// 8 = 0x8
	ATVDictionaryFeedResource *_sessionResource;	// 12 = 0xc
}
@property(readonly, assign) ATVDictionaryFeedResource *sessionResource;	// G=0x365d78c1; @synthesize=_sessionResource
- (id)initWithIdentifier:(id)identifier;	// 0x365d72fd
- (BOOL)assignToObject:(id)object;	// 0x365d74c1
- (void)clearFeedResources;	// 0x365d78a1
- (void)dealloc;	// 0x365d7461
- (id)evaluatePlist:(id)plist;	// 0x365d7651
- (id)feedResourceNamed:(id)named;	// 0x365d7675
- (id)localizedStringForKey:(id)key;	// 0x365d7615
- (id)rootController;	// 0x365d7671
// declared property getter: - (id)sessionResource;	// 0x365d78c1
- (void)setFeedResource:(id)resource named:(id)named;	// 0x365d7881
@end

