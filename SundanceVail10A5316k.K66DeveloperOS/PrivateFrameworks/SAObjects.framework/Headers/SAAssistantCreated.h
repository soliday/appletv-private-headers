/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *assistantId;	// G=0x32f5a331; S=0x32f5a34d; 
@property(copy, nonatomic) NSString *speechId;	// G=0x32f5a39d; S=0x32f5a3b9; 
+ (id)assistantCreated;	// 0x32f5a2a1
+ (id)assistantCreatedWithDictionary:(id)dictionary context:(id)context;	// 0x32f5a2e5
// declared property getter: - (id)assistantId;	// 0x32f5a331
- (id)encodedClassName;	// 0x32f5a295
- (id)groupIdentifier;	// 0x32f5a285
- (BOOL)requiresResponse;	// 0x32f5a409
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x32f5a34d
// declared property setter: - (void)setSpeechId:(id)anId;	// 0x32f5a3b9
// declared property getter: - (id)speechId;	// 0x32f5a39d
@end
