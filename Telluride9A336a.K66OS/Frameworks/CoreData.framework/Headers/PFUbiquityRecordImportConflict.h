/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSNumber, PFUbiquityKnowledgeVector, NSDate, NSManagedObject, NSArray, NSString, PFUbiquityImportContext, NSDictionary;

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
@property(retain, nonatomic) NSDate *conflictLogDate;	// G=0x32425f61; S=0x32426d3d; @synthesize=_conflictLogDate
@property(retain, nonatomic) NSDictionary *conflictingLogContent;	// G=0x32425f91; S=0x32426d15; @synthesize=_conflictingLogContent
@property(retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;	// G=0x32425f21; S=0x32426db5; @synthesize=_conflictingLogKnowledgeVector
@property(retain, nonatomic) NSNumber *conflictingLogTransactionNumber;	// G=0x32425f11; S=0x32426ddd; @synthesize=_conflictingLogTransactionNumber
@property(assign, nonatomic) int conflictingLogTransactionType;	// G=0x32425f71; S=0x32425f81; @synthesize=_conflictingLogTransactionType
@property(retain, nonatomic) NSString *conflictingObjectGlobalIDStr;	// G=0x32425fb1; S=0x32426cc5; @synthesize=_conflictingObjectGlobalIDStr
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x32425f01; S=0x32426e05; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;	// G=0x32425f41; S=0x32426d65; @synthesize=_globalIDIndexToLocalIDURIMap
@property(retain, nonatomic) PFUbiquityImportContext *importContext;	// G=0x32425f31; S=0x32426d8d; @synthesize=_importContext
@property(retain, nonatomic) NSManagedObject *sourceObject;	// G=0x32425fa1; S=0x32426ced; @synthesize=_sourceObject
@property(retain, nonatomic) NSArray *transactionHistory;	// G=0x32425f51; S=0x3242605d; @synthesize=_transactionHistory
+ (id)createArrayOfLogURLsForTransactionEntries:(id)transactionEntries;	// 0x32426189
+ (id)createTransactionLogForTransactionEntry:(id)transactionEntry withError:(id *)error;	// 0x32426331
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)knowledgeVector withExportingPeerID:(id)exportingPeerID fromPeerSnapshotCollection:(id)peerSnapshotCollection;	// 0x32426901
+ (void)initialize;	// 0x32426c61
+ (int)resolvedTypeForConflictingLogType:(int)conflictingLogType andLatestTransactionEntry:(id)entry skipObject:(BOOL *)object;	// 0x32426599
- (id)init;	// 0x32428d6d
// declared property getter: - (id)conflictLogDate;	// 0x32425f61
// declared property getter: - (id)conflictingLogContent;	// 0x32425f91
// declared property getter: - (id)conflictingLogKnowledgeVector;	// 0x32425f21
// declared property getter: - (id)conflictingLogTransactionNumber;	// 0x32425f11
// declared property getter: - (int)conflictingLogTransactionType;	// 0x32425f71
// declared property getter: - (id)conflictingObjectGlobalIDStr;	// 0x32425fb1
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)relationship withValue:(id)value withGlobalIDToLocalIDURIMap:(id)localIDURIMap andTransactionLog:(id)log;	// 0x32426f41
- (id)createSnapshotDictionaryForObjectWithEntry:(id)entry inTransactionLog:(id)transactionLog withError:(id *)error;	// 0x32427425
- (id)createSnapshotDictionaryFromLogEntry:(id)logEntry withError:(id *)error;	// 0x3242610d
- (id)createSnapshotFromLogContent:(id)logContent withTransactionLog:(id)transactionLog;	// 0x324271bd
- (id)createSnapshotFromManagedObject:(id)managedObject;	// 0x32427655
// declared property getter: - (id)currentKnowledgeVector;	// 0x32425f01
- (void)dealloc;	// 0x32428c79
- (id)description;	// 0x32426e2d
// declared property getter: - (id)globalIDIndexToLocalIDURIMap;	// 0x32425f41
// declared property getter: - (id)importContext;	// 0x32425f31
- (BOOL)resolveConflict:(id *)conflict;	// 0x32427995
- (BOOL)resolveMergeConflictForLogContent:(id)logContent previousSnapshot:(id)snapshot andAncestorSnapshot:(id)snapshot3 withOldVersion:(unsigned)oldVersion andNewVersion:(unsigned)version error:(id *)error;	// 0x32428b11
// declared property setter: - (void)setConflictLogDate:(id)date;	// 0x32426d3d
// declared property setter: - (void)setConflictingLogContent:(id)content;	// 0x32426d15
// declared property setter: - (void)setConflictingLogKnowledgeVector:(id)vector;	// 0x32426db5
// declared property setter: - (void)setConflictingLogTransactionNumber:(id)number;	// 0x32426ddd
// declared property setter: - (void)setConflictingLogTransactionType:(int)type;	// 0x32425f81
// declared property setter: - (void)setConflictingObjectGlobalIDStr:(id)str;	// 0x32426cc5
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x32426e05
// declared property setter: - (void)setGlobalIDIndexToLocalIDURIMap:(id)localIDURIMap;	// 0x32426d65
// declared property setter: - (void)setImportContext:(id)context;	// 0x32426d8d
// declared property setter: - (void)setSourceObject:(id)object;	// 0x32426ced
// declared property setter: - (void)setTransactionHistory:(id)history;	// 0x3242605d
// declared property getter: - (id)sourceObject;	// 0x32425fa1
// declared property getter: - (id)transactionHistory;	// 0x32425f51
@end
