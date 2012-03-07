/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVEvaluation : NSObject {
}
+ (id)evaluationWithName:(id)name;	// 0x340ec081
+ (void)initialize;	// 0x340ec01d
+ (void)registerEvaluation:(id)evaluation withName:(id)name;	// 0x340ec09d
- (BOOL)evaluateValue:(id)value usingOperator:(id)anOperator withUserInfo:(id)userInfo;	// 0x340ec1d5
- (SEL)selectorForOperator:(id)anOperator;	// 0x340ec0b9
@end
