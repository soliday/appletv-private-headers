/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSURLConnection, NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <NSURLConnectionDelegate> {
	NSURLConnection *_connection;	// 4 = 0x4
	NSMutableData *_responseData;	// 8 = 0x8
	NSString *_countryCode;	// 12 = 0xc
	NSDictionary *_oldProvidersInfo;	// 16 = 0x10
	NSString *_oldCountryCode;	// 20 = 0x14
	BOOL _isObservingReachability;	// 24 = 0x18
	BOOL _isUpdating;	// 25 = 0x19
}
@property(copy, nonatomic) NSString *countryCode;	// G=0x32cf9111; S=0x32cf9595; @synthesize=_countryCode
+ (id)sharedConfiguration;	// 0x32cf89a9
- (void)_checkCountryCode;	// 0x32cf8d81
- (void)_checkCountryProviders;	// 0x32cf8ee1
- (void)_reachabilityChanged:(id)changed;	// 0x32cf8af5
- (void)_registerNetworkDefaults;	// 0x32cf8e75
- (void)_useCountryCodeProvider:(id)provider;	// 0x32cf93b9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32cf9169
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32cf92ad
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32cf91bd
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x32cf91b9
- (void)connectionDidFinishLoading:(id)connection;	// 0x32cf92cd
// declared property getter: - (id)countryCode;	// 0x32cf9111
- (id)countryDefaultForKey:(id)key;	// 0x32cf9535
- (void)dealloc;	// 0x32cf8a15
- (id)defaultForKey:(id)key defaultValue:(id)value;	// 0x32cf9509
// declared property setter: - (void)setCountryCode:(id)code;	// 0x32cf9595
- (void)toggleCountry;	// 0x32cf946d
- (void)updateProvidersForCurrentCountry;	// 0x32cf8b95
@end

