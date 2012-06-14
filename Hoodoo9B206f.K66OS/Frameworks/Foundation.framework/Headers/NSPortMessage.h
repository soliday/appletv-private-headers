/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {
@private
	NSPort *localPort;	// 4 = 0x4
	NSPort *remotePort;	// 8 = 0x8
	NSMutableArray *components;	// 12 = 0xc
	unsigned msgid;	// 16 = 0x10
	void *reserved2;	// 20 = 0x14
	void *reserved;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *components;	// G=0x31d9f18d; converted property
@property(assign) unsigned msgid;	// G=0x31d9f16d; S=0x31d9f17d; converted property
- (id)initWithReceivePort:(id)receivePort sendPort:(id)port components:(id)components;	// 0x31d9f0c1
- (id)initWithSendPort:(id)sendPort receivePort:(id)port components:(id)components;	// 0x31d9f069
// converted property getter: - (id)components;	// 0x31d9f18d
- (id)copyWithZone:(NSZone *)zone;	// 0x31d9f209
- (void)dealloc;	// 0x31d9f0d9
// converted property getter: - (unsigned)msgid;	// 0x31d9f16d
- (id)receivePort;	// 0x31d9f15d
- (BOOL)sendBeforeDate:(id)date;	// 0x31d9f19d
- (id)sendPort;	// 0x31d9f14d
// converted property setter: - (void)setMsgid:(unsigned)msgid;	// 0x31d9f17d
@end

