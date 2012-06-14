/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebViewDelegate.h"
#import <NSObject.h> // Unknown library

@class UIColor, NSArray, NSURL;
@protocol _UIDefinitionServiceDelegate;

__attribute__((visibility("hidden")))
@interface _UIDefinitionService : NSObject <UIWebViewDelegate> {
@private
	NSArray *_dictionaries;	// 4 = 0x4
	id<_UIDefinitionServiceDelegate> _delegate;	// 8 = 0x8
	UIColor *_backgroundColor;	// 12 = 0xc
	NSURL *_stylesheetURL;	// 16 = 0x10
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x3568fbf1; S=0x3568fc01; @synthesize=_backgroundColor
@property(assign, nonatomic) id<_UIDefinitionServiceDelegate> delegate;	// G=0x3568fbd1; S=0x3568fbe1; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *stylesheetURL;	// G=0x3568fc25; @synthesize=_stylesheetURL
+ (id)backgroundColor;	// 0x3568f895
+ (id)foregroundColor;	// 0x3568f8dd
- (id)init;	// 0x3568f925
- (id)_dictionaryForString:(id)string;	// 0x3568fa3d
// declared property getter: - (id)backgroundColor;	// 0x3568fbf1
- (void)dealloc;	// 0x3568f9b9
// declared property getter: - (id)delegate;	// 0x3568fbd1
- (BOOL)hasMarkupForString:(id)string;	// 0x3568faf1
- (unsigned)languageDirectionForString:(id)string;	// 0x3568fb81
- (id)markupForString:(id)string;	// 0x3568fb31
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x3568fc01
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3568fbe1
// declared property getter: - (id)stylesheetURL;	// 0x3568fc25
@end

