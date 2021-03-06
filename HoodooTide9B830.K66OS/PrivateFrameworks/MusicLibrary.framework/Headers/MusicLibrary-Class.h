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
+ (void)_dbSyncAlreadyActive;	// 0x34f948e1
+ (void)_dbSyncDidEnd;	// 0x34f948e5
+ (void)_dbSyncWillBegin;	// 0x34f948dd
+ (BOOL)_isDBSyncActiveIncludePending;	// 0x34f947f9
+ (id)_sharedMusicLibrary:(BOOL)library;	// 0x34f8dc69
+ (void)beginDatabaseMigrationIfNecessary;	// 0x34f853f9
+ (void)commitAllDeferredWork;	// 0x34f94dd1
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x34f90d19
+ (BOOL)databaseDataFilesExist;	// 0x34f946dd
+ (void)disableFlush;	// 0x34f94ba5
+ (void)enableFlush;	// 0x34f94bcd
+ (BOOL)flush;	// 0x34f8dbcd
+ (BOOL)isDBSyncActive;	// 0x34f94825
+ (BOOL)isFlushEnabled;	// 0x34f94c11
+ (id)mediaFolderPath;	// 0x34f90cf1
+ (id)mediaFolderRelativePath:(id)path;	// 0x34f94de1
+ (void)noteSyncAlreadyActive;	// 0x34f949a1
+ (void)noteSyncDidEnd;	// 0x34f94a45
+ (void)noteSyncWillBegin;	// 0x34f948e9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x34f907e9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;	// 0x34f94e81
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x34f9080d
+ (void)resetLibrary;	// 0x34f94b11
+ (void)scheduleFlushDatabase;	// 0x34f92a79
+ (void)setSyncIsActive:(BOOL)active alreadyInTargetState:(BOOL)targetState withStateChangeHandlerBlock:(id)stateChangeHandlerBlock;	// 0x34f94835
+ (id)sharedMusicLibrary;	// 0x34f94afd
+ (id)sharedMusicLibraryIfExists;	// 0x34f8dbfd
- (id)initWithBasePath:(id)basePath;	// 0x34f94495
- (void)_autoflush;	// 0x34f94d99
- (void)_cancelAutoflush;	// 0x34f94d49
- (void)commitAllDeferredWork;	// 0x34f94dc1
- (void)dealloc;	// 0x34f94645
- (BOOL)flush;	// 0x34f94dbd
- (void)mainThread_scheduleFlushDatabase;	// 0x34f94c29
- (void)scheduleFlushDatabase;	// 0x34f94d21
@end

