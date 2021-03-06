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
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;	// G=0x303451cd; 
- (id)initWithItem:(id)item;	// 0x30344c69
- (id)_keyForTrackType:(unsigned)trackType;	// 0x30345ee5
- (void)beginTrackChanges;	// 0x30344d19
- (void)commitTrackChanges;	// 0x30344d65
- (id)currentTrackForType:(unsigned)type;	// 0x30345009
- (void)dealloc;	// 0x30344c95
- (BOOL)hasTracksForTypes:(unsigned)types;	// 0x30345349
- (unsigned)indexOfCurrentTrackForType:(unsigned)type;	// 0x3034505d
// declared property getter: - (BOOL)isLoaded;	// 0x303451cd
- (void)reloadData;	// 0x30345435
- (void)setTrack:(id)track forType:(unsigned)type;	// 0x303451e5
- (unsigned)trackCountForTypes:(unsigned)types;	// 0x303453b9
- (id)tracksForType:(unsigned)type;	// 0x30345305
@end

