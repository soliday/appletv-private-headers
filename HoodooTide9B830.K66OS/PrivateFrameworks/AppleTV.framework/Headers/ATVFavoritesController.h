/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRScrollControl, NSMutableDictionary, BRCursorControl, BRTextControl, NSMutableArray, BRWaitPromptControl, NSTimer, BRGridView;

@interface ATVFavoritesController : BRController {
@private
	int _itemType;	// 84 = 0x54
	NSMutableArray *_favorites;	// 88 = 0x58
	BRScrollControl *_scroller;	// 92 = 0x5c
	BRGridView *_grid;	// 96 = 0x60
	BRCursorControl *_cursor;	// 100 = 0x64
	BRTextControl *_rearrangeInstructions;	// 104 = 0x68
	BOOL _hasBeenActivated;	// 108 = 0x6c
	NSMutableDictionary *_redDotMap;	// 112 = 0x70
	NSTimer *_spinnerTimer;	// 116 = 0x74
	BRWaitPromptControl *_spinner;	// 120 = 0x78
	BOOL _showsSpinner;	// 124 = 0x7c
	BOOL _favoriteOrderChanged;	// 125 = 0x7d
}
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x32899565
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x3289aa7d
- (void)_favoriteChanged:(id)changed;	// 0x3289a769
- (void)_favoriteInsertedNotification:(id)notification;	// 0x3289a5e5
- (void)_favoriteRemovedNotification:(id)notification;	// 0x3289a6cd
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x3289a9c5
- (void)_fetchEpisodesForCurrentSeason:(id)currentSeason;	// 0x3289b751
- (void)_fetchFavorites:(id)favorites;	// 0x3289b6c5
- (void)_fetchShowInfo:(id)info;	// 0x3289b971
- (void)_initiateNetworkFetches;	// 0x32899edd
- (ATVMediaTypeRef)_mediaType;	// 0x3289b451
- (id)_noFavoritesController;	// 0x3289a9f5
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x3289b5d1
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x3289b565
- (void)_reload;	// 0x3289a40d
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x3289b50d
- (void)_resort;	// 0x3289a479
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x3289b495
- (BOOL)_setupAfterFavoritesFetch;	// 0x3289a0f5
- (BOOL)_shouldShowRedDots;	// 0x3289aa5d
- (void)_showDataChangedNotification:(id)notification;	// 0x3289a8e9
- (void)_showGrid;	// 0x3289ac7d
- (void)_showSpinner:(BOOL)spinner;	// 0x3289aac5
- (id)_sortedFavorites;	// 0x3289a28d
- (void)_spinnerTimerFired:(id)fired;	// 0x3289aba9
- (id)accessibilityScreenContent;	// 0x3289bc0d
- (void)controlWasActivated;	// 0x3289970d
- (void)controlWasDeactivated;	// 0x328997b5
- (void)dealloc;	// 0x32899619
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x32899d89
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x32899ea5
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x32899d81
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x32899a61
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x32899d7d
- (void)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x32899d8d
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x32899eb1
- (BOOL)isNetworkDependent;	// 0x32899899
- (void)layoutSubcontrols;	// 0x3289989d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x32899a49
- (long)numberOfItemsInGrid:(id)grid;	// 0x32899a29
- (void)setRearrangeInstructionsHidden:(BOOL)hidden;	// 0x3289b25d
- (void)wasPushed;	// 0x32899845
@end

