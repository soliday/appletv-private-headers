/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface ML3EntityReplacer : NSObject {
@private
	CFDictionaryRef _propertyToIndexPair;	// 4 = 0x4
	unsigned _statementCount;	// 8 = 0x8
	sqlite3_stmt **_statements;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isOpen) BOOL open;	// G=0x35d58eb1; 
- (id)initWithEntityClass:(Class)entityClass properties:(id)properties databaseHandle:(sqlite3 *)handle;	// 0x35d58479
- (void)bindDouble:(double)aDouble forProperty:(id)property;	// 0x35d58da5
- (void)bindInt:(int)int forProperty:(id)property;	// 0x35d58d81
- (void)bindNullForProperty:(id)property;	// 0x35d58d61
- (void)bindPersistentID:(long long)anId;	// 0x35d58ec9
- (void)clearBindings;	// 0x35d58f95
- (void)close;	// 0x35d58fe5
- (void)dealloc;	// 0x35d58439
// declared property getter: - (BOOL)isOpen;	// 0x35d58eb1
- (BOOL)perform;	// 0x35d58dc9
- (void)statementForProperty:(id)property usingBlock:(id)block;	// 0x35d58b29
@end

