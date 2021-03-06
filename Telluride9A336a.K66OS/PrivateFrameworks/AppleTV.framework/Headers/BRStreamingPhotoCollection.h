/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"
#import "AppleTV-Structs.h"

@class NSArray, BRImageManager, BRMediaCollectionType;

@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
@private
	ATVMediaCollectionRef _collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClientRef _dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x33a62905; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x33a62935; 
@property(assign) BOOL useForScreenSaver;	// G=0x33a62925; S=0x33a62915; converted property
+ (id)collectionWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x33a61db5
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x33a61df1
- (id)initWithATVItems:(id)atvitems dataClient:(ATVDataClientRef)client;	// 0x33a61eb9
- (id)initWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x33a61e4d
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(ATVDataClientRef)client;	// 0x33a61f29
- (ATVMediaCollectionRef)atvCollection;	// 0x33a623fd
- (id)collectionID;	// 0x33a622bd
- (id)collectionName;	// 0x33a6269d
- (id)collectionType;	// 0x33a626ad
- (int)count;	// 0x33a6237d
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x33a62905
- (void)dealloc;	// 0x33a61f9d
- (id)description;	// 0x33a62029
- (id)imageProxy;	// 0x33a62261
- (BOOL)isLibrary;	// 0x33a62855
- (BOOL)isLocal;	// 0x33a6280d
- (id)keyAssetID;	// 0x33a62811
- (id)mediaAssets;	// 0x33a6240d
- (id)mediaTypes;	// 0x33a628c1
- (id)photoAssets;	// 0x33a625e5
// declared property getter: - (id)preferredImageManager;	// 0x33a62935
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x33a62915
- (id)title;	// 0x33a62659
// converted property getter: - (BOOL)useForScreenSaver;	// 0x33a62925
@end

