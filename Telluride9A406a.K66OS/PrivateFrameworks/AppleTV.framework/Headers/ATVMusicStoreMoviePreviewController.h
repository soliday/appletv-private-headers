/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class NSTimer, NSDictionary, ATVURLDocument, BRWaitPromptControl;

@interface ATVMusicStoreMoviePreviewController : BRController {
@private
	BRWaitPromptControl *_waitPrompt;	// 80 = 0x50
	NSTimer *_timer;	// 84 = 0x54
	NSDictionary *_dictionary;	// 88 = 0x58
	ATVURLDocument *_document;	// 92 = 0x5c
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x32fa8d05
- (id)init;	// 0x32fa8d51
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x32fa8d55
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x32fa930d
- (void)_showPromptTimer:(id)timer;	// 0x32fa9641
- (BOOL)brEventAction:(id)action;	// 0x32fa9679
- (void)controlWasActivated;	// 0x32fa90cd
- (void)controlWasDeactivated;	// 0x32fa95cd
- (void)dealloc;	// 0x32fa9029
@end
