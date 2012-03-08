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
	BRTextControl *_statusText;	// 112 = 0x70
	BRProgressBarWidget *_progressBar;	// 116 = 0x74
	ATVJSContext *_context;	// 120 = 0x78
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x3301479d; S=0x330147ad; @synthesize=_context
@property(retain, nonatomic) BRProgressBarWidget *progressBar;	// G=0x33014769; S=0x33014779; @synthesize=_progressBar
@property(retain, nonatomic) BRTextControl *statusText;	// G=0x33014735; S=0x33014745; @synthesize=_statusText
- (id)initWithDictionary:(id)dictionary;	// 0x33013e25
- (id)initWithFeedElement:(id)feedElement;	// 0x33013d45
- (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x33013f71
- (void)_setStatus:(id)status withPercentComplete:(float)percentComplete;	// 0x330145e9
// declared property getter: - (id)context;	// 0x3301479d
- (void)dealloc;	// 0x33013f05
- (void)layoutSubcontrols;	// 0x330144dd
// declared property getter: - (id)progressBar;	// 0x33014769
// declared property setter: - (void)setContext:(id)context;	// 0x330147ad
// declared property setter: - (void)setProgressBar:(id)bar;	// 0x33014779
// declared property setter: - (void)setStatusText:(id)text;	// 0x33014745
// declared property getter: - (id)statusText;	// 0x33014735
- (void)wasPopped;	// 0x3301449d
- (void)wasPushed;	// 0x33014241
@end
