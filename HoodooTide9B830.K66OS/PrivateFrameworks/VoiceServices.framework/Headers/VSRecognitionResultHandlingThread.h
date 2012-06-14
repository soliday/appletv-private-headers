/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSConditionLock;
@protocol VSRecognitionResultHandlingThreadDelegate;

@interface VSRecognitionResultHandlingThread : NSObject {
	id<VSRecognitionResultHandlingThreadDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_requests;	// 8 = 0x8
	NSConditionLock *_lock;	// 12 = 0xc
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	} _resultHandlingFlags;	// 16 = 0x10
}
- (id)init;	// 0x348dc211
- (void)_handleRequests;	// 0x348dc299
- (void)_notifyRequestHandled:(id)handled;	// 0x348dc4b1
- (void)dealloc;	// 0x348dc731
- (void)handleResults:(id)results withHandler:(id)handler;	// 0x348dc589
- (void)invalidate;	// 0x348dc52d
- (void)setDelegate:(id)delegate;	// 0x348dc6d1
@end

