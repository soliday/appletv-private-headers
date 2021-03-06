/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiRecentsController : NSObject {
@private
	id<UIKeyboardEmojiController> _controller;	// 4 = 0x4
	int _currentSequence;	// 8 = 0x8
	NSMutableArray *_recents;	// 12 = 0xc
	NSMutableDictionary *_usageHistory;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recents;	// G=0x355a26ad; converted property
- (id)initWithController:(id)controller;	// 0x355a1ab1
- (void)clearAncientHistory;	// 0x355a2281
- (void)dealloc;	// 0x355a1b59
- (id)defaultsDictionary;	// 0x355a24bd
- (void)emojiUsed:(id)used;	// 0x355a1fdd
- (BOOL)isAncientSequence:(int)sequence;	// 0x355a1e69
- (void)readDefaultsDictionary:(id)dictionary;	// 0x355a1bb9
// converted property getter: - (id)recents;	// 0x355a26ad
- (double)scoreForEmoji:(id)emoji;	// 0x355a1ed1
- (double)scoreForSequence:(int)sequence;	// 0x355a1e85
@end

