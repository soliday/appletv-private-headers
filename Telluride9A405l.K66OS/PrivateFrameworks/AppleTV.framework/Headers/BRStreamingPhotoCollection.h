/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"
#import "AppleTV-Structs.h"

@class BRImageManager, BRMediaCollectionType, NSArray;

@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
@private
	ATVMediaCollectionRef _collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClientRef _dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x35dd0061; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x35dd0091; 
@property(assign) BOOL useForScreenSaver;	// G=0x35dd0081; S=0x35dd0071; converted property
+ (id)collectionWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x35dcf511
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x35dcf54d
- (id)initWithATVItems:(id)atvitems dataClient:(ATVDataClientRef)client;	// 0x35dcf615
- (id)initWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x35dcf5a9
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(ATVDataClientRef)client;	// 0x35dcf685
- (ATVMediaCollectionRef)atvCollection;	// 0x35dcfb59
- (id)collectionID;	// 0x35dcfa19
- (id)collectionName;	// 0x35dcfdf9
- (id)collectionType;	// 0x35dcfe09
- (int)count;	// 0x35dcfad9
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x35dd0061
- (void)dealloc;	// 0x35dcf6f9
- (id)description;	// 0x35dcf785
- (id)imageProxy;	// 0x35dcf9bd
- (BOOL)isLibrary;	// 0x35dcffb1
- (BOOL)isLocal;	// 0x35dcff69
- (id)keyAssetID;	// 0x35dcff6d
- (id)mediaAssets;	// 0x35dcfb69
- (id)mediaTypes;	// 0x35dd001d
- (id)photoAssets;	// 0x35dcfd41
// declared property getter: - (id)preferredImageManager;	// 0x35dd0091
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x35dd0071
- (id)title;	// 0x35dcfdb5
// converted property getter: - (BOOL)useForScreenSaver;	// 0x35dd0081
@end

