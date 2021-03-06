/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject {
@private
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSSpeechSynthesizerDelegate> _delegate;	// 12 = 0xc
	NSString *_voice;	// 16 = 0x10
	int _footprint;	// 20 = 0x14
	float _rate;	// 24 = 0x18
	float _pitch;	// 28 = 0x1c
	float _volume;	// 32 = 0x20
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 36 = 0x24
}
@property(assign) int footprint;	// G=0x30e4b4fd; S=0x30e4b4ed; converted property
@property(readonly, assign) float pitch;	// G=0x30e4b4cd; converted property
@property(readonly, assign) float rate;	// G=0x30e4b4ad; converted property
@property(retain) NSString *voice;	// G=0x30e4b899; S=0x30e4b8fd; converted property
@property(readonly, assign) float volume;	// G=0x30e4b4dd; converted property
+ (void)_localeDidChange;	// 0x30e4b575
+ (id)availableLanguageCodes;	// 0x30e4b5ad
+ (id)availableVoices;	// 0x30e4b5f5
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x30e4b5c9
+ (BOOL)isSystemSpeaking;	// 0x30e4b5a1
- (id)init;	// 0x30e4b50d
- (id)initForInputFeedback;	// 0x30e4c231
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;	// 0x30e4b6a9
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x30e4b64d
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x30e4b751
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x30e4b7a1
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x30e4b7f1
- (id)continueSpeaking;	// 0x30e4bb49
- (void)dealloc;	// 0x30e4c1a9
// converted property getter: - (int)footprint;	// 0x30e4b4fd
- (BOOL)isSpeaking;	// 0x30e4bb21
- (float)maximumRate;	// 0x30e4b4c5
- (float)minimumRate;	// 0x30e4b4bd
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x30e4bc2d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x30e4bbb5
// converted property getter: - (float)pitch;	// 0x30e4b4cd
// converted property getter: - (float)rate;	// 0x30e4b4ad
- (void)setDelegate:(id)delegate;	// 0x30e4c065
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x30e4b4ed
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x30e4b841
- (id)setPitch:(float)pitch;	// 0x30e4ba05
- (id)setRate:(float)rate;	// 0x30e4ba79
// converted property setter: - (void)setVoice:(id)voice;	// 0x30e4b8fd
- (id)setVolume:(float)volume;	// 0x30e4b945
- (id)speechString;	// 0x30e4baed
- (id)startSpeakingAttributedString:(id)string;	// 0x30e4bd19
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x30e4bcf5
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x30e4bccd
- (id)startSpeakingString:(id)string;	// 0x30e4c045
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x30e4bd51
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x30e4c021
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x30e4bd2d
- (id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;	// 0x30e4c001
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x30e4bcb9
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x30e4bc41
// converted property getter: - (id)voice;	// 0x30e4b899
// converted property getter: - (float)volume;	// 0x30e4b4dd
@end

