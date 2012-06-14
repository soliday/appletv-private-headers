/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ML3SqliteDatabaseContext : NSObject {
@private
	sqlite3 **_dbStack;	// 4 = 0x4
	unsigned _dbStackCurrentIndex;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 12 = 0xc
	BOOL _isInTransaction;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x35d1ac11; 
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x35d4b4d1; S=0x35d4b4e1; @synthesize=_isInTransaction
- (id)initWithDB:(sqlite3 *)db;	// 0x35d1ab61
// declared property getter: - (sqlite3 *)db;	// 0x35d1ac11
- (void)dealloc;	// 0x35d4b309
- (BOOL)executeSQL:(id)sql;	// 0x35d4b3a5
// declared property getter: - (BOOL)isInTransaction;	// 0x35d4b4d1
- (void)popDB;	// 0x35d4b431
- (void)pushDB:(sqlite3 *)db;	// 0x35d4b3e1
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x35d4b4e1
- (sqlite3_stmt *)statementForSQL:(id)sql;	// 0x35d20f61
@end
