/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, NSArray, NoteContext;

@interface AccountUtilities : NSObject {
	AccountsManager *_accountsManager;	// 4 = 0x4
	NSArray *_syncableAccounts;	// 8 = 0x8
	NoteContext *_noteContext;	// 12 = 0xc
}
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x30758cd9; converted property
+ (id)sharedAccountUtilities;	// 0x30758c69
- (id)init;	// 0x30758f21
- (void).cxx_destruct;	// 0x3075a779
- (void)accountsChanged;	// 0x30758d51
// converted property getter: - (id)accountsManager;	// 0x30758cd9
- (id)allDisplayAccounts;	// 0x30759191
- (id)allSyncableAccounts;	// 0x30759119
- (void)dealloc;	// 0x307590c5
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)desiredSyncId;	// 0x30759be9
- (BOOL)isDeviceLocalAccount:(id)account;	// 0x3075a305
- (BOOL)localNotesExist;	// 0x3075a3a9
- (id)syncAccountIdForDisplayAccountId:(id)displayAccountId;	// 0x307597c1
@end

