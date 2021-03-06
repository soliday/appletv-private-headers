/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class NSArray, BRSystemLanguages, NSDictionary;

@interface ATVLanguageChooserController : BRViewController {
@private
	BRSystemLanguages *_systemLanguages;	// 84 = 0x54
	NSArray *_languageKeys;	// 88 = 0x58
	NSDictionary *_languageKeysAndPrompts;	// 92 = 0x5c
	BOOL _canBePopped;	// 96 = 0x60
	BOOL _useVoiceOverGreeting;	// 97 = 0x61
	double _lastPlayButtonPress;	// 100 = 0x64
	int _playButtonPressCount;	// 108 = 0x6c
}
@property(assign) BOOL canBePopped;	// G=0x32f2edb9; S=0x32f2eda9; converted property
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x32f2edc9; S=0x32f2edd9; @synthesize=_useVoiceOverGreeting
+ (id)controlOOB;	// 0x32f2e701
- (id)init;	// 0x32f2e749
- (id)initWithOOBLayout:(BOOL)ooblayout;	// 0x32f2e75d
- (void)_collectLanguages;	// 0x32f2ee9d
- (long)_defaultIndex;	// 0x32f2ede9
- (void)_performLanguageChange:(id)change;	// 0x32f2f391
- (void)_showProgressForLanguage:(id)language;	// 0x32f2f279
- (BOOL)brEventAction:(id)action;	// 0x32f2ea75
// converted property getter: - (BOOL)canBePopped;	// 0x32f2edb9
- (void)dealloc;	// 0x32f2e969
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x32f2ed11
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32f2ec0d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32f2ecf1
// converted property setter: - (void)setCanBePopped:(BOOL)popped;	// 0x32f2eda9
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x32f2edd9
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x32f2edc9
- (void)wasPushed;	// 0x32f2e9dd
@end

