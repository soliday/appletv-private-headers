/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLFetchIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLFetchDictionaryCountIntermediate : NSSQLIntermediate {
@private
	NSSQLFetchIntermediate *_realFetch;	// 8 = 0x8
}
- (id)initWithFetchIntermediate:(id)fetchIntermediate inScope:(id)scope;	// 0x32361ea9
- (void)dealloc;	// 0x3236207d
- (id)generateSQLStringInContext:(id)context;	// 0x32361f01
@end

