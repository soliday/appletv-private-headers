/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSSet;

@interface MSNotificationService : MSMailDefaultService {
	NSSet *_accountIDs;	// 24 = 0x18
}
@property(retain, nonatomic) NSSet *accountIDs;	// G=0x33c391e5; S=0x33c391f5; @synthesize=_accountIDs
+ (id)registerNotificationObserver:(id)observer forAccounts:(id)accounts shouldLaunchMobileMail:(BOOL)mail;	// 0x33c385d1
+ (id)smi_serverCommandName;	// 0x33c385c5
- (id)_addObserverClientForNotifications;	// 0x33c38ded
- (id)_didReceiveNotificationData:(id)data userInfo:(id)info;	// 0x33c38e81
- (id)_initWithDelegate:(id)delegate;	// 0x33c3870d
- (void)_requestInitialMessageStateForAccountIDs:(id)accountIDs;	// 0x33c388d5
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x33c387b5
- (void)_validateMessageReferences:(id)references;	// 0x33c38b6d
// declared property getter: - (id)accountIDs;	// 0x33c391e5
- (void)dealloc;	// 0x33c38755
// declared property setter: - (void)setAccountIDs:(id)ids;	// 0x33c391f5
@end

