/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface NSExternalRefCountedData : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	int _externalReferenceCount;	// 8 = 0x8
	externalRefFlags_st _externalRefFlags;	// 12 = 0xc
	id _toManyMap;	// 16 = 0x10
	double _birth;	// 20 = 0x14
}
@property(readonly, assign) int externalReferenceCount;	// G=0x322b5e15; converted property
@property(retain) id relationshipCaches;	// G=0x322b5e25; S=0x322b6031; converted property
@property(assign) double timestamp;	// G=0x32279e81; S=0x322b5dfd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x322b5e91
- (id)initWithOptions:(unsigned)options andTimestamp:(double)timestamp;	// 0x322b5e35
- (BOOL)_isDeallocating;	// 0x322b5df9
- (BOOL)_tryRetain;	// 0x322b5df5
- (void)dealloc;	// 0x322b608d
- (int)decrementRefCount;	// 0x3227c639
// converted property getter: - (int)externalReferenceCount;	// 0x322b5e15
- (void)incrementExternalReferenceCount:(int)count;	// 0x322b6079
- (void)incrementRefCount;	// 0x322765f1
- (unsigned)options;	// 0x322b5e11
- (unsigned)optionsForKey:(id)key;	// 0x322b5ffd
- (id)relatedIDsForKey:(id)key;	// 0x322b5fc9
// converted property getter: - (id)relationshipCaches;	// 0x322b5e25
- (void)release;	// 0x32276605
- (id)retain;	// 0x32279ec9
- (unsigned)retainCount;	// 0x322b5de1
- (void)setRelatedIDs:(id)ids forKey:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x322b5e99
// converted property setter: - (void)setRelationshipCaches:(id)caches;	// 0x322b6031
// converted property setter: - (void)setTimestamp:(double)timestamp;	// 0x322b5dfd
// converted property getter: - (double)timestamp;	// 0x32279e81
- (double)timestampForKey:(id)key;	// 0x322b5f71
@end

