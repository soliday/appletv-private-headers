/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class HSSagaClient;

@interface MPCloudController : NSObject {
@private
	BOOL _isCloudEnabled;	// 4 = 0x4
	BOOL _isUpdateInProgress;	// 5 = 0x5
	HSSagaClient *_sagaClient;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasCloudLockerAccount;	// G=0x303f27c5; 
@property(readonly, assign, nonatomic) BOOL isCloudEnabled;	// G=0x303f2af5; @synthesize=_isCloudEnabled
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;	// G=0x303f2821; 
@property(readonly, assign, nonatomic) BOOL isUpdateInProgress;	// G=0x303f2839; @synthesize=_isUpdateInProgress
+ (id)sharedCloudController;	// 0x303f253d
- (id)init;	// 0x303f25a9
- (void)_initializeUpdateInProgressState;	// 0x303f294d
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x303f2679
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x303f2659
- (void)becomeActive;	// 0x303f2699
- (void)dealloc;	// 0x303f260d
// declared property getter: - (BOOL)hasCloudLockerAccount;	// 0x303f27c5
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x303f2801
// declared property getter: - (BOOL)isCloudEnabled;	// 0x303f2af5
// declared property getter: - (BOOL)isGeniusEnabled;	// 0x303f2821
// declared property getter: - (BOOL)isUpdateInProgress;	// 0x303f2839
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x303f2861
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x303f2881
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x303f28a1
- (void)resignActive;	// 0x303f28c1
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x303f28e1
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids completionHandler:(id)handler;	// 0x303f2901
@end

