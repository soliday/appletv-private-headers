/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject {
@private
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSSpeechSynthesizerDelegate> _delegate;	// 12 = 0xc
	NSString *_voice;	// 16 = 0x10
	float _rate;	// 20 = 0x14
	float _pitch;	// 24 = 0x18
	float _volume;	// 28 = 0x1c
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 32 = 0x20
}
@property(readonly, assign) float pitch;	// G=0x324f887d; converted property
@property(readonly, assign) float rate;	// G=0x324f885d; converted property
@property(retain) NSString *voice;	// G=0x324f8b61; S=0x324f8bbd; converted property
@property(readonly, assign) float volume;	// G=0x324f888d; converted property
+ (void)_localeDidChange;	// 0x324f8b3d
+ (id)availableLanguageCodes;	// 0x324f950d
+ (id)availableVoices;	// 0x324f9491
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x324f94e5
+ (BOOL)isSystemSpeaking;	// 0x324f9525
- (id)init;	// 0x324f889d
- (id)initForInputFeedback;	// 0x324f8de5
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed withError:(id)error;	// 0x324f8e0d
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x324f8a0d
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x324f8a65
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x324f8aad
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x324f8af5
- (id)continueSpeaking;	// 0x324f9381
- (void)dealloc;	// 0x324f8e7d
- (BOOL)isSpeaking;	// 0x324f93e5
- (float)maximumRate;	// 0x324f8875
- (float)minimumRate;	// 0x324f886d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x324f8bf9
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x324f930d
// converted property getter: - (float)pitch;	// 0x324f887d
// converted property getter: - (float)rate;	// 0x324f885d
- (void)setDelegate:(id)delegate;	// 0x324f8cf5
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x324f942d
- (id)setPitch:(float)pitch;	// 0x324f8ef9
- (id)setRate:(float)rate;	// 0x324f8f71
// converted property setter: - (void)setVoice:(id)voice;	// 0x324f8bbd
- (id)setVolume:(float)volume;	// 0x324f8fe9
- (id)speechString;	// 0x324f9405
- (id)startSpeakingAttributedString:(id)string;	// 0x324f8c75
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x324f8c51
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x324f8c29
- (id)startSpeakingString:(id)string;	// 0x324f8cd5
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x324f90a5
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x324f8cb1
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x324f8c8d
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x324f8c11
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x324f9531
// converted property getter: - (id)voice;	// 0x324f8b61
// converted property getter: - (float)volume;	// 0x324f888d
@end

