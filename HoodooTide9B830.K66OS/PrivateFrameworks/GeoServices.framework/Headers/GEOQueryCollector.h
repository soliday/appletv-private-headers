/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSURL;

@interface GEOQueryCollector : NSObject {
	NSURL *_searchQueryServerURL;	// 4 = 0x4
	NSURL *_directionsQueryServerURL;	// 8 = 0x8
}
+ (id)sharedCollector;	// 0x35f17159
- (id)init;	// 0x35f171c5
- (void)cancelAllSubmissions;	// 0x35f175d1
- (void)dealloc;	// 0x35f17299
- (void)submitDirectionsQuery:(id)query;	// 0x35f1745d
- (void)submitSearchQuery:(id)query;	// 0x35f172f9
@end

