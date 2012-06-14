/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import <DATaskManager.h> // Unknown library
#import "CoreDAVTaskManager.h"

@class NSRunLoop;

@interface BookmarkDAVTaskManager : DATaskManager <CoreDAVTaskManager> {
	int _numActiveTasks;	// 56 = 0x38
}
@property(retain) NSRunLoop *workRunLoop;	// G=0x325df2a1; S=0x325df2bd; 
- (void)_updateSpinner:(BOOL)spinner;	// 0x325def75
- (void)coreDAVTaskDidFinish:(id)coreDAVTask;	// 0x325df291
- (void)coreDAVTaskEndModal:(id)modal;	// 0x325df281
- (void)coreDAVTaskRequestModal:(id)modal;	// 0x325df271
// declared property setter: - (void)setWorkRunLoop:(id)loop;	// 0x325df2bd
- (void)submitIndependentCoreDAVTask:(id)task;	// 0x325df261
- (void)submitQueuedCoreDAVTask:(id)task;	// 0x325df251
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x325df0a1
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x325df179
// declared property getter: - (id)workRunLoop;	// 0x325df2a1
@end

