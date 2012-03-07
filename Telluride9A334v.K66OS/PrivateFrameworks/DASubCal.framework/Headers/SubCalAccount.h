/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <DAAccount.h> // Unknown library

@class DATaskManager, NSData, NSString, NSDictionary, NSURL;

@interface SubCalAccount : DAAccount {
	DATaskManager *_taskManager;	// 64 = 0x40
	NSData *_tmpICSData;	// 68 = 0x44
}
@property(retain, nonatomic) NSDictionary *externalRepresentation;	// G=0x358e4ce1; S=0x358e4cfd; 
@property(retain) id host;	// G=0x358e4a41; S=0x358e4a5d; converted property
@property(assign) int port;	// G=0x358e4d19; S=0x358e4d35; converted property
@property(assign) BOOL shouldRemoveAlarms;	// G=0x358e4d8d; S=0x358e4dad; 
@property(assign) int subCalAccountVersion;	// G=0x358e4931; S=0x358e4965; 
@property(readonly, assign, nonatomic) NSURL *subscriptionURL;	// G=0x358e3c5d; 
@property(retain, nonatomic) NSString *syncId;	// G=0x358e4ca9; S=0x358e4cc5; 
@property(readonly, retain) DATaskManager *taskManager;	// G=0x358e3cd9; converted property
@property(retain) NSData *tmpICSData;	// G=0x358e4029; S=0x358e3fa5; converted property
@property(assign) BOOL useSSL;	// G=0x358e4d51; S=0x358e4d71; converted property
@property(retain) id username;	// G=0x358e49a9; S=0x358e49c5; converted property
+ (Class)accountClass;	// 0x358e3abd
+ (Class)clientClass;	// 0x358e3ad9
+ (id)defaultProperties;	// 0x358e3af5
+ (id)supportedDataclasses;	// 0x358e3c31
- (void)_checkValidityWithConsumer:(id)consumer quickValidate:(BOOL)validate;	// 0x358e3d29
- (id)_oldURLsForKeychain;	// 0x358e41b1
- (id)_tmpICSCalendarPath;	// 0x358e3f65
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x358e42f9
- (BOOL)accountNeedsUpgrade;	// 0x358e4839
- (void)checkValidityWithConsumer:(id)consumer;	// 0x358e3e79
- (void)clearTmpICSData;	// 0x358e40e1
- (void)dealloc;	// 0x358e3a5d
// declared property getter: - (id)externalRepresentation;	// 0x358e4ce1
- (void)handleTrustChallenge:(id)challenge forTask:(id)task;	// 0x358e50f5
- (BOOL)hasSubscribedCalendarAtURL:(id)url;	// 0x358e50c9
// converted property getter: - (id)host;	// 0x358e4a41
- (BOOL)isEqualToAccount:(id)account;	// 0x358e4e19
- (id)localizedIdenticalAccountFailureMessage;	// 0x358e4fa1
- (id)localizedInvalidPasswordMessage;	// 0x358e5019
// converted property getter: - (int)port;	// 0x358e4d19
- (void)quickValidate:(id)validate;	// 0x358e3e8d
- (void)refreshAllCalendars;	// 0x358e4e15
- (void)saveTmpICSData;	// 0x358e3fe9
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x358e4cfd
// converted property setter: - (void)setHost:(id)host;	// 0x358e4a5d
// converted property setter: - (void)setPort:(int)port;	// 0x358e4d35
// declared property setter: - (void)setShouldRemoveAlarms:(BOOL)removeAlarms;	// 0x358e4dad
// declared property setter: - (void)setSubCalAccountVersion:(int)version;	// 0x358e4965
// declared property setter: - (void)setSyncId:(id)anId;	// 0x358e4cc5
// converted property setter: - (void)setTmpICSData:(id)data;	// 0x358e3fa5
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x358e4d71
// converted property setter: - (void)setUsername:(id)username;	// 0x358e49c5
// declared property getter: - (BOOL)shouldRemoveAlarms;	// 0x358e4d8d
// declared property getter: - (int)subCalAccountVersion;	// 0x358e4931
- (void)subCalValidationTask:(id)task finishedWithError:(id)error calendarName:(id)name calendarData:(id)data;	// 0x358e3ea1
// declared property getter: - (id)subscriptionURL;	// 0x358e3c5d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x358e3c51
// declared property getter: - (id)syncId;	// 0x358e4ca9
// converted property getter: - (id)taskManager;	// 0x358e3cd9
// converted property getter: - (id)tmpICSData;	// 0x358e4029
- (BOOL)upgradeAccount;	// 0x358e47b1
// converted property getter: - (BOOL)useSSL;	// 0x358e4d51
// converted property getter: - (id)username;	// 0x358e49a9
@end
