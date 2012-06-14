/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MusicGeniusController : MusicController {
@private
	ATVMediaItemRef _geniusSeed;	// 124 = 0x7c
	BOOL _isDataSavedIntoMetadata;	// 128 = 0x80
	NSArray *_dataFromMetadata;	// 132 = 0x84
	BOOL _startGeniusPlayback;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x367b347d; S=0x367b348d; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x367b2295
- (id)initWithSeed:(ATVMediaItemRef)seed;	// 0x367b220d
- (void)_setup;	// 0x367b349d
- (void)_showMediaMenuView;	// 0x367b357d
- (ATVMediaQueryRef)createDataQuery;	// 0x367b24a5
- (id)data;	// 0x367b23ed
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x367b2961
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x367b2539
- (void)dealloc;	// 0x367b238d
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x367b2821
- (id)indexPathForDataItem:(void *)dataItem;	// 0x367b28f1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x367b2cd5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x367b3229
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x367b30b5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x367b2bc5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x367b3331
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x367b3265
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x367b29dd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x367b2bf9
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x367b348d
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x367b347d
@end
