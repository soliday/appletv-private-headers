/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSMergePolicy : NSObject {
@private
	unsigned _type;	// 4 = 0x4
	void *_reserved2;	// 8 = 0x8
	void *_reserved3;	// 12 = 0xc
}
@property(readonly, assign) unsigned mergeType;	// G=0x362bfb8d; @synthesize=_type
@property(readonly, assign) unsigned type;	// G=0x362c15a1; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x362bfb85
+ (void)load;	// 0x36256141
- (id)initWithCoder:(id)coder;	// 0x362c144d
- (id)initWithMergeType:(unsigned)mergeType;	// 0x36256241
- (id)initWithType:(unsigned)type;	// 0x362c15b1
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x362bfcb5
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x362c0e7d
- (void)_mergeDeletionWithStoreChangesForObject:(id)object withRecord:(id)record;	// 0x362c00ed
- (id)copyWithZone:(NSZone *)zone;	// 0x362c1591
- (void)dealloc;	// 0x362c14e5
- (void)encodeWithCoder:(id)coder;	// 0x362c141d
- (void)mergeToManyRelationshipForSourceObject:(id)sourceObject withOldSnapshot:(id)oldSnapshot newSnapshot:(id)snapshot andAncestor:(id)ancestor andLegacyPath:(BOOL)path;	// 0x362bfb89
// declared property getter: - (unsigned)mergeType;	// 0x362bfb8d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x362c1581
- (BOOL)resolveConflict:(id)conflict;	// 0x362c124d
- (BOOL)resolveConflicts:(id)conflicts error:(id *)error;	// 0x362bfb9d
// converted property getter: - (unsigned)type;	// 0x362c15a1
@end

