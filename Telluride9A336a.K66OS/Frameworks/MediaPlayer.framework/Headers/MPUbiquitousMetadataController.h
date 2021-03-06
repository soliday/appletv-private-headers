/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPUbiquitousLRUDictionaryObserver.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSArray;

@interface MPUbiquitousMetadataController : NSObject <MPUbiquitousLRUDictionaryObserver> {
@private
	dispatch_queue_s *_updateQueue;	// 4 = 0x4
	NSArray *_entriesForUbiquitousUpdates;	// 8 = 0x8
	BOOL _updateUbiquitousValuesScheduled;	// 12 = 0xc
}
+ (void)insertDAAPValueIntoDictionary:(id)dictionary mediaItem:(id)item mediaProperty:(id)property;	// 0x35bef491
+ (id)sharedUbiquitousMetadataController;	// 0x35bef305
+ (id)ubiquitousEnabledMediaPropertiesForMediaProperties:(id)mediaProperties;	// 0x35bef941
- (id)init;	// 0x35bef371
- (void)_onQueue_applyUbiquitousLRUStorageValuesForEntries:(id)entries;	// 0x35bf01f5
- (void)_onQueue_applyUbiquitousValues:(id)values toMediaItem:(id)mediaItem;	// 0x35bf00e1
- (void)_onQueue_scheduleApplyUbiquitousLRUStorageValuesForEntries:(id)entries;	// 0x35bf0589
- (void)_pushProperties:(id)properties mediaItem:(id)item;	// 0x35bef609
- (void)_releaseAssertion:(id)assertion;	// 0x35bef711
- (BOOL)_sagaPushMediaProperties:(id)properties mediaItem:(id)item;	// 0x35bef789
- (BOOL)_shouldApplyUbiquitousEntry:(id)entry;	// 0x35bf004d
- (void)_takeAssertion:(id)assertion;	// 0x35bef70d
- (id)_ubiquitousMetadataStorage;	// 0x35befb85
- (void)_ubiquitousPushMediaProperties:(id)properties mediaItem:(id)item;	// 0x35befcc5
- (BOOL)_useSagaForMediaItem:(id)mediaItem;	// 0x35bef715
- (void)dealloc;	// 0x35bef3e5
- (void)pushBookmarkingPropertiesForMediaItem:(id)mediaItem;	// 0x35bef65d
- (void)ubiquitousLRUStorageDidChangeExternally:(id)ubiquitousLRUStorage changedEntries:(id)entries;	// 0x35bf0735
- (void)ubiquitousLRUStorageDidCommitLocalChanges:(id)ubiquitousLRUStorage;	// 0x35bf0719
- (void)ubiquitousLRUStorageWillCommitLocalChanges:(id)ubiquitousLRUStorage;	// 0x35bf06fd
@end

