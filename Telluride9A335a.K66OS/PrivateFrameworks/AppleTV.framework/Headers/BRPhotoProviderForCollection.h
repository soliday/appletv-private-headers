/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import "BRPhotoProvider.h"
#import "BRPhotoProviderForCollection.h"

@class BRPhotoMediaCollection;

@protocol BRPhotoProviderForCollection <BRProvider>
@property(assign) BOOL vendPhotoDataOnly;	// converted property
- (BOOL)canHaveZeroData;
- (id)collection;
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;
// converted property getter: - (BOOL)vendPhotoDataOnly;
@end

@interface BRPhotoProviderForCollection : BRPhotoProvider <BRPhotoProviderForCollection> {
@private
	BRPhotoMediaCollection *_collection;	// 12 = 0xc
	BOOL _vendPhotoDataOnly;	// 16 = 0x10
}
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x341bb739; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x341bb75d; S=0x341bb74d; converted property
+ (id)providerForCollection:(id)collection controlFactory:(id)factory;	// 0x341bb5a1
- (id)initWithCollection:(id)collection controlFactory:(id)factory;	// 0x341bb5e1
- (id)_data;	// 0x341bb76d
- (BOOL)canHaveZeroData;	// 0x341bb749
// converted property getter: - (id)collection;	// 0x341bb739
- (id)dataAtIndex:(long)index;	// 0x341bb6c1
- (long)dataCount;	// 0x341bb699
- (void)dealloc;	// 0x341bb64d
- (id)hashForDataAtIndex:(long)index;	// 0x341bb711
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x341bb74d
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x341bb75d
@end

