/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SAClockObject;

@interface SAClockAdd : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAClockObject *clockToAdd;	// G=0x32f3ce1d; S=0x32f3ce71; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3cd41; S=0x32f3cdbd; 
+ (id)add;	// 0x32f3ccb1
+ (id)addWithDictionary:(id)dictionary context:(id)context;	// 0x32f3ccf5
// declared property getter: - (id)clockToAdd;	// 0x32f3ce1d
- (id)encodedClassName;	// 0x32f3cca5
- (id)groupIdentifier;	// 0x32f3cc95
- (BOOL)requiresResponse;	// 0x32f3cead
// declared property setter: - (void)setClockToAdd:(id)add;	// 0x32f3ce71
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f3cdbd
// declared property getter: - (id)targetAppId;	// 0x32f3cd41
@end

