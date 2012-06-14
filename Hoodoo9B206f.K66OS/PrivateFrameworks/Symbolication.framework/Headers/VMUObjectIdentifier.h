/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMUClassInfoMap, VMUNonOverlappingRangeArray, NSMutableSet, NSHashTable;

@interface VMUObjectIdentifier : NSObject {
	unsigned _task;	// 4 = 0x4
	CSTypeRef _symbolicator;	// 8 = 0x8
	id _memoryReader;	// 16 = 0x10
	VMUClassInfoMap *_isaToClassInfo;	// 20 = 0x14
	VMUClassInfoMap *_cfTypeIDtoClassInfo;	// 24 = 0x18
	NSHashTable *_objcRuntimeMallocBlocksHash;	// 28 = 0x1c
	NSMutableSet *_objcRuntimeMallocBlocks;	// 32 = 0x20
	unsigned _cfTypeCount;	// 36 = 0x24
	unsigned _objcClassCount;	// 40 = 0x28
	unsigned _cPlusPlusClassCount;	// 44 = 0x2c
	NSHashTable *_invalidPointers;	// 48 = 0x30
	VMUNonOverlappingRangeArray *_targetProcessVMranges;	// 52 = 0x34
	int peeksAtRemoteObjectIsa;	// 56 = 0x38
}
@property(readonly, retain) NSMutableSet *objcRuntimeMallocBlocks;	// G=0x30bd87ad; converted property
@property(readonly, retain) NSHashTable *objcRuntimeMallocBlocksHash;	// G=0x30bd7b71; converted property
- (id)initWithTask:(unsigned)task;	// 0x30bd7ca1
- (id)initWithTask:(unsigned)task symbolicator:(id)symbolicator;	// 0x30bd7bc1
- (unsigned)CFTypeCount;	// 0x30bd7b41
- (unsigned)CPlusPlusClassCount;	// 0x30bd7b61
- (unsigned)ObjCclassCount;	// 0x30bd7b51
- (id)_classInfoForObject:(unsigned long long)object;	// 0x30bd833d
- (id)classInfoForCFType:(CFRuntimeBase *)cftype;	// 0x30bd8439
- (id)classInfoForIsaPointer:(unsigned)isaPointer;	// 0x30bd8485
- (id)classInfoForObject:(unsigned long long)object;	// 0x30bd7bd1
- (id)classInfoForObjectWithRange:(VMURange)range;	// 0x30bd7c5d
- (void)dealloc;	// 0x30bd8891
- (void)findCFTypes;	// 0x30bd8151
- (void)findObjCclasses;	// 0x30bd7f79
- (BOOL)isValidRemotePointer:(unsigned long long)pointer;	// 0x30bd870d
- (id)nullClassInfo;	// 0x30bd7be1
// converted property getter: - (id)objcRuntimeMallocBlocks;	// 0x30bd87ad
// converted property getter: - (id)objcRuntimeMallocBlocksHash;	// 0x30bd7b71
- (VMURange)vmRegionRangeForAddress:(unsigned long long)address;	// 0x30bd7e69
@end

