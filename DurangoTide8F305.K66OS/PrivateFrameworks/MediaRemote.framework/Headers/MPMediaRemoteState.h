/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <NSObject.h> // Unknown library


@interface MPMediaRemoteState : NSObject {
@private
	int _notifyLaunchedToken;	// 4 = 0x4
	id _commandHandlerBlock;	// 8 = 0x8
	BOOL _canBeNowPlayingApp;	// 12 = 0xc
	BOOL _isOverrideApp;	// 13 = 0xd
	BOOL _includeVideoRoutes;	// 14 = 0xe
	unsigned _routeDiscoveryCount;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL canBeNowPlayingApp;	// G=0x33b02e3d; S=0x33b02e4d; @synthesize=_canBeNowPlayingApp
@property(copy, nonatomic) id commandHandlerBlock;	// G=0x33b02e2d; S=0x33b034b9; @synthesize=_commandHandlerBlock
@property(assign, nonatomic) BOOL includeVideoRoutes;	// G=0x33b02e0d; S=0x33b02e1d; @synthesize=_includeVideoRoutes
@property(assign, nonatomic) BOOL isOverrideApp;	// G=0x33b02ded; S=0x33b02dfd; @synthesize=_isOverrideApp
- (id)init;	// 0x33b02ebd
- (void)_avSystemControllerServerConnectionDiedNotification:(id)notification;	// 0x33b030f5
- (void)beginRouteDiscovery;	// 0x33b02dc5
// declared property getter: - (BOOL)canBeNowPlayingApp;	// 0x33b02e3d
// declared property getter: - (id)commandHandlerBlock;	// 0x33b02e2d
- (void)dealloc;	// 0x33b032ed
- (void)endRouteDiscovery;	// 0x33b02dd9
// declared property getter: - (BOOL)includeVideoRoutes;	// 0x33b02e0d
// declared property getter: - (BOOL)isOverrideApp;	// 0x33b02ded
// declared property setter: - (void)setCanBeNowPlayingApp:(BOOL)app;	// 0x33b02e4d
// declared property setter: - (void)setCommandHandlerBlock:(id)block;	// 0x33b034b9
// declared property setter: - (void)setIncludeVideoRoutes:(BOOL)routes;	// 0x33b02e1d
// declared property setter: - (void)setIsOverrideApp:(BOOL)app;	// 0x33b02dfd
@end
