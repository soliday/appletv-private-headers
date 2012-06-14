/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSData;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteState : NSObject {
@private
	BOOL _canBeNowPlayingApp;	// 4 = 0x4
	id _commandHandlerBlock;	// 8 = 0x8
	BOOL _includeVideoRoutes;	// 12 = 0xc
	BOOL _isOverrideApp;	// 13 = 0xd
	int _notifyLaunchedToken;	// 16 = 0x10
	NSData *_nowPlayingArtworkData;	// 20 = 0x14
	NSDictionary *_nowPlayingInfo;	// 24 = 0x18
	unsigned _routeDiscoveryCount;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL canBeNowPlayingApp;	// G=0x30fd3029; S=0x30fd3039; @synthesize=_canBeNowPlayingApp
@property(copy, nonatomic) id commandHandlerBlock;	// G=0x30fd3019; S=0x30fd3091; @synthesize=_commandHandlerBlock
@property(assign, nonatomic) BOOL includeVideoRoutes;	// G=0x30fd2ff9; S=0x30fd3009; @synthesize=_includeVideoRoutes
@property(assign, nonatomic) BOOL isOverrideApp;	// G=0x30fd2fd9; S=0x30fd2fe9; @synthesize=_isOverrideApp
@property(retain, nonatomic) NSData *nowPlayingArtworkData;	// G=0x30fd2fc9; S=0x30fd30b5; @synthesize=_nowPlayingArtworkData
@property(retain, nonatomic) NSDictionary *nowPlayingInfo;	// G=0x30fd2fb9; S=0x30fd30dd; @synthesize=_nowPlayingInfo
- (id)init;	// 0x30fd333d
- (void)_avSystemControllerServerConnectionDiedNotification:(id)notification;	// 0x30fd3105
- (void)beginRouteDiscovery;	// 0x30fd2f8d
// declared property getter: - (BOOL)canBeNowPlayingApp;	// 0x30fd3029
// declared property getter: - (id)commandHandlerBlock;	// 0x30fd3019
- (void)dealloc;	// 0x30fd326d
- (void)endRouteDiscovery;	// 0x30fd2fa1
// declared property getter: - (BOOL)includeVideoRoutes;	// 0x30fd2ff9
// declared property getter: - (BOOL)isOverrideApp;	// 0x30fd2fd9
// declared property getter: - (id)nowPlayingArtworkData;	// 0x30fd2fc9
// declared property getter: - (id)nowPlayingInfo;	// 0x30fd2fb9
// declared property setter: - (void)setCanBeNowPlayingApp:(BOOL)app;	// 0x30fd3039
// declared property setter: - (void)setCommandHandlerBlock:(id)block;	// 0x30fd3091
// declared property setter: - (void)setIncludeVideoRoutes:(BOOL)routes;	// 0x30fd3009
// declared property setter: - (void)setIsOverrideApp:(BOOL)app;	// 0x30fd2fe9
// declared property setter: - (void)setNowPlayingArtworkData:(id)data;	// 0x30fd30b5
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x30fd30dd
@end

