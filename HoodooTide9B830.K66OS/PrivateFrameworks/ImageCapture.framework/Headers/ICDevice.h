/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, DeviceManager;
@protocol ICDeviceDelegate;

@interface ICDevice : NSObject {
@private
	void *_deviceProperties;	// 4 = 0x4
}
@property(copy) NSString *UUIDString;	// G=0x354efb5d; S=0x354efb7d; 
@property(assign) BOOL autoOpenSession;	// G=0x354efbe9; S=0x354efc55; 
@property(assign) BOOL closeSessionPending;	// G=0x354efc31; S=0x354efc9d; 
@property(assign) id<ICDeviceDelegate> delegate;	// G=0x354ef93d; S=0x354ef95d; 
@property(assign) DeviceManager *deviceManager;	// G=0x354ef981; S=0x354ef9a1; 
@property(assign) BOOL hasOpenSession;	// G=0x354efba1; S=0x354efbc5; 
@property(readonly, assign) CGImageRef icon;	// G=0x354efd05; 
@property(copy) NSString *name;	// G=0x354ef9c5; S=0x354ef9e5; 
@property(assign) BOOL openSessionPending;	// G=0x354efc0d; S=0x354efc79; 
@property(copy) NSString *productKind;	// G=0x354efa09; S=0x354efa29; 
@property(copy) NSString *transportType;	// G=0x354efa4d; S=0x354efa6d; 
@property(assign) int usbLocationID;	// G=0x354efa91; S=0x354efab1; 
@property(assign) int usbProductID;	// G=0x354efad5; S=0x354efaf5; 
@property(assign) int usbVendorID;	// G=0x354efb19; S=0x354efb39; 
- (id)init;	// 0x354eff5d
// declared property getter: - (id)UUIDString;	// 0x354efb5d
// declared property getter: - (BOOL)autoOpenSession;	// 0x354efbe9
// declared property getter: - (BOOL)closeSessionPending;	// 0x354efc31
- (void)dealloc;	// 0x354f003d
// declared property getter: - (id)delegate;	// 0x354ef93d
- (id)description;	// 0x354ef79d
// declared property getter: - (id)deviceManager;	// 0x354ef981
- (void)finalize;	// 0x354effe9
- (void)handleCommandCompletionNotification:(id)notification;	// 0x354ef769
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x354ef76d
// declared property getter: - (BOOL)hasOpenSession;	// 0x354efba1
// declared property getter: - (CGImageRef)icon;	// 0x354efd05
// declared property getter: - (id)name;	// 0x354ef9c5
// declared property getter: - (BOOL)openSessionPending;	// 0x354efc0d
// declared property getter: - (id)productKind;	// 0x354efa09
- (void)requestCloseSession;	// 0x354ef765
- (void)requestOpenSession;	// 0x354ef761
// declared property setter: - (void)setAutoOpenSession:(BOOL)session;	// 0x354efc55
// declared property setter: - (void)setCloseSessionPending:(BOOL)pending;	// 0x354efc9d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x354ef95d
// declared property setter: - (void)setDeviceManager:(id)manager;	// 0x354ef9a1
// declared property setter: - (void)setHasOpenSession:(BOOL)session;	// 0x354efbc5
// declared property setter: - (void)setName:(id)name;	// 0x354ef9e5
// declared property setter: - (void)setOpenSessionPending:(BOOL)pending;	// 0x354efc79
// declared property setter: - (void)setProductKind:(id)kind;	// 0x354efa29
// declared property setter: - (void)setTransportType:(id)type;	// 0x354efa6d
// declared property setter: - (void)setUUIDString:(id)string;	// 0x354efb7d
// declared property setter: - (void)setUsbLocationID:(int)anId;	// 0x354efab1
// declared property setter: - (void)setUsbProductID:(int)anId;	// 0x354efaf5
// declared property setter: - (void)setUsbVendorID:(int)anId;	// 0x354efb39
// declared property getter: - (id)transportType;	// 0x354efa4d
// declared property getter: - (int)usbLocationID;	// 0x354efa91
// declared property getter: - (int)usbProductID;	// 0x354efad5
// declared property getter: - (int)usbVendorID;	// 0x354efb19
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x354efcc1
@end

