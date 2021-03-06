/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class MCAudioPlaylist, NSMutableDictionary, NSMutableArray, MCMontage, MPPlaylistInternal, MCPlug;
@protocol MPAudioSupport;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding> {
@private
	NSMutableArray *_songs;	// 4 = 0x4
	MCAudioPlaylist *_audioPlaylist;	// 8 = 0x8
	MCPlug *_plug;	// 12 = 0xc
	NSObject<MPAudioSupport> *_parentObject;	// 16 = 0x10
	MCMontage *_montage;	// 20 = 0x14
	NSMutableDictionary *_attributes;	// 24 = 0x18
	MPPlaylistInternal *_internal;	// 28 = 0x1c
}
@property(retain) MCAudioPlaylist *audioPlaylist;	// G=0x31a4b959; S=0x31a4bb9d; converted property
@property(assign) double duckInDuration;	// G=0x31a4b6d9; S=0x31a4b6f9; @dynamic
@property(assign) float duckLevel;	// G=0x31a4b891; S=0x31a4b8b1; @dynamic
@property(assign) double duckOutDuration;	// G=0x31a4b7b5; S=0x31a4b7d5; @dynamic
@property(assign) double duration;	// G=0x31a4b4a1; S=0x31a4c10d; converted property
@property(assign) double fadeInDuration;	// G=0x31a4b4c1; S=0x31a4b4e1; @dynamic
@property(assign) double fadeOutDuration;	// G=0x31a4b59d; S=0x31a4b5bd; @dynamic
@property(retain) MCMontage *montage;	// G=0x31a4bb7d; S=0x31a4bb8d; converted property
@property(retain) id parentObject;	// G=0x31a4b491; S=0x31a4c0b1; converted property
@property(readonly, retain) NSMutableArray *songs;	// G=0x31a4acd1; converted property
+ (id)audioPlaylist;	// 0x31a4a2c1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a4a291
- (id)init;	// 0x31a4a2f9
- (id)initWithCoder:(id)coder;	// 0x31a4a821
- (void)addSong:(id)song;	// 0x31a4ace1
- (void)addSongs:(id)songs;	// 0x31a4ad3d
// converted property getter: - (id)audioPlaylist;	// 0x31a4b959
- (void)cleanup;	// 0x31a4bb6d
- (void)copySongs:(id)songs;	// 0x31a4ba79
- (void)copyStruct:(id)aStruct;	// 0x31a4b969
- (id)copyWithZone:(NSZone *)zone;	// 0x31a4ab79
- (int)countOfSongs;	// 0x31a4c3c9
- (void)dealloc;	// 0x31a4a4c9
- (id)description;	// 0x31a4abfd
// declared property getter: - (double)duckInDuration;	// 0x31a4b6d9
// declared property getter: - (float)duckLevel;	// 0x31a4b891
// declared property getter: - (double)duckOutDuration;	// 0x31a4b7b5
// converted property getter: - (double)duration;	// 0x31a4b4a1
- (void)encodeWithCoder:(id)coder;	// 0x31a4a5a1
// declared property getter: - (double)fadeInDuration;	// 0x31a4b4c1
// declared property getter: - (double)fadeOutDuration;	// 0x31a4b59d
- (void)finalize;	// 0x31a4a49d
- (void)insertObject:(id)object inSongsAtIndex:(int)index;	// 0x31a4c409
- (void)insertSongs:(id)songs atIndex:(int)index;	// 0x31a4ad7d
// converted property getter: - (id)montage;	// 0x31a4bb7d
- (void)moveSongsFromIndices:(id)indices toIndex:(int)index;	// 0x31a4b391
- (id)objectInSongsAtIndex:(int)index;	// 0x31a4c3e9
- (id)parentDocument;	// 0x31a4c261
// converted property getter: - (id)parentObject;	// 0x31a4b491
- (void)removeAllSongs;	// 0x31a4b331
- (void)removeObjectFromSongsAtIndex:(int)index;	// 0x31a4c449
- (void)removeSongsAtIndices:(id)indices;	// 0x31a4b105
- (void)replaceObjectInSongsAtIndex:(int)index withObject:(id)object;	// 0x31a4c485
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x31a4bb9d
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x31a4b6f9
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x31a4b8b1
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x31a4b7d5
// converted property setter: - (void)setDuration:(double)duration;	// 0x31a4c10d
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x31a4b4e1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x31a4b5bd
// converted property setter: - (void)setMontage:(id)montage;	// 0x31a4bb8d
// converted property setter: - (void)setParentObject:(id)object;	// 0x31a4c0b1
- (void)setPlug:(id)plug;	// 0x31a4bf65
// converted property getter: - (id)songs;	// 0x31a4acd1
@end

