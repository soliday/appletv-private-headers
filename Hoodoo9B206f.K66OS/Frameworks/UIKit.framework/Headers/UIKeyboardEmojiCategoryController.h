/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryController : NSObject {
@private
	id<UIKeyboardEmojiController> emojiController;	// 4 = 0x4
	NSMutableDictionary *categories;	// 8 = 0x8
	NSMutableDictionary *_defaultsData;	// 12 = 0xc
}
@property(retain) NSDictionary *defaultsData;	// G=0x3559aa39; S=0x3559a9c9; 
- (id)initWithController:(id)controller;	// 0x3559a525
- (id)categoryForKey:(id)key;	// 0x3559a619
- (void)dealloc;	// 0x3559a599
// declared property getter: - (id)defaultsData;	// 0x3559aa39
- (void)releaseCategories;	// 0x3559a5f9
// declared property setter: - (void)setDefaultsData:(id)data;	// 0x3559a9c9
- (void)updateRecents;	// 0x3559a96d
@end

