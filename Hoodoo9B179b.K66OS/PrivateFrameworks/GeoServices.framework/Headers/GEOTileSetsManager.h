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
+ (id)sharedManager;	// 0x32cfbca5
+ (void)useLocalManager;	// 0x32cfbc95
+ (void)useRemoteManager;	// 0x32cfbc85
- (id)initWithFallbackBundle:(id)fallbackBundle;	// 0x32cfbd95
- (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x32cfc1d5
- (void)_loadDocumentFromDisk;	// 0x32cfcb91
- (void)_reachabilityChanged:(id)changed;	// 0x32cfc349
- (void)_registerReachabilityObserver;	// 0x32cfc205
- (void)_scheduleUpdateTimerWithTimeInterval:(double)timeInterval;	// 0x32cfc575
- (void)_updateDocument;	// 0x32cfc261
- (BOOL)_updateDocumentIfNecessary;	// 0x32cfc3e9
- (void)_updateTimerFired:(id)fired;	// 0x32cfc611
- (void)dealloc;	// 0x32cfbf8d
- (BOOL)hasDocument;	// 0x32cfc1a5
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x32cfc665
- (void)supportedTileSetsServerProxy:(id)proxy didReceiveDocumentData:(id)data;	// 0x32cfc991
- (void)supportedTileSetsServerProxyReportedCacheIsCurrent:(id)current;	// 0x32cfc901
- (void)supportedTileSetsServerProxyUpdateDidFail:(id)supportedTileSetsServerProxyUpdate;	// 0x32cfc83d
- (BOOL)supportsTileSetStyle:(const GEOTileKey *)style;	// 0x32cfc185
- (id)tileSetForTileKey:(const GEOTileKey *)tileKey;	// 0x32cfc07d
@end

