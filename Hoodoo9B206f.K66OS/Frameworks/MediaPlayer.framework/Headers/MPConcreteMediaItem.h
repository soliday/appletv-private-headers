/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItem.h"
#import "MediaPlayer-Structs.h"

@class NSNumber, NSArray, MPMediaLibrary;

@interface MPConcreteMediaItem : MPMediaItem {
@private
	MPMediaLibrary *_library;	// 4 = 0x4
	unsigned long long _persistentID;	// 8 = 0x8
	NSArray *_chapters;	// 16 = 0x10
	NSNumber *_mediaType;	// 20 = 0x14
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x303ba6e5; converted property
- (id)init;	// 0x303ba279
- (id)initWithCoder:(id)coder;	// 0x303ba459
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x303ba2c5
- (id)initWithPersistentID:(unsigned long long)persistentID valuesForProperties:(id)properties library:(id)library;	// 0x303ba311
- (id)_nonBatchableValueForProperty:(id)property isBatchable:(BOOL *)batchable;	// 0x303ba6fd
- (void)clearBookmarkTime;	// 0x303bb711
- (id)copyWithZone:(NSZone *)zone;	// 0x303ba449
- (void)dealloc;	// 0x303ba379
- (id)description;	// 0x303ba3ed
- (void)encodeWithCoder:(id)coder;	// 0x303ba5a9
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x303baf99
- (BOOL)existsInLibrary;	// 0x303ba699
- (void)incrementPlayCountForPlayingToEnd;	// 0x303bb731
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x303bb761
- (void)incrementSkipCount;	// 0x303bb609
- (void)markNominalAmountHasBeenPlayed;	// 0x303bb4ad
- (id)mediaLibrary;	// 0x303ba6d5
- (double)nominalHasBeenPlayedThreshold;	// 0x303bb4c1
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL *)skipped;	// 0x303bb501
// converted property getter: - (unsigned long long)persistentID;	// 0x303ba6e5
- (void)reallyIncrementPlayCount;	// 0x303bb3a5
- (void)setValue:(id)value forProperty:(id)property;	// 0x303baedd
- (id)valueForProperty:(id)property;	// 0x303bac7d
@end
