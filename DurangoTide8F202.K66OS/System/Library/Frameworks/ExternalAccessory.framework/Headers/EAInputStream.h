/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSInputStream.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSThread, NSCondition, NSMutableData, EASession, EAAccessory;

@interface EAInputStream : NSInputStream {
	id _delegate;	// 4 = 0x4
	EAAccessory *_accessory;	// 8 = 0x8
	EASession *_session;	// 12 = 0xc
	int _inputFromAccFd;	// 16 = 0x10
	char *_inputFromAccBuffer;	// 20 = 0x14
	NSMutableData *_inputFromAccData;	// 24 = 0x18
	NSCondition *_inputFromAccCondition;	// 28 = 0x1c
	NSThread *_inputFromAccThread;	// 32 = 0x20
	BOOL _isOpenCompletedEventSent;	// 36 = 0x24
	BOOL _hasNewBytesAvailable;	// 37 = 0x25
	BOOL _isAtEndEventSent;	// 38 = 0x26
	unsigned _streamStatus;	// 40 = 0x28
	CFRunLoopRef _runLoop;	// 44 = 0x2c
	CFRunLoopSourceRef _runLoopSource;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x32e63685; S=0x32e63695; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x32e63a81; converted property
- (id)initWithAccessory:(id)accessory forSession:(id)session;	// 0x32e63b19
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x32e638dd
- (void)_performAtEndOfStreamValidation;	// 0x32e6388d
- (void)_readInputFromAccThread;	// 0x32e64201
- (void)_scheduleCallback;	// 0x32e64195
- (void)_streamEventTrigger;	// 0x32e636c5
- (void)close;	// 0x32e63ebd
- (void)dealloc;	// 0x32e63aa5
// converted property getter: - (id)delegate;	// 0x32e63685
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x32e636c1
- (BOOL)hasBytesAvailable;	// 0x32e638f1
- (void)open;	// 0x32e63c1d
- (id)propertyForKey:(id)key;	// 0x32e636b5
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x32e6395d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x32e64145
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x32e64021
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32e63695
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x32e636b9
- (id)streamError;	// 0x32e636bd
// converted property getter: - (unsigned)streamStatus;	// 0x32e63a81
@end
