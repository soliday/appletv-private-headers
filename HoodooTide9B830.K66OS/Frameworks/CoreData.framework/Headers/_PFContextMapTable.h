/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFContextMapTable : NSObject {
@private
	unsigned _slotLimit;	// 4 = 0x4
	CFDictionaryRef _objectsByTemporaryID;	// 8 = 0x8
	CFDictionaryRef *_objectsByPermanentObjectID;	// 12 = 0xc
	CFDictionaryRef *_objectsBy64bitPKID;	// 16 = 0x10
	unsigned *_capacitiesFor64bitPKMappings;	// 20 = 0x14
	contextMapTableFlags _flags;	// 24 = 0x18
}
- (id)initWithWeaksReferences:(BOOL)weaksReferences;	// 0x3224f6f9
- (void)_dispose;	// 0x3227d1a9
- (void)clearTemporaryIDs;	// 0x32299e79
- (void)dealloc;	// 0x3227d169
- (void)finalize;	// 0x3229a029
- (unsigned)getAllObjects:(id *)objects;	// 0x3227bc91
- (void)setCapacityHint:(unsigned)hint forSlot:(unsigned)slot;	// 0x32299e95
- (void)setForUseWithModel:(id)model;	// 0x3226457d
@end

