/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"


@interface MPAbstractAlternateTracksViewController : MPViewController {
	unsigned _selectedTracks[2];	// 160 = 0xa0
	unsigned _previousTracks[2];	// 168 = 0xa8
}
- (id)init;	// 0x31ddb0f5
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x31ddb07d
- (void)addLoadingUI;	// 0x31ddaf6d
- (id)alternateTracks;	// 0x31ddae11
- (id)arrayForGroup:(int)group;	// 0x31ddadc9
- (void)dealloc;	// 0x31ddb091
- (unsigned)indexForGroup:(int)group;	// 0x31ddad81
- (void)reloadData;	// 0x31ddaf9d
- (void)removeLoadingUI;	// 0x31ddaf35
- (void)saveChanges;	// 0x31ddae4d
- (id)titleForTrack:(id)track;	// 0x31ddb169
- (unsigned)typeForGroup:(int)group;	// 0x31ddad1d
@end

