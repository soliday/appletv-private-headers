/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface ISAuthenticationChallengeOperation : ISDialogOperation {
@private
	ISAuthenticationChallenge *_challenge;	// 84 = 0x54
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x3334b71d; S=0x3334b731; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x3334b475
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x3334b621
// declared property getter: - (id)challenge;	// 0x3334b71d
- (void)dealloc;	// 0x3334b431
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x3334b4d9
- (void)run;	// 0x3334b585
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x3334b731
@end
