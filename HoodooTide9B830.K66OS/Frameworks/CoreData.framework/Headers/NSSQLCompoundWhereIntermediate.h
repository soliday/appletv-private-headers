/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
@private
	NSMutableArray *_subclauses;	// 12 = 0xc
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x32281661
- (id)_generateMulticlauseStringInContext:(id)context;	// 0x32281c59
- (void)dealloc;	// 0x32284069
- (id)generateSQLStringInContext:(id)context;	// 0x32281975
- (BOOL)isOrScoped;	// 0x32281e29
@end

