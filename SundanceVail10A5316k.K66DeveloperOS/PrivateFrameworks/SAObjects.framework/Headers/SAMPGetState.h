/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPGetState : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f38f4d; S=0x32f38fc9; 
+ (id)getState;	// 0x32f38ebd
+ (id)getStateWithDictionary:(id)dictionary context:(id)context;	// 0x32f38f01
- (id)encodedClassName;	// 0x32f38eb1
- (id)groupIdentifier;	// 0x32f38ea1
- (BOOL)requiresResponse;	// 0x32f39029
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f38fc9
// declared property getter: - (id)targetAppId;	// 0x32f38f4d
@end
