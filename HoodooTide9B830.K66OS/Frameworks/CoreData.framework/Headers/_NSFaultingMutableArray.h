/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableArray.h> // Unknown library

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray {
@private
	int _cd_rc;	// 4 = 0x4
	NSMutableArray *_realArray;	// 8 = 0x8
	NSManagedObject *_source;	// 12 = 0xc
	NSPropertyDescription *_relationship;	// 16 = 0x10
	NSFaultingMutableArrayFlags _flags;	// 20 = 0x14
}
@property(readonly, retain) NSPropertyDescription *relationship;	// G=0x32288091; converted property
@property(readonly, retain) NSManagedObject *source;	// G=0x32288081; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32288055
+ (id)alloc;	// 0x3228839d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32288395
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x32288ab9
- (BOOL)_isDeallocating;	// 0x322880d9
- (BOOL)_tryRetain;	// 0x32288101
- (void)addObject:(id)object;	// 0x32288785
- (id)copyWithZone:(NSZone *)zone;	// 0x322882f1
- (unsigned)count;	// 0x322887fd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32288745
- (void)dealloc;	// 0x32288a69
- (id)description;	// 0x322889a5
- (id)descriptionWithLocale:(id)locale;	// 0x322888ed
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x32288835
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x322886c5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32288705
- (void)getObjects:(id *)objects;	// 0x3228845d
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32288645
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x32288685
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x322885c5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32288605
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3228854d
- (BOOL)isFault;	// 0x3228806d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32288a59
- (id)objectAtIndex:(unsigned)index;	// 0x322887c1
- (id)objectEnumerator;	// 0x3228858d
// converted property getter: - (id)relationship;	// 0x32288091
- (oneway void)release;	// 0x3228815d
- (void)removeLastObject;	// 0x32288515
- (void)removeObjectAtIndex:(unsigned)index;	// 0x322884d9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32288499
- (id)retain;	// 0x322880a1
- (unsigned)retainCount;	// 0x32288059
- (void)setValue:(id)value forKey:(id)key;	// 0x3228841d
// converted property getter: - (id)source;	// 0x32288081
- (void)turnIntoFault;	// 0x322882b1
- (id)valueForKey:(id)key;	// 0x322883e1
- (id)valueForKeyPath:(id)keyPath;	// 0x322883a5
- (void)willRead;	// 0x322881dd
@end

