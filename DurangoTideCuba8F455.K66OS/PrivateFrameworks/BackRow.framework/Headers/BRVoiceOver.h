/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSArray, NSMutableArray, NSString, NSTimer, NSDictionary, BRVoiceOverSpeechManager;

@interface BRVoiceOver : BRSingleton {
@private
	NSTimer *_focusChangeTimer;	// 4 = 0x4
	NSTimer *_screenContentTimer;	// 8 = 0x8
	NSDictionary *_languageToLocale;	// 12 = 0xc
	NSMutableArray *_focusChain;	// 16 = 0x10
	BRVoiceOverSpeechManager *_speechManager;	// 20 = 0x14
	BOOL _isEnabled;	// 24 = 0x18
	BOOL *_handleFocusChangeCancel;	// 28 = 0x1c
	int _speechRate;	// 32 = 0x20
	BOOL _inRereadMode;	// 36 = 0x24
	id _focusChangeObserver;	// 40 = 0x28
	id _noFocusChangeObserver;	// 44 = 0x2c
	NSDictionary *_phoneticsTable;	// 48 = 0x30
	int _lastEvent;	// 52 = 0x34
	id _lastFocusedElement;	// 56 = 0x38
	NSString *_previousContainerString;	// 60 = 0x3c
	NSMutableArray *_previousContainerStrings;	// 64 = 0x40
	NSString *_previousSecondaryScreenInfo;	// 68 = 0x44
	NSString *_previousContextChangeString;	// 72 = 0x48
	NSArray *_previousElementTraits;	// 76 = 0x4c
	NSString *_previousTextFieldValue;	// 80 = 0x50
	NSArray *_nonFocusableNavigationElements;	// 84 = 0x54
	int _nonFocusedElementIndex;	// 88 = 0x58
	int _nonFocusedSubelementIndex;	// 92 = 0x5c
	NSString *_initialText;	// 96 = 0x60
	id _initialTextControl;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL isEnabled;	// G=0x3300e271; S=0x3300f0b1; @synthesize=_isEnabled
@property(assign, nonatomic) int speechRate;	// G=0x3300f1cd; S=0x3300f149; @synthesize=_speechRate
+ (BOOL)isEnabled;	// 0x3300e249
+ (void)setSingleton:(id)singleton;	// 0x3300e265
+ (id)singleton;	// 0x3300e259
- (id)init;	// 0x3300fe85
- (void)_chapterMarkersHidden:(id)hidden;	// 0x3300f5f9
- (void)_chapterMarkersShown:(id)shown;	// 0x3300f635
- (void)_clearCachedElementInformation;	// 0x3300ea85
- (void)_coalesceHandleFocusChange:(id)change;	// 0x3300e4dd
- (void)_contextDidChange:(id)_context;	// 0x3301005d
- (id)_determineAccessibilityLanguage:(id)language;	// 0x3300e83d
- (id)_determineControlTraits:(id)traits;	// 0x3301045d
- (id)_determineKeyboardType:(id)type;	// 0x3300e8a5
- (id)_determineScreenChangeLabel:(id)label;	// 0x33010675
- (id)_determineScreenSecondaryInfo:(id)info;	// 0x3300ec15
- (id)_determineTextFieldData:(id)data;	// 0x3300ec6d
- (id)_focusChain:(id)chain;	// 0x3300e281
- (void)_handleFocusChange:(id)change;	// 0x33010c15
- (id)_handleFocusChangeSpecialCases:(id)cases;	// 0x33010405
- (void)_handleFocusDidNotChange:(id)_handleFocus;	// 0x3300e7dd
- (BOOL)_handleNonFocusableNavigation:(int)navigation;	// 0x3300f351
- (void)_handleRereadMode;	// 0x3300e471
- (void)_handleScreenContentOutput:(id)output;	// 0x3300eb35
- (void)_initialize;	// 0x3300faf5
- (void)_languageChanged:(id)changed;	// 0x3300f729
- (id)_makeFocusChain:(id)chain;	// 0x3300ee65
- (int)_maxElementCountWithinElement:(id)element;	// 0x3300f5a1
- (void)_mediaContentSkipped:(id)skipped;	// 0x3300f671
- (void)_mediaPlaybackStarted:(id)started;	// 0x3300ea55
- (id)_nonFocusedTableViewHeaders:(id)headers;	// 0x33010261
- (void)_outputControl:(id)control;	// 0x33010e01
- (id)_phoneticLetterForControl:(id)control;	// 0x3300e951
- (id)_replacePasswordBullets:(id)bullets;	// 0x330102fd
- (void)_startSpeechManager;	// 0x3300fa1d
- (id)_tableViewRow:(id)row row:(int)row2;	// 0x3301015d
- (void)_tearDown;	// 0x3300f7e9
- (void)_updateFocusChain:(id)chain;	// 0x3300e9fd
- (void)_updateFocusedElement:(id)element;	// 0x3300e7fd
- (void)_updateSpeechRate;	// 0x3300f20d
- (void)dealloc;	// 0x3300f769
- (void)dispatchSpeechJob:(id)job shouldQueue:(BOOL)queue;	// 0x33010cb5
- (BOOL)handleEventAction:(id)action;	// 0x3300f239
// declared property getter: - (BOOL)isEnabled;	// 0x3300e271
- (void)setInitialText:(id)text forControl:(id)control;	// 0x3300e391
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x3300f0b1
- (void)setIsEnabled:(BOOL)enabled quiet:(BOOL)quiet;	// 0x3300eec1
// declared property setter: - (void)setSpeechRate:(int)rate;	// 0x3300f149
- (void)speakGreetingMessage;	// 0x3300f0c9
- (void)speakString:(id)string;	// 0x3300e335
// declared property getter: - (int)speechRate;	// 0x3300f1cd
- (void)textChanged:(id)changed;	// 0x33011455
- (void)updateStatus;	// 0x3300fa69
@end
