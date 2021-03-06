/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRTabControlDelegate.h"

@class BRReflectionControl, BRWaitPromptControl, BRMediaPlayer, BRTabControl, BRImage, BRTextControl, BRImageControl, BRVideoChapterProvider, BRCoverArtPreviewControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
@private
	BRImage *_currentVideoFrame;	// 48 = 0x30
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 52 = 0x34
	BRImageControl *_screenShotPreviewControl;	// 56 = 0x38
	BRReflectionControl *_reflectionToPreviewControl;	// 60 = 0x3c
	BRVideoChapterProvider *_chapterProvider;	// 64 = 0x40
	BRCoverArtPreviewControl *_preview;	// 68 = 0x44
	BRControl *_csaPicker;	// 72 = 0x48
	BRTabControl *_tabControl;	// 76 = 0x4c
	BRTextControl *_titleControl;	// 80 = 0x50
	BRMediaPlayer *_player;	// 84 = 0x54
	BRControl *_currentContentControl;	// 88 = 0x58
	BRControl *_chapterPicker;	// 92 = 0x5c
	BRWaitPromptControl *_spinner;	// 96 = 0x60
	BOOL _controlWasActivated;	// 100 = 0x64
	BOOL _controlWasDeactivated;	// 101 = 0x65
}
+ (id)controlWithPlayer:(id)player;	// 0x30280b39
- (id)init;	// 0x30280b95
- (void)_addCSAPicker;	// 0x30282511
- (void)_addFullScreenVideoSnapshot;	// 0x302821f9
- (void)_animatePreviewBackToScreenshot;	// 0x30282201
- (void)_animateScreenshotToPreview;	// 0x302821fd
- (BOOL)_chapterPreviewsAvailable;	// 0x302818f1
- (void)_createCSAPicker;	// 0x30282245
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x30282551
- (void)_loadAudioList;	// 0x30281f31
- (void)_loadChapters;	// 0x302819b1
- (void)_loadGraphicalChapterList;	// 0x30281b69
- (void)_loadMediaOptionList:(id)list selectedOption:(id)option selectionHandler:(id)handler;	// 0x30281fc1
- (void)_loadSubtitleList;	// 0x30281ea1
- (void)_loadTextualChapterList;	// 0x302819f1
- (void)_setAudioOption:(id)option;	// 0x30281879
- (void)_setChapter:(id)chapter;	// 0x30281559
- (void)_setSubtitleOption:(id)option;	// 0x302816c1
- (id)_titleControlItemLabelAttributes;	// 0x30282609
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x302814c5
- (BOOL)brEventAction:(id)action;	// 0x3028139d
- (void)controlWasActivated;	// 0x3028115d
- (void)dealloc;	// 0x30280c35
- (void)layoutSubcontrols;	// 0x302811b1
- (void)orderOut;	// 0x3028110d
- (void)setPlayer:(id)player;	// 0x30280d85
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x30281459
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x302814bd
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x302814c1
@end

