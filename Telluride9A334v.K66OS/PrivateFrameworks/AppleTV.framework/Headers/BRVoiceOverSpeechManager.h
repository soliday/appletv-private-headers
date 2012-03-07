/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSThread, NSMutableArray, NSDictionary, NSString;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : NSObject {
@private
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	NSDictionary *_pronunciationGuide;	// 16 = 0x10
	NSString *_systemLanguage;	// 20 = 0x14
	BOOL _runLoopEnabled;	// 24 = 0x18
	BOOL _didInitialize;	// 25 = 0x19
	BOOL _isSpeaking;	// 26 = 0x1a
	BOOL _speechEnabled;	// 27 = 0x1b
}
@property(readonly, assign) BOOL isSpeaking;	// G=0x331b8f69; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x331b9175; S=0x331b8b7d; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x331b8fd9; S=0x331b9089; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x331b9185; S=0x331b9195; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x331b80f5
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x331b815d
- (id)init;	// 0x331b7d51
- (void)_clearSpeechQueue;	// 0x331b8cf9
- (void)_continueSpeaking;	// 0x331b8e55
- (void)_dispatchSpeechAction:(id)action;	// 0x331b8bad
- (void)_initialize;	// 0x331b7f95
- (void)_isSpeaking:(id)speaking;	// 0x331b8f15
- (void)_pauseSpeaking;	// 0x331b8df5
- (id)_preprocessString:(id)string language:(id)language;	// 0x331b8981
- (id)_processDurationStrings:(id)strings;	// 0x331b85c1
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x331b8815
- (void)_setSpeechRate:(id)rate;	// 0x331b901d
- (void)_speechJobFinished:(BOOL)finished;	// 0x331b827d
- (void)_startNextSpeechJob;	// 0x331b83f5
- (void)_stopSpeaking;	// 0x331b8eb5
- (void)clearSpeechQueue;	// 0x331b8d19
- (void)continueSpeaking;	// 0x331b8e75
- (void)dealloc;	// 0x331b7eb5
- (void)dispatchSpeechAction:(id)action;	// 0x331b8d59
// converted property getter: - (BOOL)isSpeaking;	// 0x331b8f69
- (void)pauseSpeaking;	// 0x331b8e15
- (void)setMaintainConnection:(BOOL)connection;	// 0x331b825d
- (void)setPitch:(id)pitch;	// 0x331b833d
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x331b8b7d
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x331b9089
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x331b9195
// declared property getter: - (BOOL)speechEnabled;	// 0x331b9175
// declared property getter: - (float)speechRate;	// 0x331b8fd9
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x331b9145
- (void)stopSpeaking;	// 0x331b8ed5
// declared property getter: - (id)systemLanguage;	// 0x331b9185
@end
