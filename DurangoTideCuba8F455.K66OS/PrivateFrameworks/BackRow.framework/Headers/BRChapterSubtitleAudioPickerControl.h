/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"
#import "BRTabControlDelegate.h"

@class NSValue, BRImageControl, BRTabControl, BRImage, BRTextControl, BRVideoChapterProvider, BRMediaPlayer, BRCoverArtPreviewControl, BRReflectionControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
@private
	BRImage *_currentVideoFrame;	// 44 = 0x2c
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 48 = 0x30
	BRImageControl *_screenShotPreviewControl;	// 52 = 0x34
	CGPoint _screenShotPreviewControlFullScreenPosition;	// 56 = 0x38
	BRReflectionControl *_reflectionToPreviewControl;	// 64 = 0x40
	NSValue *_previewTransform;	// 68 = 0x44
	NSValue *_reflectionTransform;	// 72 = 0x48
	BRVideoChapterProvider *_chapterProvider;	// 76 = 0x4c
	BRCoverArtPreviewControl *_preview;	// 80 = 0x50
	BRControl *_csaPicker;	// 84 = 0x54
	BRTabControl *_tabControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	BRMediaPlayer *_player;	// 96 = 0x60
	BRControl *_currentContentControl;	// 100 = 0x64
	BRControl *_chapterPicker;	// 104 = 0x68
	BOOL _inScreenShotMode;	// 108 = 0x6c
	BOOL _controlWasActivated;	// 109 = 0x6d
	BOOL _controlWasDeactivated;	// 110 = 0x6e
}
+ (id)controlWithPlayer:(id)player;	// 0x32f62e0d
- (id)init;	// 0x32f62d71
- (void)_addCSAPicker;	// 0x32f627ed
- (void)_addFullScreenVideoSnapshot;	// 0x32f627e5
- (void)_animatePreviewBackToScreenshot;	// 0x32f62825
- (void)_animateScreenshotToPreview;	// 0x32f627e9
- (BOOL)_chapterPreviewsAvailable;	// 0x32f63759
- (void)_createCSAPicker;	// 0x32f63831
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x32f631bd
- (void)_loadAudioList;	// 0x32f633b1
- (void)_loadChapters;	// 0x32f6285d
- (void)_loadGraphicalChapterList;	// 0x32f63cb1
- (void)_loadListWithTitles:(id)titles forTrackIDs:(id)trackIDs withCurrentSelection:(long)currentSelection withSelectionHandler:(id)selectionHandler;	// 0x32f63a71
- (void)_loadSubtitleList;	// 0x32f63545
- (void)_loadTextualChapterList;	// 0x32f63f71
- (void)_setAudioTrack:(id)track;	// 0x32f62895
- (void)_setChapter:(id)chapter;	// 0x32f629a5
- (void)_setSubtitleTrack:(id)track;	// 0x32f6291d
- (id)_titleControlItemLabelAttributes;	// 0x32f63811
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32f62ae9
- (void)controlWasActivated;	// 0x32f62bbd
- (void)dealloc;	// 0x32f62c51
- (void)layoutSubcontrols;	// 0x32f63259
- (void)orderOut;	// 0x32f62c0d
- (void)setPlayer:(id)player;	// 0x32f62e5d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x32f62b69
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x32f627dd
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x32f627e1
@end

