/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPUbiquitousLRUDictionaryObserver.h"

@class NSArray;

@interface MPUbiquitousMetadataController : NSObject <MPUbiquitousLRUDictionaryObserver> {
@private
	dispatch_queue_s *_updateQueue;	// 4 = 0x4
	NSArray *_entriesForUbiquitousUpdates;	// 8 = 0x8
	BOOL _updateUbiquitousValuesScheduled;	// 12 = 0xc
}
+ (void)insertDAAPValueIntoDictionary:(id)dictionary mediaItem:(id)item mediaProperty:(id)property;	// 0x346ebbbd
+ (id)sharedUbiquitousMetadataController;	// 0x346eba31
+ (id)ubiquitousEnabledMediaPropertiesForMediaProperties:(id)mediaProperties;	// 0x346ec06d
- (id)init;	// 0x346eba9d
- (void)_onQueue_applyUbiquitousLRUStorageValuesForEntries:(id)entries;	// 0x346ec921
- (void)_onQueue_applyUbiquitousValues:(id)values toMediaItem:(id)mediaItem;	// 0x346ec80d
- (void)_onQueue_scheduleApplyUbiquitousLRUStorageValuesForEntries:(id)entries;	// 0x346eccb5
- (void)_pushProperties:(id)properties mediaItem:(id)item;	// 0x346ebd35
- (void)_releaseAssertion:(id)assertion;	// 0x346ebe3d
- (BOOL)_sagaPushMediaProperties:(id)properties mediaItem:(id)item;	// 0x346ebeb5
- (BOOL)_shouldApplyUbiquitousEntry:(id)entry;	// 0x346ec779
- (void)_takeAssertion:(id)assertion;	// 0x346ebe39
- (id)_ubiquitousMetadataStorage;	// 0x346ec2b1
- (void)_ubiquitousPushMediaProperties:(id)properties mediaItem:(id)item;	// 0x346ec3f1
- (BOOL)_useSagaForMediaItem:(id)mediaItem;	// 0x346ebe41
- (void)dealloc;	// 0x346ebb11
- (void)pushBookmarkingPropertiesForMediaItem:(id)mediaItem;	// 0x346ebd89
- (void)ubiquitousLRUStorageDidChangeExternally:(id)ubiquitousLRUStorage changedEntries:(id)entries;	// 0x346ece61
- (void)ubiquitousLRUStorageDidCommitLocalChanges:(id)ubiquitousLRUStorage;	// 0x346ece45
- (void)ubiquitousLRUStorageWillCommitLocalChanges:(id)ubiquitousLRUStorage;	// 0x346ece29
@end

