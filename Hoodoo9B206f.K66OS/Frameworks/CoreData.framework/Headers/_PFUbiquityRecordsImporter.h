/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_PFUbiquityRecordImportOperationDelegate.h"
#import "CoreData-Structs.h"
#import "NSManagedObjectContextFaultingDelegate.h"
#import "PFUbiquityBaselineRollResponseOperationDelegate.h"
#import "PFUbiquityBaselineRollOperationDelegate.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate.h"
#import "PFUbiquityImportScanOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, PFUbiquityLocation, NSDictionary, NSRecursiveLock, NSMutableDictionary, PFUbiquityMetadataQueryMonitor, NSString;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {
@private
	NSOperationQueue *_importQueue;	// 4 = 0x4
	NSMutableDictionary *_ubiquityLocationToMonitoringDictionary;	// 8 = 0x8
	BOOL _isMonitoring;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	PFUbiquityLocation *_ubiquityRootLocation;	// 20 = 0x14
	dispatch_source_s *_logRestartTimer;	// 24 = 0x18
	NSRecursiveLock *_schedulingLock;	// 28 = 0x1c
	PFUbiquityMetadataQueryMonitor *_queryMonitor;	// 32 = 0x20
	BOOL _importOnlyActiveStores;	// 36 = 0x24
	BOOL _throttleNotifications;	// 37 = 0x25
	unsigned _numPendingNotifications;	// 40 = 0x28
	NSMutableDictionary *_pendingNotificationUserInfo;	// 44 = 0x2c
	BOOL _allowBaselineRoll;	// 48 = 0x30
}
@property(assign) BOOL allowBaselineRoll;	// G=0x36344c99; S=0x36344ca9; @synthesize=_allowBaselineRoll
@property(assign) BOOL importOnlyActiveStores;	// G=0x36344cb9; S=0x36344cc9; @synthesize=_importOnlyActiveStores
@property(readonly, assign) NSOperationQueue *importQueue;	// G=0x36344d79; @synthesize=_importQueue
@property(readonly, assign) BOOL isMonitoring;	// G=0x36344d59; @synthesize=_isMonitoring
@property(readonly, assign) NSString *localPeerID;	// G=0x36344d69; @synthesize=_localPeerID
@property(assign) dispatch_source_s *logRestartTimer;	// G=0x36344d29; S=0x36344d39; @synthesize=_logRestartTimer
@property(readonly, assign) PFUbiquityMetadataQueryMonitor *queryMonitor;	// G=0x36344cd9; @synthesize=_queryMonitor
@property(readonly, assign, nonatomic) NSRecursiveLock *schedulingLock;	// G=0x36344d19; @synthesize=_schedulingLock
@property(assign) BOOL throttleNotifications;	// G=0x36344cf9; S=0x36344d09; @synthesize=_throttleNotifications
@property(readonly, assign) NSDictionary *ubiquityLocationToMonitoringDictionary;	// G=0x36344ce9; @synthesize=_ubiquityLocationToMonitoringDictionary
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x36344d49; @synthesize=_ubiquityRootLocation
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)ubiquityRootPath;	// 0x36345d3d
+ (void)initialize;	// 0x36345e81
- (id)init;	// 0x36344a39
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x36345b9d
- (void)_applicationResumed:(id)resumed;	// 0x36347445
// declared property getter: - (BOOL)allowBaselineRoll;	// 0x36344c99
- (void)awakeFromLaunch:(BOOL)launch;	// 0x36344d89
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)state;	// 0x36344d9d
- (BOOL)canProcessTransactionLogWithScore:(id)score afterLogWithScore:(id)score2;	// 0x36348629
- (int)compareScoreDictionary:(id)dictionary withScoreDictionary:(id)scoreDictionary;	// 0x36344a41
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x36344c95
- (id)createDictionaryOfStoreNameToLocations:(id)locations;	// 0x36344fc5
- (dispatch_source_s *)createDispatchSourceForFileDescriptor:(int)fileDescriptor forLocation:(id)location;	// 0x363480c5
- (id)createMonitoringDictionaryForUbiquityLocation:(id)ubiquityLocation;	// 0x36347f19
- (id)createPeerStatesDictionaryFromTransactionLog:(id)transactionLog andAddLocalPeerStatesToDictionary:(id)dictionary withStack:(id)stack;	// 0x36348185
- (id)createScoresForPeerStates:(id)peerStates andLocalPeerStates:(id)states;	// 0x36344e65
- (id)createSortedOperationsArrayForLogLocations:(id)logLocations;	// 0x363487f9
- (void)dealloc;	// 0x36349529
- (id)description;	// 0x36349499
// declared property getter: - (BOOL)importOnlyActiveStores;	// 0x36344cb9
// declared property getter: - (id)importQueue;	// 0x36344d79
// declared property getter: - (BOOL)isMonitoring;	// 0x36344d59
// declared property getter: - (id)localPeerID;	// 0x36344d69
// declared property getter: - (dispatch_source_s *)logRestartTimer;	// 0x36344d29
- (void)operation:(id)operation failedWithError:(id)error;	// 0x36346f11
- (void)operationDidFinish:(id)operation;	// 0x363470e5
- (void)operationWasInterruptedDuringImport:(id)import;	// 0x36346eb1
- (void)postImportNotificationForStoreName:(id)storeName andLocalPeerID:(id)anId withUserInfo:(id)userInfo;	// 0x3634726d
// declared property getter: - (id)queryMonitor;	// 0x36344cd9
- (void)recoveryOperation:(id)operation didReplaceLocalStoreFileWithBaseline:(id)baseline;	// 0x36344dad
- (void)recoveryOperation:(id)operation encounteredAnError:(id)error duringRecoveryOfBaseline:(id)baseline;	// 0x36344e55
- (void)requestBaselineRollForStore:(id)store;	// 0x3634589d
- (void)rollResponseOperation:(id)operation encounteredAnError:(id)error whileTryingToAdoptBaseline:(id)adoptBaseline;	// 0x36345ef5
- (void)rollResponseOperation:(id)operation successfullyAdoptedBaseline:(id)baseline;	// 0x36345f65
- (void)scanOperation:(id)operation discoveredPeerStoreVersionLocations:(id)locations;	// 0x363467bd
- (void)scanOperation:(id)operation failedWithError:(id)error;	// 0x36346755
- (void)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation;	// 0x3634535d
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)activeBaselineOperation;	// 0x36345fb9
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)location;	// 0x36346191
- (void)scheduleRecoveryTimer;	// 0x36346d85
- (void)scheduleTransactionLogOperations:(id)operations synchronous:(BOOL)synchronous;	// 0x363484d9
- (void)scheduleUbiquityRootScan:(BOOL)scan withLocalPeerLogs:(BOOL)localPeerLogs;	// 0x363469dd
// declared property getter: - (id)schedulingLock;	// 0x36344d19
// declared property setter: - (void)setAllowBaselineRoll:(BOOL)roll;	// 0x36344ca9
// declared property setter: - (void)setImportOnlyActiveStores:(BOOL)stores;	// 0x36344cc9
// declared property setter: - (void)setLogRestartTimer:(dispatch_source_s *)timer;	// 0x36344d39
// declared property setter: - (void)setThrottleNotifications:(BOOL)notifications;	// 0x36344d09
- (BOOL)shouldThrottleNotificationsWithOperation:(id)operation;	// 0x36344a3d
- (BOOL)startMonitor:(id *)monitor;	// 0x363476f1
- (void)stopMonitor;	// 0x3634512d
- (void)stopMonitoringDictionary:(id)dictionary;	// 0x36347631
- (void)stopMonitoringURLsForStoreName:(id)storeName;	// 0x363474a9
// declared property getter: - (BOOL)throttleNotifications;	// 0x36344cf9
// declared property getter: - (id)ubiquityLocationToMonitoringDictionary;	// 0x36344ce9
// declared property getter: - (id)ubiquityRootLocation;	// 0x36344d49
- (void)updateMonitoredPeerURLs;	// 0x363477d5
@end

