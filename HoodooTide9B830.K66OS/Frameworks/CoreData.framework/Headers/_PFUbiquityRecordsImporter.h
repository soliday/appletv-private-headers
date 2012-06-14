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
@property(assign) BOOL allowBaselineRoll;	// G=0x32372c99; S=0x32372ca9; @synthesize=_allowBaselineRoll
@property(assign) BOOL importOnlyActiveStores;	// G=0x32372cb9; S=0x32372cc9; @synthesize=_importOnlyActiveStores
@property(readonly, assign) NSOperationQueue *importQueue;	// G=0x32372d79; @synthesize=_importQueue
@property(readonly, assign) BOOL isMonitoring;	// G=0x32372d59; @synthesize=_isMonitoring
@property(readonly, assign) NSString *localPeerID;	// G=0x32372d69; @synthesize=_localPeerID
@property(assign) dispatch_source_s *logRestartTimer;	// G=0x32372d29; S=0x32372d39; @synthesize=_logRestartTimer
@property(readonly, assign) PFUbiquityMetadataQueryMonitor *queryMonitor;	// G=0x32372cd9; @synthesize=_queryMonitor
@property(readonly, assign, nonatomic) NSRecursiveLock *schedulingLock;	// G=0x32372d19; @synthesize=_schedulingLock
@property(assign) BOOL throttleNotifications;	// G=0x32372cf9; S=0x32372d09; @synthesize=_throttleNotifications
@property(readonly, assign) NSDictionary *ubiquityLocationToMonitoringDictionary;	// G=0x32372ce9; @synthesize=_ubiquityLocationToMonitoringDictionary
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x32372d49; @synthesize=_ubiquityRootLocation
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)ubiquityRootPath;	// 0x32373d3d
+ (void)initialize;	// 0x32373e81
- (id)init;	// 0x32372a39
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32373b9d
- (void)_applicationResumed:(id)resumed;	// 0x32375445
// declared property getter: - (BOOL)allowBaselineRoll;	// 0x32372c99
- (void)awakeFromLaunch:(BOOL)launch;	// 0x32372d89
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)state;	// 0x32372d9d
- (BOOL)canProcessTransactionLogWithScore:(id)score afterLogWithScore:(id)score2;	// 0x32376629
- (int)compareScoreDictionary:(id)dictionary withScoreDictionary:(id)scoreDictionary;	// 0x32372a41
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x32372c95
- (id)createDictionaryOfStoreNameToLocations:(id)locations;	// 0x32372fc5
- (dispatch_source_s *)createDispatchSourceForFileDescriptor:(int)fileDescriptor forLocation:(id)location;	// 0x323760c5
- (id)createMonitoringDictionaryForUbiquityLocation:(id)ubiquityLocation;	// 0x32375f19
- (id)createPeerStatesDictionaryFromTransactionLog:(id)transactionLog andAddLocalPeerStatesToDictionary:(id)dictionary withStack:(id)stack;	// 0x32376185
- (id)createScoresForPeerStates:(id)peerStates andLocalPeerStates:(id)states;	// 0x32372e65
- (id)createSortedOperationsArrayForLogLocations:(id)logLocations;	// 0x323767f9
- (void)dealloc;	// 0x32377529
- (id)description;	// 0x32377499
// declared property getter: - (BOOL)importOnlyActiveStores;	// 0x32372cb9
// declared property getter: - (id)importQueue;	// 0x32372d79
// declared property getter: - (BOOL)isMonitoring;	// 0x32372d59
// declared property getter: - (id)localPeerID;	// 0x32372d69
// declared property getter: - (dispatch_source_s *)logRestartTimer;	// 0x32372d29
- (void)operation:(id)operation failedWithError:(id)error;	// 0x32374f11
- (void)operationDidFinish:(id)operation;	// 0x323750e5
- (void)operationWasInterruptedDuringImport:(id)import;	// 0x32374eb1
- (void)postImportNotificationForStoreName:(id)storeName andLocalPeerID:(id)anId withUserInfo:(id)userInfo;	// 0x3237526d
// declared property getter: - (id)queryMonitor;	// 0x32372cd9
- (void)recoveryOperation:(id)operation didReplaceLocalStoreFileWithBaseline:(id)baseline;	// 0x32372dad
- (void)recoveryOperation:(id)operation encounteredAnError:(id)error duringRecoveryOfBaseline:(id)baseline;	// 0x32372e55
- (void)requestBaselineRollForStore:(id)store;	// 0x3237389d
- (void)rollResponseOperation:(id)operation encounteredAnError:(id)error whileTryingToAdoptBaseline:(id)adoptBaseline;	// 0x32373ef5
- (void)rollResponseOperation:(id)operation successfullyAdoptedBaseline:(id)baseline;	// 0x32373f65
- (void)scanOperation:(id)operation discoveredPeerStoreVersionLocations:(id)locations;	// 0x323747bd
- (void)scanOperation:(id)operation failedWithError:(id)error;	// 0x32374755
- (void)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation;	// 0x3237335d
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)activeBaselineOperation;	// 0x32373fb9
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)location;	// 0x32374191
- (void)scheduleRecoveryTimer;	// 0x32374d85
- (void)scheduleTransactionLogOperations:(id)operations synchronous:(BOOL)synchronous;	// 0x323764d9
- (void)scheduleUbiquityRootScan:(BOOL)scan withLocalPeerLogs:(BOOL)localPeerLogs;	// 0x323749dd
// declared property getter: - (id)schedulingLock;	// 0x32372d19
// declared property setter: - (void)setAllowBaselineRoll:(BOOL)roll;	// 0x32372ca9
// declared property setter: - (void)setImportOnlyActiveStores:(BOOL)stores;	// 0x32372cc9
// declared property setter: - (void)setLogRestartTimer:(dispatch_source_s *)timer;	// 0x32372d39
// declared property setter: - (void)setThrottleNotifications:(BOOL)notifications;	// 0x32372d09
- (BOOL)shouldThrottleNotificationsWithOperation:(id)operation;	// 0x32372a3d
- (BOOL)startMonitor:(id *)monitor;	// 0x323756f1
- (void)stopMonitor;	// 0x3237312d
- (void)stopMonitoringDictionary:(id)dictionary;	// 0x32375631
- (void)stopMonitoringURLsForStoreName:(id)storeName;	// 0x323754a9
// declared property getter: - (BOOL)throttleNotifications;	// 0x32372cf9
// declared property getter: - (id)ubiquityLocationToMonitoringDictionary;	// 0x32372ce9
// declared property getter: - (id)ubiquityRootLocation;	// 0x32372d49
- (void)updateMonitoredPeerURLs;	// 0x323757d5
@end

