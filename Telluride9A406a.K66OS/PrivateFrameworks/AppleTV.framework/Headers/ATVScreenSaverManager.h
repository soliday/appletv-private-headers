/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class BRWindow, ATVScreenSaverPrefetchTask, NSTimer;

@interface ATVScreenSaverManager : BRSingleton {
@private
	NSTimer *_timer;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	BRWindow *_window;	// 16 = 0x10
	long _state;	// 20 = 0x14
	BOOL _enabled;	// 24 = 0x18
	BOOL _screenSaverPosted;	// 25 = 0x19
	BOOL _handlingTimeoutChangeNotification;	// 26 = 0x1a
	ATVScreenSaverPrefetchTask *_prefetchTask;	// 28 = 0x1c
	BOOL _screenSaverAutoFired;	// 32 = 0x20
}
+ (id)screenSaverFaces;	// 0x32f90cd9
+ (id)screenSaverFacesCachePath;	// 0x32f90c89
+ (void)setSingleton:(id)singleton;	// 0x32f90d21
+ (id)singleton;	// 0x32f90d11
- (id)init;	// 0x32f90d31
- (BOOL)_allowedToLoadPrincipalClassNamed:(id)loadPrincipalClassNamed;	// 0x32f92641
- (void)_createTimer;	// 0x32f91899
- (void)_dismissScreenSaver:(id)saver;	// 0x32f91d41
- (void)_fadeFinished;	// 0x32f91561
- (void)_prefetchComplete:(id)complete;	// 0x32f924d1
- (void)_screenSaverArchiveChanged:(id)changed;	// 0x32f9200d
- (void)_screenSaverControllerActivate:(id)activate;	// 0x32f91dc1
- (void)_screenSaverControllerDeactivate:(id)deactivate;	// 0x32f91e09
- (void)_screenSaverFired:(id)fired;	// 0x32f91995
- (void)_screenSaverIntervalChanged:(id)changed;	// 0x32f91e5d
- (id)_screenSaverPlugInControl;	// 0x32f91a55
- (void)_serverStatusChanged:(id)changed;	// 0x32f92179
- (void)_startOneTimePrefetchTask:(id)task;	// 0x32f922b5
- (void)_startRepeatingPrefetchTask;	// 0x32f923c1
- (void)_stopPrefetchTask;	// 0x32f92501
- (void)_updateActivity:(id)activity;	// 0x32f91ccd
- (BOOL)_validateBundleAtPath:(id)path;	// 0x32f92599
- (void)dealloc;	// 0x32f90f4d
- (void)enable;	// 0x32f91011
- (id)screenSaverPathsFromDirectory:(id)directory;	// 0x32f91375
- (BOOL)screenSaverPrefetchActive;	// 0x32f9153d
- (BOOL)screenSaverRequiresPrefetch;	// 0x32f914cd
- (void)showScreenSaver;	// 0x32f91041
@end

