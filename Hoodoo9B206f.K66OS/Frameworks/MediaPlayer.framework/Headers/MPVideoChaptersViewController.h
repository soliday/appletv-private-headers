/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPImageCache, UIMovieChapterListView, MPVideoView, NSArray;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate> {
	MPVideoView *_videoView;	// 196 = 0xc4
	MPImageCache *_imageCache;	// 200 = 0xc8
	unsigned _currentMarker;	// 204 = 0xcc
	NSArray *_chapterTimeMarkers;	// 208 = 0xd0
	UIMovieChapterListView *_chapterListView;	// 212 = 0xd4
	float _timeColumnWidth;	// 216 = 0xd8
	unsigned _haveThumbnails : 1;	// 220 = 0xdc
	unsigned _videoOutActive : 1;	// 220 = 0xdc
}
@property(retain, nonatomic) NSArray *chapterTimeMarkers;	// G=0x30368bed; S=0x303682cd; @synthesize=_chapterTimeMarkers
@property(assign, nonatomic) unsigned currentMarkerIndex;	// G=0x30368bbd; S=0x30368bcd; @synthesize=_currentMarker
@property(assign, nonatomic) float topPadding;	// G=0x3036837d; S=0x303682ad; 
@property(assign, nonatomic) BOOL videoOutActive;	// G=0x3036839d; S=0x30368365; 
@property(retain, nonatomic) MPVideoView *videoView;	// G=0x30368bdd; S=0x30368255; @synthesize=_videoView
- (id)init;	// 0x30368035
- (void)_reloadThumbnails;	// 0x30368a51
- (void)_sizeColumnsToFit;	// 0x30368b21
// declared property getter: - (id)chapterTimeMarkers;	// 0x30368bed
// declared property getter: - (unsigned)currentMarkerIndex;	// 0x30368bbd
- (void)dealloc;	// 0x303680bd
- (void)loadView;	// 0x303683b1
- (id)newImageRequestWithMediaEntity:(id)mediaEntity timeMarker:(id)marker;	// 0x303686d9
// declared property setter: - (void)setChapterTimeMarkers:(id)markers;	// 0x303682cd
- (void)setCurrentMarker:(unsigned)marker;	// 0x303681f1
// declared property setter: - (void)setCurrentMarkerIndex:(unsigned)index;	// 0x30368bcd
// declared property setter: - (void)setTopPadding:(float)padding;	// 0x303682ad
// declared property setter: - (void)setVideoOutActive:(BOOL)active;	// 0x30368365
// declared property setter: - (void)setVideoView:(id)view;	// 0x30368255
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x303687f9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x303689e1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x303687d9
// declared property getter: - (float)topPadding;	// 0x3036837d
// declared property getter: - (BOOL)videoOutActive;	// 0x3036839d
// declared property getter: - (id)videoView;	// 0x30368bdd
- (void)viewDidAppear:(BOOL)view;	// 0x3036851d
- (void)viewDidDisappear:(BOOL)view;	// 0x30368591
- (void)viewDidUnload;	// 0x3036847d
- (void)viewWillDisappear:(BOOL)view;	// 0x30368669
@end

