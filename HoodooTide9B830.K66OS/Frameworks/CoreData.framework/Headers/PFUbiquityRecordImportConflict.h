/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityKnowledgeVector, NSDate, NSDictionary, NSManagedObject, NSArray, PFUbiquityImportContext, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordImportConflict : NSObject {
@private
	NSString *_conflictingObjectGlobalIDStr;	// 4 = 0x4
	NSManagedObject *_sourceObject;	// 8 = 0x8
	NSDictionary *_conflictingLogContent;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 20 = 0x14
	int _conflictingLogTransactionType;	// 24 = 0x18
	NSDate *_conflictLogDate;	// 28 = 0x1c
	NSNumber *_conflictingLogTransactionNumber;	// 32 = 0x20
	NSArray *_transactionHistory;	// 36 = 0x24
	NSDictionary *_globalIDIndexToLocalIDURIMap;	// 40 = 0x28
	PFUbiquityImportContext *_importContext;	// 44 = 0x2c
}
@property(retain, nonatomic) NSDate *conflictLogDate;	// G=0x32382ab1; S=0x3238389d; @synthesize=_conflictLogDate
@property(retain, nonatomic) NSDictionary *conflictingLogContent;	// G=0x32382ae1; S=0x32383875; @synthesize=_conflictingLogContent
@property(retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;	// G=0x32382a71; S=0x32383915; @synthesize=_conflictingLogKnowledgeVector
@property(retain, nonatomic) NSNumber *conflictingLogTransactionNumber;	// G=0x32382a61; S=0x3238393d; @synthesize=_conflictingLogTransactionNumber
@property(assign, nonatomic) int conflictingLogTransactionType;	// G=0x32382ac1; S=0x32382ad1; @synthesize=_conflictingLogTransactionType
@property(retain, nonatomic) NSString *conflictingObjectGlobalIDStr;	// G=0x32382b01; S=0x32383825; @synthesize=_conflictingObjectGlobalIDStr
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x32382a51; S=0x32383965; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;	// G=0x32382a91; S=0x323838c5; @synthesize=_globalIDIndexToLocalIDURIMap
@property(retain, nonatomic) PFUbiquityImportContext *importContext;	// G=0x32382a81; S=0x323838ed; @synthesize=_importContext
@property(retain, nonatomic) NSManagedObject *sourceObject;	// G=0x32382af1; S=0x3238384d; @synthesize=_sourceObject
@property(retain, nonatomic) NSArray *transactionHistory;	// G=0x32382aa1; S=0x32382bad; @synthesize=_transactionHistory
+ (id)createArrayOfLogURLsForTransactionEntries:(id)transactionEntries;	// 0x32382cd9
+ (id)createTransactionLogForTransactionEntry:(id)transactionEntry withError:(id *)error;	// 0x32382e81
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)knowledgeVector withExportingPeerID:(id)exportingPeerID fromPeerSnapshotCollection:(id)peerSnapshotCollection;	// 0x32383461
+ (void)initialize;	// 0x323837c1
+ (int)resolvedTypeForConflictingLogType:(int)conflictingLogType andLatestTransactionEntry:(id)entry skipObject:(BOOL *)object;	// 0x323830f9
- (id)init;	// 0x32385ce9
- (id)_newNormalizedSnapshot:(id)snapshot forObject:(id)object;	// 0x32385a51
// declared property getter: - (id)conflictLogDate;	// 0x32382ab1
// declared property getter: - (id)conflictingLogContent;	// 0x32382ae1
// declared property getter: - (id)conflictingLogKnowledgeVector;	// 0x32382a71
// declared property getter: - (id)conflictingLogTransactionNumber;	// 0x32382a61
// declared property getter: - (int)conflictingLogTransactionType;	// 0x32382ac1
// declared property getter: - (id)conflictingObjectGlobalIDStr;	// 0x32382b01
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)relationship withValue:(id)value withGlobalIDToLocalIDURIMap:(id)localIDURIMap andTransactionLog:(id)log;	// 0x32383aa1
- (id)createSnapshotDictionaryForObjectWithEntry:(id)entry inTransactionLog:(id)transactionLog withError:(id *)error;	// 0x32383f85
- (id)createSnapshotDictionaryFromLogEntry:(id)logEntry withError:(id *)error;	// 0x32382c5d
- (id)createSnapshotFromLogContent:(id)logContent withTransactionLog:(id)transactionLog;	// 0x32383d1d
- (id)createSnapshotFromManagedObject:(id)managedObject;	// 0x323841b5
// declared property getter: - (id)currentKnowledgeVector;	// 0x32382a51
- (void)dealloc;	// 0x32385bf5
- (id)description;	// 0x3238398d
// declared property getter: - (id)globalIDIndexToLocalIDURIMap;	// 0x32382a91
// declared property getter: - (id)importContext;	// 0x32382a81
- (BOOL)resolveConflict:(id *)conflict;	// 0x323844f5
- (BOOL)resolveMergeConflictForLogContent:(id)logContent previousSnapshot:(id)snapshot andAncestorSnapshot:(id)snapshot3 withOldVersion:(unsigned)oldVersion andNewVersion:(unsigned)version error:(id *)error;	// 0x3238584d
// declared property setter: - (void)setConflictLogDate:(id)date;	// 0x3238389d
// declared property setter: - (void)setConflictingLogContent:(id)content;	// 0x32383875
// declared property setter: - (void)setConflictingLogKnowledgeVector:(id)vector;	// 0x32383915
// declared property setter: - (void)setConflictingLogTransactionNumber:(id)number;	// 0x3238393d
// declared property setter: - (void)setConflictingLogTransactionType:(int)type;	// 0x32382ad1
// declared property setter: - (void)setConflictingObjectGlobalIDStr:(id)str;	// 0x32383825
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x32383965
// declared property setter: - (void)setGlobalIDIndexToLocalIDURIMap:(id)localIDURIMap;	// 0x323838c5
// declared property setter: - (void)setImportContext:(id)context;	// 0x323838ed
// declared property setter: - (void)setSourceObject:(id)object;	// 0x3238384d
// declared property setter: - (void)setTransactionHistory:(id)history;	// 0x32382bad
// declared property getter: - (id)sourceObject;	// 0x32382af1
// declared property getter: - (id)transactionHistory;	// 0x32382aa1
@end

