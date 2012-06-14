/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicController {
@private
	int _mode;	// 124 = 0x7c
	NSString *_genre;	// 128 = 0x80
	NSMutableArray *_artistData;	// 132 = 0x84
}
+ (id)allArtistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x367ae019
+ (id)allComposersControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x367ae0b5
+ (id)artistsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x367ae151
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x367ae199
- (int)_headerCount;	// 0x367aefb9
- (void)_setMode:(int)mode;	// 0x367aefa9
- (ATVMediaQueryRef)createDataQuery;	// 0x367ae295
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x367ae895
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x367ae639
- (id)data;	// 0x367ae39d
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x367ae36d
- (void)dealloc;	// 0x367ae21d
- (id)errorForNoContent;	// 0x367aeae5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x367aec5d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x367aeced
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x367aec09
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x367aeb05
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x367aec15
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x367ae9e1
@end

