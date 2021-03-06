/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GEOGeocodeProvider.h> // Unknown library
#import "PBRequesterDelegate.h"

@class PBRequester, GEOGeocodeRequest, GEOSearchRequest;

@interface GMMGEOGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {
	GEOGeocodeRequest *_request;	// 12 = 0xc
	PBRequester *_requester;	// 16 = 0x10
	GEOSearchRequest *_searchRequest;	// 20 = 0x14
}
+ (unsigned short)provider;	// 0x33cee76d
+ (id)providerName;	// 0x33cee771
- (void)cancel;	// 0x33cee701
- (void)dealloc;	// 0x33cedc11
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x33cee131
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x33cee651
- (void)requesterDidCancel:(id)requester;	// 0x33cee681
- (void)requesterDidFinish:(id)requester;	// 0x33cee4dd
- (void)reverseGeocode:(id)geocode success:(id)success error:(id)error;	// 0x33cedcad
@end

