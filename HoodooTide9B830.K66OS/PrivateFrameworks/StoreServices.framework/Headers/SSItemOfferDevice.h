/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject {
@private
	int _deviceIdentifier;	// 4 = 0x4
	SSItemOfferDeviceError *_incompatibleDeviceError;	// 8 = 0x8
	SSItemOfferDeviceError *_incompatibleSystemError;	// 12 = 0xc
	NSString *_minimumProductVersion;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int deviceIdentifier;	// G=0x305049cd; @synthesize=_deviceIdentifier
@property(readonly, assign, nonatomic) SSItemOfferDeviceError *incompatibleDeviceError;	// G=0x305049dd; @synthesize=_incompatibleDeviceError
@property(readonly, assign, nonatomic) SSItemOfferDeviceError *incompatibleSystemError;	// G=0x305049ed; @synthesize=_incompatibleSystemError
@property(readonly, assign, nonatomic) NSString *minimumProductVersion;	// G=0x305049fd; @synthesize=_minimumProductVersion
- (id)init;	// 0x30504459
- (id)initWithDeviceIdentifier:(int)deviceIdentifier;	// 0x3050446d
- (id)initWithOfferDeviceDicitionary:(id)offerDeviceDicitionary;	// 0x305044ad
- (void)dealloc;	// 0x30504959
// declared property getter: - (int)deviceIdentifier;	// 0x305049cd
// declared property getter: - (id)incompatibleDeviceError;	// 0x305049dd
// declared property getter: - (id)incompatibleSystemError;	// 0x305049ed
// declared property getter: - (id)minimumProductVersion;	// 0x305049fd
@end

