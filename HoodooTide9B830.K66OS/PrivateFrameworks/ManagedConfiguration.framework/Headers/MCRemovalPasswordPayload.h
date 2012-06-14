/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {
@private
	NSString *_removalPasscode;	// 40 = 0x28
}
@property(retain) NSString *removalPasscode;	// G=0x33b09e61; S=0x33b09e3d; @synthesize=_removalPasscode
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33b09e05
+ (id)typeStrings;	// 0x33b09e15
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b09ed9
- (void)dealloc;	// 0x33b09db9
// declared property getter: - (id)removalPasscode;	// 0x33b09e61
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x33b09e3d
- (id)stubDictionary;	// 0x33b09e79
@end

