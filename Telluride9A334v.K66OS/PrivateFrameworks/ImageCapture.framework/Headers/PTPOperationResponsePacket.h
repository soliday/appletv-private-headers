/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationResponsePacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned short _responseCode;	// 8 = 0x8
	unsigned _transactionID;	// 12 = 0xc
	unsigned _parameters[5];	// 16 = 0x10
}
@property(readonly, assign) int numParameters;	// G=0x32250e71; converted property
@property(assign) unsigned long parameter1;	// G=0x32250eb5; S=0x32250ec5; converted property
@property(assign) unsigned long parameter2;	// G=0x32250ed5; S=0x32250ee9; converted property
@property(assign) unsigned long parameter3;	// G=0x32250efd; S=0x32250f11; converted property
@property(assign) unsigned long parameter4;	// G=0x32250f25; S=0x32250f39; converted property
@property(assign) unsigned long parameter5;	// G=0x32250f4d; S=0x32250f61; converted property
@property(assign) unsigned short responseCode;	// G=0x32250e31; S=0x32250e41; converted property
@property(assign) unsigned long transactionID;	// G=0x32250e51; S=0x32250e61; converted property
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId;	// 0x322517f9
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId numParameters:(unsigned long)parameters parameters:(unsigned *)parameters4;	// 0x32250f75
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x32251789
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x3225170d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x3225167d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x322515e5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x3225153d
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x32251475
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x322513ad
- (id)contentForTCP;	// 0x322512c5
- (id)contentForUSB;	// 0x322511dd
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x32251101
- (id)description;	// 0x32250ff9
// converted property getter: - (int)numParameters;	// 0x32250e71
// converted property getter: - (unsigned long)parameter1;	// 0x32250eb5
// converted property getter: - (unsigned long)parameter2;	// 0x32250ed5
// converted property getter: - (unsigned long)parameter3;	// 0x32250efd
// converted property getter: - (unsigned long)parameter4;	// 0x32250f25
// converted property getter: - (unsigned long)parameter5;	// 0x32250f4d
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x32250e81
// converted property getter: - (unsigned short)responseCode;	// 0x32250e31
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x32250ec5
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x32250ee9
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x32250f11
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x32250f39
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x32250f61
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x32250e9d
// converted property setter: - (void)setResponseCode:(unsigned short)code;	// 0x32250e41
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x32250e61
// converted property getter: - (unsigned long)transactionID;	// 0x32250e51
@end
