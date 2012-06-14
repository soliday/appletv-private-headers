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
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x36666959; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x3666697d; S=0x3666696d; converted property
+ (id)providerForCollection:(id)collection controlFactory:(id)factory;	// 0x366667c1
- (id)initWithCollection:(id)collection controlFactory:(id)factory;	// 0x36666801
- (id)_data;	// 0x3666698d
- (BOOL)canHaveZeroData;	// 0x36666969
// converted property getter: - (id)collection;	// 0x36666959
- (id)dataAtIndex:(long)index;	// 0x366668e1
- (long)dataCount;	// 0x366668b9
- (void)dealloc;	// 0x3666686d
- (id)hashForDataAtIndex:(long)index;	// 0x36666931
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x3666696d
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x3666697d
@end

