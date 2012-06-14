/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVScriptViewController : ATVFeedController {
@private
	ATVJSContext *_context;	// 124 = 0x7c
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x367876a1; S=0x367876b1; @synthesize=_context
- (id)initWithDictionary:(id)dictionary;	// 0x3678700d
- (id)initWithFeedElement:(id)feedElement;	// 0x36786fa9
// declared property getter: - (id)context;	// 0x367876a1
- (void)dealloc;	// 0x36787071
// declared property setter: - (void)setContext:(id)context;	// 0x367876b1
- (void)wasPopped;	// 0x3678763d
- (void)wasPushed;	// 0x367870b5
@end

