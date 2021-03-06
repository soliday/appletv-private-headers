/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class ML3MusicLibrary, NSString;

@interface MusicLibrary : NSObject {
@private
	NSString *_basePath;	// 4 = 0x4
	double _autoflushTargetTime;	// 8 = 0x8
	unsigned _autoflushScheduled : 1;	// 16 = 0x10
	unsigned _needsFlush : 1;	// 16 = 0x10
	ML3MusicLibrary *_library3;	// 20 = 0x14
}
+ (void)_dbSyncAlreadyActive;	// 0x30018df5
+ (void)_dbSyncDidEnd;	// 0x30018df9
+ (void)_dbSyncWillBegin;	// 0x30018df1
+ (BOOL)_isDBSyncActiveIncludePending;	// 0x30018d0d
+ (id)_sharedMusicLibrary:(BOOL)library;	// 0x30011e11
+ (void)beginDatabaseMigrationIfNecessary;	// 0x300096e5
+ (void)commitAllDeferredWork;	// 0x300192e5
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x300151c1
+ (BOOL)databaseDataFilesExist;	// 0x30018bf1
+ (void)disableFlush;	// 0x300190b9
+ (void)enableFlush;	// 0x300190e1
+ (BOOL)flush;	// 0x30011d75
+ (BOOL)isDBSyncActive;	// 0x30018d39
+ (BOOL)isFlushEnabled;	// 0x30019125
+ (id)mediaFolderPath;	// 0x30015199
+ (id)mediaFolderRelativePath:(id)path;	// 0x300192f5
+ (void)noteSyncAlreadyActive;	// 0x30018eb5
+ (void)noteSyncDidEnd;	// 0x30018f59
+ (void)noteSyncWillBegin;	// 0x30018dfd
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x30014c91
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;	// 0x30019395
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x30014cb5
+ (void)resetLibrary;	// 0x30019025
+ (void)scheduleFlushDatabase;	// 0x30016f31
+ (void)setSyncIsActive:(BOOL)active alreadyInTargetState:(BOOL)targetState withStateChangeHandlerBlock:(id)stateChangeHandlerBlock;	// 0x30018d49
+ (id)sharedMusicLibrary;	// 0x30019011
+ (id)sharedMusicLibraryIfExists;	// 0x30011da5
- (id)initWithBasePath:(id)basePath;	// 0x300189a9
- (void)_autoflush;	// 0x300192ad
- (void)_cancelAutoflush;	// 0x3001925d
- (void)commitAllDeferredWork;	// 0x300192d5
- (void)dealloc;	// 0x30018b59
- (BOOL)flush;	// 0x300192d1
- (void)mainThread_scheduleFlushDatabase;	// 0x3001913d
- (void)scheduleFlushDatabase;	// 0x30019235
@end

