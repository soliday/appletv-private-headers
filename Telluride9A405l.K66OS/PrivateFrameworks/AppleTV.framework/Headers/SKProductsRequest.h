/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SKRequest.h"

@protocol SKProductsRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKProductsRequest : SKRequest {
@private
	id _productsRequestInternal;	// 8 = 0x8
}
@property(assign, nonatomic) id<SKProductsRequestDelegate> delegate;	// @dynamic
- (id)init;	// 0x35f2e565
- (id)initWithProductIdentifiers:(id)productIdentifiers;	// 0x35f2e5c9
- (id)_newResponseFromDictionary:(id)dictionary;	// 0x35f2e801
- (void)dealloc;	// 0x35f2e615
- (BOOL)handleFinishResponse:(id)response returningError:(id *)error;	// 0x35f2e669
- (void)issueRequestForIdentifier:(id)identifier;	// 0x35f2e71d
@end

