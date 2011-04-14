/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEiTunesRentalDataClient.h"
#import "AppleTV-Structs.h"

@class NSCountedSet, NSMutableDictionary, NSMutableArray, NSArray, BRBackgroundTask;

@interface MEiTunesRentalDataClientImpl : MEiTunesRentalDataClient {
	BRBackgroundTask *_rentalExpirationTask;	// 4 = 0x4
	ATVDataClientRef _dataClientRef;	// 8 = 0x8
	void *_connectInfo;	// 12 = 0xc
	NSArray *_rentals;	// 16 = 0x10
	double _lastRefreshInitiated;	// 20 = 0x14
	BOOL _acquisitionRefreshesRentals;	// 28 = 0x1c
	NSMutableArray *_cacheTriggers;	// 32 = 0x20
	int _lastRankValue;	// 36 = 0x24
	NSCountedSet *_showInfosToIgnore;	// 40 = 0x28
	NSMutableDictionary *_showInfosToWriteToKVS;	// 44 = 0x2c
	BOOL _overrideRentalCountCheck;	// 48 = 0x30
}
@property(retain) NSArray *rentals;	// G=0x2fbf9; S=0x30d6d; converted property
- (id)init;	// 0x307a1
- (BOOL)_isShowInfoBeingWrittenToKVSForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x30c49
- (void)_updateRental:(ATVMediaItemRef)rental withShowInfo:(id)showInfo transactionOptions:(id)options;	// 0x30f2d
- (void)_updateShowInfoForMediaItem:(ATVMediaItemRef)mediaItem withPropertiesUpdated:(id)propertiesUpdated;	// 0x32145
- (void)_updateShowInfoForRentals:(id)rentals;	// 0x30459
- (void)acquisitionSuccessful:(id)successful;	// 0x32481
- (void)authenticationCancelled:(id)cancelled;	// 0x3012d
- (void)authenticationSucceeded:(id)succeeded;	// 0x323ed
- (void)availableRentalCount:(id)count;	// 0x301ad
- (void)availableRentals:(id)rentals;	// 0x302b5
- (id)buildRentalsArray:(id)array;	// 0x31149
- (void)checkInOutstandingRentals:(id)outstandingRentals;	// 0x30afd
- (void)connectClient:(ATVDataClientRef)client info:(void *)info;	// 0x30acd
- (void)dealloc;	// 0x309e5
- (void)disconnectClient:(ATVDataClientRef)client;	// 0x2fbf5
- (void)fetchAvailableRentals;	// 0x2ff15
- (void)mainMenuVisible:(id)visible;	// 0x2fc09
- (ATVMediaItemRef)mediaItemWithEarliestExpirationDate;	// 0x325e1
- (void)networkStateChanged:(id)changed;	// 0x2fc1d
- (void)preferredAccountAuthenticationSucceeded:(id)succeeded;	// 0x2fc95
- (void)preferredAccountEstablished:(id)established;	// 0x2fe35
- (void)preferredAccountRemoved:(id)removed;	// 0x31ee5
- (id)processQuery:(ATVMediaQueryRef)query;	// 0x31dc9
- (void)propertyUpdated:(id)updated;	// 0x329f9
- (void)queueRentalRefreshCompleteNotification:(id)notification;	// 0x2ff79
- (void)refreshAvailableRentals;	// 0x32c25
- (void)refreshAvailableRentalsImmediate;	// 0x31fbd
- (void)refreshAvailableRentalsOverridingRentalCheckCount;	// 0x2ff55
- (void)rentalRefreshRequest:(id)request;	// 0x300f5
// converted property getter: - (id)rentals;	// 0x2fbf9
- (void)setDataClientRef:(ATVDataClientRef)ref;	// 0x304ed
// converted property setter: - (void)setRentals:(id)rentals;	// 0x30d6d
- (void)showInfoChanged:(id)changed;	// 0x327e5
- (void)updateRentalExpirationTask;	// 0x2fd7d
@end
