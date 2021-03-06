/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate {
}
+ (BOOL)functionIsAcceptableAsAggregate:(id)aggregate;	// 0x32ba1d3d
- (id)_generateArgumentStringForCollection:(id)collection inContext:(id)context;	// 0x32ba08d1
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)symbol forExpression:(id)expression inContext:(id)context;	// 0x32b9efa1
- (id)_generateDistinctStringInContext:(id)context;	// 0x32ba01e9
- (id)_generateMathStringWithSymbol:(id)symbol inContext:(id)context;	// 0x32b9e725
- (id)_generateSQLForCountInContext:(id)context;	// 0x32ba12e1
- (id)_generateSelectForAggregateStringWithSymbol:(id)symbol argument:(id)argument inContext:(id)context;	// 0x32ba0ad5
- (id)_generateType4SQLForSymbol:(id)symbol inContext:(id)context;	// 0x32ba1ebd
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)symbol forAttribute:(id)attribute inContext:(id)context;	// 0x32b9ea3d
- (id)generateSQLStringInContext:(id)context;	// 0x32ba04a5
- (id)generateType1SQLString:(id)string inContext:(id)context;	// 0x32b9f875
- (id)generateType2SQLString:(id)string inContext:(id)context;	// 0x32b9fbb5
- (id)generateType3SQLString:(id)string keypathOnly:(BOOL)only inContext:(id)context;	// 0x32b9fed1
- (BOOL)isFunctionScoped;	// 0x32b9e721
@end

