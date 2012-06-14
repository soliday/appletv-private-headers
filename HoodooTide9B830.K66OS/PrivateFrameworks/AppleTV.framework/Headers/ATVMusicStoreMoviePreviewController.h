/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRWaitPromptControl, NSTimer, NSDictionary, ATVURLDocument;

@interface ATVMusicStoreMoviePreviewController : BRController {
@private
	BRWaitPromptControl *_waitPrompt;	// 84 = 0x54
	NSTimer *_timer;	// 88 = 0x58
	NSDictionary *_dictionary;	// 92 = 0x5c
	ATVURLDocument *_document;	// 96 = 0x60
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x32912a69
- (id)init;	// 0x32912ab5
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x32912ab9
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x32913071
- (void)_showPromptTimer:(id)timer;	// 0x329133a5
- (BOOL)brEventAction:(id)action;	// 0x329133dd
- (void)controlWasActivated;	// 0x32912e31
- (void)controlWasDeactivated;	// 0x32913331
- (void)dealloc;	// 0x32912d8d
@end

