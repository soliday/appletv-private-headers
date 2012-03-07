/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCoding.h"

@class NSNumber, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityKnowledgeVector : NSObject <NSCoding> {
@private
	NSDictionary *_kv;	// 4 = 0x4
	NSNumber *_sum;	// 8 = 0x8
	unsigned _hash;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x3407b639; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x3407c749; 
@property(readonly, assign, nonatomic) NSNumber *sum;	// G=0x3407b649; @synthesize=_sum
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x3407b701
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x3407b82d
- (id)init;	// 0x3407cd79
- (id)initWithCoder:(id)coder;	// 0x3407c9c1
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x3407b659
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x3407cc41
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x3407cb05
- (void)_updateHash;	// 0x3407c5b9
- (void)_updateSum;	// 0x3407c615
- (id)allPeerIDs;	// 0x3407c235
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x3407b911
- (int)compare:(id)compare;	// 0x3407c819
- (id)copyWithZone:(NSZone *)zone;	// 0x3407b6bd
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x3407bbf9
- (id)createKnowledgeVectorString;	// 0x3407c279
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x3407c1bd
- (void)dealloc;	// 0x3407ca8d
- (id)description;	// 0x3407c9fd
- (void)encodeWithCoder:(id)coder;	// 0x3407c991
// declared property getter: - (unsigned)hash;	// 0x3407b639
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x3407c439
- (BOOL)isEqual:(id)equal;	// 0x3407c781
// declared property getter: - (unsigned)length;	// 0x3407c749
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x3407bfd9
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x3407bae1
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x3407bdbd
// declared property getter: - (id)sum;	// 0x3407b649
- (id)transactionNumberForPeerID:(id)peerID;	// 0x3407c255
@end
