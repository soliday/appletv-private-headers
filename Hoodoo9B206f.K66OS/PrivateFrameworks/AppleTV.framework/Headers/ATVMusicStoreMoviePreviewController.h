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
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x365ced35
- (id)init;	// 0x365ced81
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x365ced85
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x365cf33d
- (void)_showPromptTimer:(id)timer;	// 0x365cf671
- (BOOL)brEventAction:(id)action;	// 0x365cf6a9
- (void)controlWasActivated;	// 0x365cf0fd
- (void)controlWasDeactivated;	// 0x365cf5fd
- (void)dealloc;	// 0x365cf059
@end

