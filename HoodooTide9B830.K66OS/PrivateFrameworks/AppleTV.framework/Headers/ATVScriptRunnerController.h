/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class BRProgressBarWidget, BRTextControl, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVScriptRunnerController : ATVFeedController {
@private
	BRTextControl *_statusText;	// 124 = 0x7c
	BRProgressBarWidget *_progressBar;	// 128 = 0x80
	ATVJSContext *_context;	// 132 = 0x84
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x32975829; S=0x32975839; @synthesize=_context
@property(retain, nonatomic) BRProgressBarWidget *progressBar;	// G=0x329757f5; S=0x32975805; @synthesize=_progressBar
@property(retain, nonatomic) BRTextControl *statusText;	// G=0x329757c1; S=0x329757d1; @synthesize=_statusText
- (id)initWithDictionary:(id)dictionary;	// 0x32974da5
- (id)initWithFeedElement:(id)feedElement;	// 0x32974cc5
- (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x32974ef1
- (void)_setStatus:(id)status withPercentComplete:(float)percentComplete;	// 0x32975675
// declared property getter: - (id)context;	// 0x32975829
- (void)dealloc;	// 0x32974e85
- (void)layoutSubcontrols;	// 0x32975569
// declared property getter: - (id)progressBar;	// 0x329757f5
// declared property setter: - (void)setContext:(id)context;	// 0x32975839
// declared property setter: - (void)setProgressBar:(id)bar;	// 0x32975805
// declared property setter: - (void)setStatusText:(id)text;	// 0x329757d1
// declared property getter: - (id)statusText;	// 0x329757c1
- (void)wasPopped;	// 0x32975505
- (void)wasPushed;	// 0x329751f1
@end

