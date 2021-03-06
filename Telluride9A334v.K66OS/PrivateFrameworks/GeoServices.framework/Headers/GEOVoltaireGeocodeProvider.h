/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "PBRequesterDelegate.h"
#import "GEOGeocodeProvider.h"

@class PBRequester;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {
	PBRequester *_requester;	// 12 = 0xc
}
+ (id)forwardGeocoderURL;	// 0x32c87b65
+ (unsigned short)provider;	// 0x32c87b55
+ (id)providerName;	// 0x32c87b59
+ (id)reverseGeocoderURL;	// 0x32c87bed
- (void)cancel;	// 0x32c87b35
- (void)dealloc;	// 0x32c875d9
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x32c87691
- (id)newRequester:(id)requester;	// 0x32c87655
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x32c87a85
- (void)requesterDidCancel:(id)requester;	// 0x32c87ab5
- (void)requesterDidFinish:(id)requester;	// 0x32c8797d
- (void)reverseGeocode:(id)geocode success:(id)success error:(id)error;	// 0x32c877a1
@end

