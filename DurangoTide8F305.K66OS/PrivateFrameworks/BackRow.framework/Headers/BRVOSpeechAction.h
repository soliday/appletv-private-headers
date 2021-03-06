/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : NSObject {
@private
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x32a0f14d; S=0x32a0f15d; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x32a0f12d; S=0x32a0fdc1; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x32a0f13d; S=0x32a0fd99; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x32a0f18d; S=0x32a0fd71; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x32a0f16d; S=0x32a0f17d; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x32a0f19d; S=0x32a0fd45; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x32a0facd
// declared property getter: - (BOOL)cannotInterrupt;	// 0x32a0f14d
// declared property getter: - (id)completionCallback;	// 0x32a0f12d
- (void)dealloc;	// 0x32a0fcc5
- (id)description;	// 0x32a0fa7d
// declared property getter: - (id)language;	// 0x32a0f13d
// declared property getter: - (id)pitch;	// 0x32a0f18d
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x32a0f15d
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x32a0fdc1
// declared property setter: - (void)setLanguage:(id)language;	// 0x32a0fd99
// declared property setter: - (void)setPitch:(id)pitch;	// 0x32a0fd71
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x32a0f17d
// declared property setter: - (void)setString:(id)string;	// 0x32a0fd45
// declared property getter: - (BOOL)shouldQueue;	// 0x32a0f16d
// declared property getter: - (id)string;	// 0x32a0f19d
@end

