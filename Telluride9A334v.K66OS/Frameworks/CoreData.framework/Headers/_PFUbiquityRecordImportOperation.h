/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOperation.h> // Unknown library
#import "NSManagedObjectContextFaultingDelegate.h"

@class NSMutableSet, NSString, NSDictionary, NSMutableDictionary, PFUbiquityTransactionLog, NSPersistentStoreCoordinator, NSManagedObjectContext, PFUbiquityImportContext;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordImportOperation : NSOperation <NSManagedObjectContextFaultingDelegate> {
@private
	NSManagedObjectContext *_moc;	// 12 = 0xc
	NSPersistentStoreCoordinator *_psc;	// 16 = 0x10
	PFUbiquityTransactionLog *_transactionLog;	// 20 = 0x14
	NSString *_localPeerID;	// 24 = 0x18
	id _delegate;	// 28 = 0x1c
	NSMutableSet *_insertedObjectIDs;	// 32 = 0x20
	NSMutableSet *_updatedObjectIDs;	// 36 = 0x24
	NSMutableSet *_deletedObjectIDs;	// 40 = 0x28
	NSDictionary *_logScore;	// 44 = 0x2c
	NSMutableDictionary *_resolvedConflicts;	// 48 = 0x30
	BOOL _lockedExistingCoord;	// 52 = 0x34
	NSDictionary *_initialStoreKnowledgeVector;	// 56 = 0x38
	NSDictionary *_newUbiquityKnowledgeVector;	// 60 = 0x3c
	PFUbiquityImportContext *_importContext;	// 64 = 0x40
	BOOL _transactionDidRollback;	// 68 = 0x44
	int _inMemorySequenceNumber;	// 72 = 0x48
}
@property(assign) id delegate;	// G=0x31f4dfa1; S=0x31f4dfb1; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x31f4dfe1; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) PFUbiquityImportContext *importContext;	// G=0x31f4df61; @synthesize=_importContext
@property(readonly, assign) NSDictionary *initialStoreKnowledgeVector;	// G=0x31f4df71; @synthesize=_initialStoreKnowledgeVector
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x31f4e001; @synthesize=_insertedObjectIDs
@property(readonly, assign) NSString *localPeerID;	// G=0x31f4e011; @synthesize=_localPeerID
@property(assign) BOOL lockedExistingCoord;	// G=0x31f4df81; S=0x31f4df91; @synthesize=_lockedExistingCoord
@property(retain, nonatomic) NSDictionary *logScore;	// G=0x31f4dfc1; S=0x31f4e2ed; @synthesize=_logScore
@property(readonly, assign) NSManagedObjectContext *moc;	// G=0x31f4e041; @synthesize=_moc
@property(readonly, assign, nonatomic) NSDictionary *newUbiquityKnowledgeVector;	// G=0x31f4df51; @synthesize=_newUbiquityKnowledgeVector
@property(readonly, assign) NSPersistentStoreCoordinator *psc;	// G=0x31f4e031; @synthesize=_psc
@property(readonly, assign, nonatomic) NSMutableDictionary *resolvedConflicts;	// G=0x31f4dfd1; @synthesize=_resolvedConflicts
@property(readonly, assign, nonatomic) BOOL transactionDidRollBack;	// G=0x31f4df41; @synthesize=_transactionDidRollback
@property(readonly, assign, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x31f4e021; @synthesize=_transactionLog
@property(readonly, assign, nonatomic) NSMutableSet *updatedObjectIDs;	// G=0x31f4dff1; @synthesize=_updatedObjectIDs
- (id)initWithTransactionLog:(id)transactionLog;	// 0x31f4e051
- (id)initWithTransactionLog:(id)transactionLog withLocalPeerID:(id)localPeerID;	// 0x31f4e23d
- (void)addManagedObject:(id)object missingObjectWithID:(id)anId atKey:(id)key toMissingObjects:(id)missingObjects;	// 0x31f4e9f1
- (void)applyChangesFromStoreSaveSnapshot:(id)storeSaveSnapshot withImportContext:(id)importContext withError:(id *)error;	// 0x31f5464d
- (id)checkPSCForStoreIdentifiedByImportContext:(id)storeIdentifiedByImportContext;	// 0x31f4e7c1
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x31f4df3d
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x31f4e315
- (id)copy;	// 0x31f4e27d
- (void)dealloc;	// 0x31f54985
// declared property getter: - (id)delegate;	// 0x31f4dfa1
// declared property getter: - (id)deletedObjectIDs;	// 0x31f4dfe1
- (id)description;	// 0x31f4e475
- (void)fillManagedObject:(id)object fromUbiquityDictionary:(id)ubiquityDictionary missingObjects:(id)objects withStoreSaveSnapshot:(id)storeSaveSnapshot andGlobalObjectIDToLocalIDURIMap:(id)localIDURIMap;	// 0x31f4eb2d
// declared property getter: - (id)importContext;	// 0x31f4df61
// declared property getter: - (id)initialStoreKnowledgeVector;	// 0x31f4df71
- (void)initializePersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x31f4e751
// declared property getter: - (id)insertedObjectIDs;	// 0x31f4e001
// declared property getter: - (id)localPeerID;	// 0x31f4e011
// declared property getter: - (BOOL)lockedExistingCoord;	// 0x31f4df81
// declared property getter: - (id)logScore;	// 0x31f4dfc1
- (void)main;	// 0x31f507e1
// declared property getter: - (id)moc;	// 0x31f4e041
- (id)newPersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x31f4e61d
// declared property getter: - (id)newUbiquityKnowledgeVector;	// 0x31f4df51
- (void)notifyDelegateOfError:(id)error;	// 0x31f54919
- (void)processObjects:(id)objects withState:(int)state withGlobalIDIndexesToLocalURIMap:(id)localURIMap andImportContext:(id)context outError:(id *)error;	// 0x31f4f1b5
// declared property getter: - (id)psc;	// 0x31f4e031
// declared property getter: - (id)resolvedConflicts;	// 0x31f4dfd1
- (void)respondToStoreTransactionStateChangeNotification:(id)storeTransactionStateChangeNotification;	// 0x31f4e51d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31f4dfb1
// declared property setter: - (void)setLockedExistingCoord:(BOOL)coord;	// 0x31f4df91
// declared property setter: - (void)setLogScore:(id)score;	// 0x31f4e2ed
// declared property getter: - (BOOL)transactionDidRollBack;	// 0x31f4df41
// declared property getter: - (id)transactionLog;	// 0x31f4e021
// declared property getter: - (id)updatedObjectIDs;	// 0x31f4dff1
@end

