/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, MPAVItem;

@interface MPAlternateTracks : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSDictionary *_alternateTracks;	// 8 = 0x8
	NSMutableDictionary *_trackChangeDictionary;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;	// G=0x3463c1cd; 
- (id)initWithItem:(id)item;	// 0x3463bc69
- (id)_keyForTrackType:(unsigned)trackType;	// 0x3463cee5
- (void)beginTrackChanges;	// 0x3463bd19
- (void)commitTrackChanges;	// 0x3463bd65
- (id)currentTrackForType:(unsigned)type;	// 0x3463c009
- (void)dealloc;	// 0x3463bc95
- (BOOL)hasTracksForTypes:(unsigned)types;	// 0x3463c349
- (unsigned)indexOfCurrentTrackForType:(unsigned)type;	// 0x3463c05d
// declared property getter: - (BOOL)isLoaded;	// 0x3463c1cd
- (void)reloadData;	// 0x3463c435
- (void)setTrack:(id)track forType:(unsigned)type;	// 0x3463c1e5
- (unsigned)trackCountForTypes:(unsigned)types;	// 0x3463c3b9
- (id)tracksForType:(unsigned)type;	// 0x3463c305
@end

