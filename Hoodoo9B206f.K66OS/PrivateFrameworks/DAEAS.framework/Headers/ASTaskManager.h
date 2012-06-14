/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DATaskManager.h> // Unknown library
#import "ASPolicyManagerDelegate.h"

@class NSMutableDictionary, NSError, ASTask, ASPolicyManager, ASGetOptionsTask;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
@private
	ASPolicyManager *_policyManager;	// 56 = 0x38
	NSError *_versionError;	// 60 = 0x3c
	NSMutableDictionary *_taskIDToTask;	// 64 = 0x40
	ASTask *_modalGetOptionsTask;	// 68 = 0x44
	ASGetOptionsTask *_getOptionsTask;	// 72 = 0x48
	ASTask *_modalPolicyKeyUpdateTask;	// 76 = 0x4c
}
@property(readonly, retain) ASPolicyManager *policyManager;	// G=0x321fde19; converted property
- (id)initWithAccount:(id)account policyManager:(id)manager;	// 0x321fd115
- (void)_finishAllTasksWithError:(id)error;	// 0x321fdf61
- (void)_populateVersionDescriptions;	// 0x321fd42d
- (id)_version;	// 0x321fd4a1
- (void)cancelAllTasks;	// 0x321fdecd
- (void)cancelTask:(id)task;	// 0x321fe691
- (void)cancelTaskWithID:(int)anId;	// 0x321fe441
- (void)dealloc;	// 0x321fd2d9
- (id)easProtocolVersion;	// 0x321fde49
- (void)finishTask:(id)task withError:(id)error;	// 0x321fdeb9
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x321fd7d5
- (id)policyKey;	// 0x321fde91
// converted property getter: - (id)policyManager;	// 0x321fde19
- (void)policyManagerFailedToUpdatePolicy:(id)updatePolicy;	// 0x321fdda5
- (void)policyManagerUpdatedPolicy:(id)policy;	// 0x321fdd19
- (id)protocol;	// 0x321fde71
- (void)requestEASVersionWithDelegateTask:(id)delegateTask;	// 0x321fd4c9
- (void)setEASProtocolVersion:(id)version;	// 0x321fde29
- (void)shutdown;	// 0x321fe519
- (id)stateString;	// 0x321fe029
- (void)taskDidFinish:(id)task;	// 0x321fe735
- (void)taskEndModal:(id)modal;	// 0x321fe901
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x321fe19d
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x321fe349
- (void)taskRequestModal:(id)modal;	// 0x321fe8ad
- (void)updatePolicyKeyWithDelegateTask:(id)delegateTask;	// 0x321fdb99
@end

