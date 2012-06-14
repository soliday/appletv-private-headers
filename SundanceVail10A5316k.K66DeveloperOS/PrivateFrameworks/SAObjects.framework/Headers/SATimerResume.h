/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerResume : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3fded; S=0x32f3fe69; 
+ (id)resume;	// 0x32f3fd5d
+ (id)resumeWithDictionary:(id)dictionary context:(id)context;	// 0x32f3fda1
- (id)encodedClassName;	// 0x32f3fd51
- (id)groupIdentifier;	// 0x32f3fd41
- (BOOL)requiresResponse;	// 0x32f3fec9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f3fe69
// declared property getter: - (id)targetAppId;	// 0x32f3fded
@end
