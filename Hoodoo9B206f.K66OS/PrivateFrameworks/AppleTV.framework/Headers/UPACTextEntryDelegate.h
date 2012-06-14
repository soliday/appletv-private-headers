/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UPACTextEntryDelegate : NSObject <BRTextFieldDelegate> {
@private
	id _completionHandler;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
}
@property(copy, nonatomic) id completionHandler;	// G=0x36647d21; S=0x36647d31; @synthesize=_completionHandler
@property(retain, nonatomic) NSString *text;	// G=0x36647d55; S=0x36647d65; @synthesize=_text
// declared property getter: - (id)completionHandler;	// 0x36647d21
- (void)dealloc;	// 0x36647c05
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x36647d31
// declared property setter: - (void)setText:(id)text;	// 0x36647d65
// declared property getter: - (id)text;	// 0x36647d55
- (void)textDidChange:(id)text;	// 0x36647c65
- (void)textDidEndEditing:(id)text;	// 0x36647c69
@end
