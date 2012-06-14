/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVPhotoFullScreenViewDataSource.h"
#import "ATVPhotoFullScreenViewDelegate.h"
#import "BRViewController.h"

@class ATVPhotoFullScreenView, NSDateFormatter, ATVPhotoBrowserView, NSTimer, BRPhotoControlFactory, NSString, NSArray;

@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
@private
	NSTimer *_spinnerTimer;	// 88 = 0x58
	BOOL _dataRequiresUpdate;	// 92 = 0x5c
	long _collectionItemCount;	// 96 = 0x60
	BOOL _photoBrowserViewReloadPending;	// 100 = 0x64
	id _screenSaverSetCollectionBlock;	// 104 = 0x68
	ATVPhotoBrowserView *_photoBrowserView;	// 108 = 0x6c
	ATVPhotoFullScreenView *_photoFullScreenView;	// 112 = 0x70
	BRPhotoControlFactory *_controlFactory;	// 116 = 0x74
	ATVDataClientRef _dataClient;	// 120 = 0x78
	NSString *_collectionType;	// 124 = 0x7c
	ATVMediaCollectionRef _collection;	// 128 = 0x80
	NSDateFormatter *_dateFormatter;	// 132 = 0x84
	ATVMediaQueryRef _pendingDataQuery;	// 136 = 0x88
	ATVMediaQueryRef _pendingCollectionMetaDataQuery;	// 140 = 0x8c
	NSArray *_resultData;	// 144 = 0x90
}
@property(retain, nonatomic) ATVMediaCollectionRef _collection;	// G=0x36794ee5; S=0x36794ef5; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x36794eb1; S=0x36794ec1; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x36794e49; S=0x36794e59; @synthesize
@property(retain, nonatomic) ATVDataClientRef _dataClient;	// G=0x36794e7d; S=0x36794e8d; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x36794f19; S=0x36794f29; @synthesize
@property(retain, nonatomic) ATVMediaQueryRef _pendingCollectionMetaDataQuery;	// G=0x36794f81; S=0x36794f91; @synthesize
@property(retain, nonatomic) ATVMediaQueryRef _pendingDataQuery;	// G=0x36794f4d; S=0x36794f5d; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x36794de1; S=0x36794df1; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x36794e15; S=0x36794e25; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x36794fb5; S=0x36794fc5; @synthesize
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x36794dad; S=0x36794dbd; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client;	// 0x36794625
+ (id)controllerForCollectionType:(id)collectionType dataClient:(ATVDataClientRef)client;	// 0x367945d1
- (id)initWithColletionType:(id)colletionType collection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client;	// 0x36794679
// declared property getter: - (ATVMediaCollectionRef)_collection;	// 0x36794ee5
- (long)_collectionItemCount;	// 0x36795e81
// declared property getter: - (id)_collectionType;	// 0x36794eb1
// declared property getter: - (id)_controlFactory;	// 0x36794e49
// declared property getter: - (ATVDataClientRef)_dataClient;	// 0x36794e7d
- (void)_dataClientDataUpdated:(id)updated;	// 0x367966a1
- (void)_dataClientStatusChanged:(id)changed;	// 0x367967a5
- (void)_dataQueryComplete;	// 0x367962c9
// declared property getter: - (id)_dateFormatter;	// 0x36794f19
- (void)_executeDataQuery;	// 0x36795ed5
- (void)_handleSettingsSelection:(id)selection;	// 0x36795559
- (void)_handleSlideshowSelection:(id)selection;	// 0x36795459
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x36795815
// declared property getter: - (ATVMediaQueryRef)_pendingCollectionMetaDataQuery;	// 0x36794f81
// declared property getter: - (ATVMediaQueryRef)_pendingDataQuery;	// 0x36794f4d
// declared property getter: - (id)_photoBrowserView;	// 0x36794de1
// declared property getter: - (id)_photoFullScreenView;	// 0x36794e15
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x36795679
- (void)_playerLastPlayedAsset:(id)asset;	// 0x367959ad
- (void)_playerStateChanged:(id)changed;	// 0x367958fd
- (void)_reload;	// 0x367951a1
// declared property getter: - (id)_resultData;	// 0x36794fb5
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x36795305
- (void)_showSpinner;	// 0x36794fe9
- (BOOL)_switchToPhotoBrowserView;	// 0x367950e9
- (BOOL)brEventAction:(id)action;	// 0x36794d49
- (void)controlWasActivated;	// 0x36794bb5
- (void)controlWasDeactivated;	// 0x36794c55
- (void)dealloc;	// 0x367949a1
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x36795e61
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x36795e4d
- (ATVMediaItemRef)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x36795df5
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x36795c2d
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x36795de1
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x36795c41
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x36795b95
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x36795b41
- (void)layoutSubcontrols;	// 0x36794ce5
- (long)numberOfColumnsInGrid:(id)grid;	// 0x36795add
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x36795e2d
- (long)numberOfItemsInGrid:(id)grid;	// 0x36795a21
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x36794dad
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x36794dbd
// declared property setter: - (void)set_collection:(ATVMediaCollectionRef)collection;	// 0x36794ef5
// declared property setter: - (void)set_collectionType:(id)type;	// 0x36794ec1
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x36794e59
// declared property setter: - (void)set_dataClient:(ATVDataClientRef)client;	// 0x36794e8d
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x36794f29
// declared property setter: - (void)set_pendingCollectionMetaDataQuery:(ATVMediaQueryRef)query;	// 0x36794f91
// declared property setter: - (void)set_pendingDataQuery:(ATVMediaQueryRef)query;	// 0x36794f5d
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x36794df1
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x36794e25
// declared property setter: - (void)set_resultData:(id)data;	// 0x36794fc5
- (void)wasPushed;	// 0x36794b29
@end
