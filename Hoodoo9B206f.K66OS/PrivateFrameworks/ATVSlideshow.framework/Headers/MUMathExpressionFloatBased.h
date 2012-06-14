/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionFloatBased : MUMathExpressionBase {
	FunctionInterpreter<float> *mInterpreter;	// 12 = 0xc
}
+ (float)evaluateString:(id)string error:(id *)error;	// 0x30af6ded
+ (float)invalidResult;	// 0x30af7781
- (id)init;	// 0x30af70e1
- (id)initWithString:(id)string error:(id *)error;	// 0x30af70f5
- (void)cleanup;	// 0x30af7435
- (void)dealloc;	// 0x30af73b5
- (float)evaluate;	// 0x30af7681
- (void)finalize;	// 0x30af73f5
- (BOOL)isValueIllegal:(float)illegal;	// 0x30af778d
- (void)resetAllVariables;	// 0x30af7639
- (void)setValue:(float)value forVariable:(id)variable;	// 0x30af7455
- (void)setVariableValues:(id)values;	// 0x30af7521
- (float)valueForVariable:(id)variable;	// 0x30af74b9
@end

