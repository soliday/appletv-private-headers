/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOSupportedTileSetsServerProxyDelegate.h"
#import "GeoServices-Structs.h"

@class NSTimer, GEOSupportedTileSetsDownload, NSBundle;
@protocol GEOSupportedTileSetsServerProxy;

@interface GEOTileSetsManager : NSObject <GEOSupportedTileSetsServerProxyDelegate> {
	NSBundle *_fallbackBundle;	// 4 = 0x4
	GEOSupportedTileSetsDownload *_download;	// 8 = 0x8
	NSTimer *_updateTimer;	// 12 = 0xc
	BOOL _isObservingReachability;	// 16 = 0x10
	id<GEOSupportedTileSetsServerProxy> _serverConnection;	// 20 = 0x14
}
+ (id)sharedManager;	// 0x31cfdddd
+ (void)useLocalManager;	// 0x31cfddcd
+ (void)useRemoteManager;	// 0x31cfddbd
- (id)initWithFallbackBundle:(id)fallbackBundle;	// 0x31cfdecd
- (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x31cfe30d
- (void)_loadDocumentFromDisk;	// 0x31cfecc9
- (void)_reachabilityChanged:(id)changed;	// 0x31cfe481
- (void)_registerReachabilityObserver;	// 0x31cfe33d
- (void)_scheduleUpdateTimerWithTimeInterval:(double)timeInterval;	// 0x31cfe6ad
- (void)_updateDocument;	// 0x31cfe399
- (BOOL)_updateDocumentIfNecessary;	// 0x31cfe521
- (void)_updateTimerFired:(id)fired;	// 0x31cfe749
- (void)dealloc;	// 0x31cfe0c5
- (BOOL)hasDocument;	// 0x31cfe2dd
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x31cfe79d
- (void)supportedTileSetsServerProxy:(id)proxy didReceiveDocumentData:(id)data;	// 0x31cfeac9
- (void)supportedTileSetsServerProxyReportedCacheIsCurrent:(id)current;	// 0x31cfea39
- (void)supportedTileSetsServerProxyUpdateDidFail:(id)supportedTileSetsServerProxyUpdate;	// 0x31cfe975
- (BOOL)supportsTileSetStyle:(const GEOTileKey *)style;	// 0x31cfe2bd
- (id)tileSetForTileKey:(const GEOTileKey *)tileKey;	// 0x31cfe1b5
@end
