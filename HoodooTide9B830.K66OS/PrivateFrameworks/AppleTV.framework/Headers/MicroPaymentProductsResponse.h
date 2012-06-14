/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface MicroPaymentProductsResponse : NSObject {
@private
	NSArray *_expectedIdentifiers;	// 4 = 0x4
	NSArray *_invalidIdentifiers;	// 8 = 0x8
	NSArray *_products;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *expectedIdentifiers;	// G=0x32b47be9; S=0x32b47bf9; @synthesize=_expectedIdentifiers
@property(retain, nonatomic) NSArray *invalidIdentifiers;	// G=0x32b47c1d; S=0x32b47c2d; @synthesize=_invalidIdentifiers
@property(retain, nonatomic) NSArray *products;	// G=0x32b47c51; S=0x32b47c61; @synthesize=_products
- (void)dealloc;	// 0x32b478d1
// declared property getter: - (id)expectedIdentifiers;	// 0x32b47be9
// declared property getter: - (id)invalidIdentifiers;	// 0x32b47c1d
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x32b47965
// declared property getter: - (id)products;	// 0x32b47c51
// declared property setter: - (void)setExpectedIdentifiers:(id)identifiers;	// 0x32b47bf9
// declared property setter: - (void)setInvalidIdentifiers:(id)identifiers;	// 0x32b47c2d
// declared property setter: - (void)setProducts:(id)products;	// 0x32b47c61
@end

