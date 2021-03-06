/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject {
	id _delegate;	// 4 = 0x4
	DeviceManager *_deviceManager;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	CGImageRef _icon;	// 16 = 0x10
	NSString *_productKind;	// 20 = 0x14
	NSString *_transportType;	// 24 = 0x18
	NSString *_UUIDString;	// 28 = 0x1c
	int _usbLocationID;	// 32 = 0x20
	int _usbProductID;	// 36 = 0x24
	int _usbVendorID;	// 40 = 0x28
	BOOL _hasOpenSession;	// 44 = 0x2c
	BOOL _autoOpenSession;	// 45 = 0x2d
	BOOL _openSessionPending;	// 46 = 0x2e
	BOOL _closeSessionPending;	// 47 = 0x2f
}
@property(retain) NSString *UUIDString;	// G=0x312dd275; S=0x312dd311; @synthesize=_UUIDString
@property(assign) BOOL autoOpenSession;	// G=0x312dca11; S=0x312dca21; @synthesize=_autoOpenSession
@property(assign) BOOL closeSessionPending;	// G=0x312dc9d1; S=0x312dc9e1; @synthesize=_closeSessionPending
@property(assign) id delegate;	// G=0x312dcad1; S=0x312dcae1; @synthesize=_delegate
@property(assign) DeviceManager *deviceManager;	// G=0x312dcab1; S=0x312dcac1; @synthesize=_deviceManager
@property(assign) BOOL hasOpenSession;	// G=0x312dca31; S=0x312dca41; @synthesize=_hasOpenSession
@property(assign) CGImageRef icon;	// G=0x312dc9c1; S=0x312dcb01; @dynamic
@property(retain) NSString *name;	// G=0x312dd22d; S=0x312dd28d; @synthesize=_name
@property(assign) BOOL openSessionPending;	// G=0x312dc9f1; S=0x312dca01; @synthesize=_openSessionPending
@property(retain) NSString *productKind;	// G=0x312dd245; S=0x312dd2b9; @synthesize=_productKind
@property(retain) NSString *transportType;	// G=0x312dd25d; S=0x312dd2e5; @synthesize=_transportType
@property(assign) int usbLocationID;	// G=0x312dca91; S=0x312dcaa1; @synthesize=_usbLocationID
@property(assign) int usbProductID;	// G=0x312dca71; S=0x312dca81; @synthesize=_usbProductID
@property(assign) int usbVendorID;	// G=0x312dca51; S=0x312dca61; @synthesize=_usbVendorID
// declared property getter: - (id)UUIDString;	// 0x312dd275
// declared property getter: - (BOOL)autoOpenSession;	// 0x312dca11
// declared property getter: - (BOOL)closeSessionPending;	// 0x312dc9d1
- (void)dealloc;	// 0x312dd195
// declared property getter: - (id)delegate;	// 0x312dcad1
// declared property getter: - (id)deviceManager;	// 0x312dcab1
- (void)finalize;	// 0x312dd0fd
// declared property getter: - (BOOL)hasOpenSession;	// 0x312dca31
// declared property getter: - (CGImageRef)icon;	// 0x312dc9c1
// declared property getter: - (id)name;	// 0x312dd22d
// declared property getter: - (BOOL)openSessionPending;	// 0x312dc9f1
// declared property getter: - (id)productKind;	// 0x312dd245
// declared property setter: - (void)setAutoOpenSession:(BOOL)session;	// 0x312dca21
// declared property setter: - (void)setCloseSessionPending:(BOOL)pending;	// 0x312dc9e1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x312dcae1
// declared property setter: - (void)setDeviceManager:(id)manager;	// 0x312dcac1
// declared property setter: - (void)setHasOpenSession:(BOOL)session;	// 0x312dca41
// declared property setter: - (void)setIcon:(CGImageRef)icon;	// 0x312dcb01
// declared property setter: - (void)setName:(id)name;	// 0x312dd28d
// declared property setter: - (void)setOpenSessionPending:(BOOL)pending;	// 0x312dca01
// declared property setter: - (void)setProductKind:(id)kind;	// 0x312dd2b9
// declared property setter: - (void)setTransportType:(id)type;	// 0x312dd2e5
// declared property setter: - (void)setUUIDString:(id)string;	// 0x312dd311
// declared property setter: - (void)setUsbLocationID:(int)anId;	// 0x312dcaa1
// declared property setter: - (void)setUsbProductID:(int)anId;	// 0x312dca81
// declared property setter: - (void)setUsbVendorID:(int)anId;	// 0x312dca61
// declared property getter: - (id)transportType;	// 0x312dd25d
// declared property getter: - (int)usbLocationID;	// 0x312dca91
// declared property getter: - (int)usbProductID;	// 0x312dca71
// declared property getter: - (int)usbVendorID;	// 0x312dca51
@end

