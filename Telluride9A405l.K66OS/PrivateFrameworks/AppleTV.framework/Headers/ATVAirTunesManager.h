/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray;
@protocol ATVAirTunesManagerDelegate;

@interface ATVAirTunesManager : BRSingleton {
@private
	id<ATVAirTunesManagerDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_speakersPendingConnection;	// 8 = 0x8
	NSMutableArray *_speakersPendingDisconnection;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x35cb1bb1
+ (id)singleton;	// 0x35cb1ba1
- (id)init;	// 0x35cb1bc1
- (void)_connectionFailedToAuth:(id)auth;	// 0x35cb2689
- (void)_connectionFinished:(id)finished;	// 0x35cb2649
- (void)_connectionStarted:(id)started;	// 0x35cb251d
- (id)_connectionStatus;	// 0x35cb2475
- (void)_retryConnection:(id)connection;	// 0x35cb2769
- (id)_supportedMediaTypes;	// 0x35cb237d
- (BOOL)airTunesAvailableForAsset:(id)asset;	// 0x35cb1ddd
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x35cb21f5
- (void)connectSpeaker:(id)speaker withPassword:(id)password saved:(BOOL)saved andDisconnectOthers:(BOOL)others;	// 0x35cb2011
- (void)connectionFinishedForSpeaker:(id)speaker;	// 0x35cb20fd
- (void)connectionStartedForSpeaker:(id)speaker;	// 0x35cb20b5
- (void)dealloc;	// 0x35cb1cf9
- (void)disconnectSpeaker:(id)speaker;	// 0x35cb2075
- (void)disconnectionFinishedForSpeaker:(id)speaker;	// 0x35cb218d
- (void)disconnectionStartedForSpeaker:(id)speaker;	// 0x35cb2145
- (int)numRemoteSpeakers;	// 0x35cb1e49
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x35cb1e69
- (id)remoteSpeakerInfoForAllConnectedSpeakers;	// 0x35cb1f0d
- (id)remoteSpeakerInfoForSpeakerID:(id)speakerID;	// 0x35cb1e89
- (void)setAirTunesManagerDelegate:(id)delegate;	// 0x35cb1d9d
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x35cb2281
- (void)setControlEnabledFromRemoteSpeakers:(BOOL)remoteSpeakers;	// 0x35cb2095
- (id)speakersWithConnectionsPending;	// 0x35cb21d5
- (id)speakersWithDisconnectionsPending;	// 0x35cb21e5
@end

