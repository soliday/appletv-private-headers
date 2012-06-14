/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDReferenceCollection : EDCollection {
@private
	bool mCoalesce;	// 8 = 0x8
}
+ (id)coalesceCollection;	// 0x34560a21
+ (id)noCoalesceCollection;	// 0x34560351
- (id)init;	// 0x3447fdb1
- (id)initWihNoCoalesce;	// 0x34560399
- (unsigned)addObject:(id)object;	// 0x3448008d
- (void)coalesce;	// 0x344800e1
- (bool)coalesceReferenceAtIndex1:(int)index1 index2:(int)a2;	// 0x34480151
- (unsigned)countOfCellsBeingReferenced;	// 0x344e6dc9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x345c0e05
- (id)referenceToCellWithIndex:(unsigned)index byRow:(bool)row;	// 0x3456085d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x345c0e09
- (id)reverseReferencesByRow:(bool)row;	// 0x34572a81
@end

