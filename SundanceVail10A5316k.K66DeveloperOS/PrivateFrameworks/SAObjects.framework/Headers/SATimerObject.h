/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSNumber;

@interface SATimerObject : SADomainObject {
}
@property(copy, nonatomic) NSString *state;	// G=0x32f3f8c5; S=0x32f3f8e1; 
@property(retain, nonatomic) NSNumber *timerValue;	// G=0x32f3f931; S=0x32f3f94d; 
+ (id)object;	// 0x32f3f835
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x32f3f879
- (id)encodedClassName;	// 0x32f3f829
- (id)groupIdentifier;	// 0x32f3f819
// declared property setter: - (void)setState:(id)state;	// 0x32f3f8e1
// declared property setter: - (void)setTimerValue:(id)value;	// 0x32f3f94d
// declared property getter: - (id)state;	// 0x32f3f8c5
// declared property getter: - (id)timerValue;	// 0x32f3f931
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f3f969
@end

