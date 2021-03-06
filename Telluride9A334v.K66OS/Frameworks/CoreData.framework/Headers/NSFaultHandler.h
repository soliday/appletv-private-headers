/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSFaultHandler : NSObject {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x31e9eca1
+ (void)initialize;	// 0x31e6d6e9
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x31e5a591
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x31e9eca5
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x31e9f0f9
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x31e9f115
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x31e61dd1
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x31e9edad
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x31e64cd5
@end

