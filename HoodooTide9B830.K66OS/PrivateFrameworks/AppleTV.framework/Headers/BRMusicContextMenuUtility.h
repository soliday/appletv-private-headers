/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRContextMenuUtility.h"


@interface BRMusicContextMenuUtility : NSObject <BRContextMenuUtility> {
@private
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
}
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x32ab157d; S=0x32ab156d; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x32ab15bd; S=0x32ab15ad; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x32ab159d; S=0x32ab158d; converted property
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x32ab15fd; S=0x32ab15ed; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x32ab15dd; S=0x32ab15cd; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x32ab153d; S=0x32ab152d; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x32ab155d; S=0x32ab154d; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x32ab14a1
+ (id)utility;	// 0x32ab145d
- (id)init;	// 0x32ab14b1
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x32ab157d
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x32ab15bd
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x32ab159d
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x32ab160d
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x32ab1611
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x32ab15fd
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x32ab15dd
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x32ab153d
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x32ab156d
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x32ab15ad
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x32ab158d
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x32ab15ed
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x32ab15cd
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x32ab152d
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x32ab154d
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x32ab155d
@end

