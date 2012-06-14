/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, VSRecognitionAction;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : NSObject {
	id<VSRecognitionResultHandler> _handler;	// 4 = 0x4
	NSArray *_results;	// 8 = 0x8
	VSRecognitionAction *_action;	// 12 = 0xc
}
@property(retain) id nextAction;	// G=0x348dc791; S=0x348dc7c9; converted property
@property(readonly, retain) NSArray *results;	// G=0x348dc849; converted property
- (id)initWithHandler:(id)handler results:(id)results;	// 0x348dc8f5
- (void)dealloc;	// 0x348dc881
- (id)handler;	// 0x348dc811
// converted property getter: - (id)nextAction;	// 0x348dc791
// converted property getter: - (id)results;	// 0x348dc849
// converted property setter: - (void)setNextAction:(id)action;	// 0x348dc7c9
@end

