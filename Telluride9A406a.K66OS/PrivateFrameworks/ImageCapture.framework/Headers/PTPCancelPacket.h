/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPCancelPacket : NSObject {
	unsigned _transactionID;	// 4 = 0x4
}
@property(assign) unsigned long transactionID;	// G=0x326116e9; S=0x326116f9; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x32611811
- (id)initWithTransactionID:(unsigned long)transactionID;	// 0x32611709
- (id)contentForTCP;	// 0x32611791
- (id)description;	// 0x32611749
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x326116f9
// converted property getter: - (unsigned long)transactionID;	// 0x326116e9
@end
