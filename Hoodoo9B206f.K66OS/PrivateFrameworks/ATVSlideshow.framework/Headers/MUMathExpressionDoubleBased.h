/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionDoubleBased : MUMathExpressionBase {
	FunctionInterpreter<double> *mInterpreter;	// 12 = 0xc
}
+ (double)evaluateString:(id)string error:(id *)error;	// 0x30af6391
+ (double)invalidResult;	// 0x30af6d99
- (id)init;	// 0x30af66b9
- (id)initWithString:(id)string error:(id *)error;	// 0x30af66cd
- (void)cleanup;	// 0x30af6a19
- (void)dealloc;	// 0x30af6999
- (double)evaluate;	// 0x30af6c95
- (void)finalize;	// 0x30af69d9
- (BOOL)isValueIllegal:(double)illegal;	// 0x30af6dad
- (void)resetAllVariables;	// 0x30af6c2d
- (void)setValue:(double)value forVariable:(id)variable;	// 0x30af6a39
- (void)setVariableValues:(id)values;	// 0x30af6b11
- (double)valueForVariable:(id)variable;	// 0x30af6aa5
@end

