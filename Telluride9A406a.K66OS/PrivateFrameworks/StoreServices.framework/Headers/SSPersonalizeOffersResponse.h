/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary;

@interface SSPersonalizeOffersResponse : NSObject <SSCoding> {
@private
	NSMutableDictionary *_actionDisplayNames;	// 4 = 0x4
	NSMutableDictionary *_actionParameters;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	NSMutableDictionary *_priceDisplayNames;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSArray *personalizedItems;	// G=0x3157c461; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3157c705
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3157c7d1
- (void)_setPersonalizedItems:(id)items;	// 0x3157c6c1
- (id)actionDisplayNameForItemType:(id)itemType;	// 0x3157c419
- (id)actionParametersForItemIdentifier:(id)itemIdentifier;	// 0x3157c4e1
- (id)copyPropertyListEncoding;	// 0x3157c80d
- (void *)copyXPCEncoding;	// 0x3157c8b1
- (void)dealloc;	// 0x3157c391
// declared property getter: - (id)personalizedItems;	// 0x3157c461
- (id)priceDisplayForItemType:(id)itemType;	// 0x3157c499
- (void)setActionDisplayNameString:(id)string forItemType:(id)itemType;	// 0x3157c529
- (void)setActionParameters:(id)parameters forItemIdentifier:(id)itemIdentifier;	// 0x3157c5b1
- (void)setPriceDisplayString:(id)string forItemType:(id)itemType;	// 0x3157c639
@end
