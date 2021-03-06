/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "RequestQueueOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentProductsOperation : RequestQueueOperation {
@private
	NSArray *_invalidIdentifiers;	// 80 = 0x50
	NSArray *_productIdentifiers;	// 84 = 0x54
	NSArray *_products;	// 88 = 0x58
}
@property(retain) NSArray *invalidIdentifiers;	// G=0x35f671f5; S=0x35f67209; @synthesize=_invalidIdentifiers
@property(retain) NSArray *productIdentifiers;	// G=0x35f6722d; S=0x35f67241; @synthesize=_productIdentifiers
@property(retain) NSArray *products;	// G=0x35f67265; S=0x35f67279; @synthesize=_products
- (int)_bagType;	// 0x35f668f1
- (void)_clientStoppedNotification:(id)notification;	// 0x35f66841
- (id)_copyQueryStringDictionaryForApplication:(id)application productIdentifiers:(id)identifiers;	// 0x35f66cc9
- (id)_copyResponseForApplication:(id)application identifiers:(id)identifiers returningError:(id *)error;	// 0x35f66ac1
- (id)_getApplicationWithError:(id *)error;	// 0x35f66925
- (int)_getBatchSizeWithError:(id *)error;	// 0x35f669b1
- (BOOL)_loadResponseForApplication:(id)application batchSize:(int)size returningError:(id *)error;	// 0x35f66f35
- (id)copyResponseDictionary;	// 0x35f664d1
- (void)dealloc;	// 0x35f6641d
// declared property getter: - (id)invalidIdentifiers;	// 0x35f671f5
// declared property getter: - (id)productIdentifiers;	// 0x35f6722d
// declared property getter: - (id)products;	// 0x35f67265
- (void)run;	// 0x35f6669d
// declared property setter: - (void)setInvalidIdentifiers:(id)identifiers;	// 0x35f67209
// declared property setter: - (void)setProductIdentifiers:(id)identifiers;	// 0x35f67241
// declared property setter: - (void)setProducts:(id)products;	// 0x35f67279
@end

