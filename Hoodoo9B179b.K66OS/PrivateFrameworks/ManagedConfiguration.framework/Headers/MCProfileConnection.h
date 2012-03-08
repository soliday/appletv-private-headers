/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDate, NSTimer, CPDistributedMessagingCenter, NSMutableArray, NSDictionary;
@protocol MCInteractionDelegate;

@interface MCProfileConnection : NSObject {
@private
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
	CFBagRef _observers;	// 8 = 0x8
	CPDistributedMessagingCenter *_interactionServer;	// 12 = 0xc
	id<MCInteractionDelegate> _interactionDelegate;	// 16 = 0x10
	id _interactionLockDelayedContext;	// 20 = 0x14
	NSDictionary *_preflightResponse;	// 24 = 0x18
	NSData *_originalProfileData;	// 28 = 0x1c
	BOOL _needToRestoreOriginalProfileData;	// 32 = 0x20
	NSDate *_lastNoPasscodeMDMPollTime;	// 36 = 0x24
	int _userInputTimeoutType;	// 40 = 0x28
	NSTimer *_userInputTimer;	// 44 = 0x2c
	dispatch_queue_s *_notificationSyncQueue;	// 48 = 0x30
	NSMutableArray *_notificationTokens;	// 52 = 0x34
}
+ (id)sharedConnection;	// 0x348a8ae1
- (void)__checkForProfiledCrash;	// 0x348d50f9
- (void)__doMCICDidFinish:(id)__doMCIC;	// 0x348d3c2d
- (void)__effectiveSettingsDidChange:(id)__effectiveSettings;	// 0x348a8359
- (void)__passcodeDidChange;	// 0x348a80e9
- (void)__passcodePolicyDidChange;	// 0x348a81b9
- (void)__profileListDidChange;	// 0x348a8289
- (void)__restrictionDidChange;	// 0x348a8019
- (void)_applyToObservers:(id)observers;	// 0x348a8ca1
- (void)_cancelUserInputTimeout;	// 0x348d34b9
- (void)_detectProfiledCrashes;	// 0x348d3dc9
- (void)_doMCICDidBeginInstallingNextProfileData:(id)_doMCIC params:(id)params;	// 0x348d478d
- (void)_doMCICDidFinish:(id)_doMCIC params:(id)params;	// 0x348d4895
- (void)_doMCICDidRequestCurrentPasscode:(id)_doMCIC params:(id)params;	// 0x348d464d
- (void)_doMCICDidUpdateStatus:(id)_doMCIC params:(id)params;	// 0x348d457d
- (void)_doMCICPreflightResponse:(id)response params:(id)params;	// 0x348d4299
- (void)_doMCICRequestUserInput:(id)input params:(id)params;	// 0x348d4a39
- (void)_doMCICShowUserWarnings:(id)warnings params:(id)params;	// 0x348d4cd9
- (void)_effectiveSettingsDidChange:(id)_effectiveSettings;	// 0x348a8449
- (id)_init;	// 0x348a847d
- (BOOL)_openSensitiveURLString:(id)string unlock:(BOOL)unlock;	// 0x348d2b19
- (void)_passcodeDidChange;	// 0x348a818d
- (void)_passcodePolicyDidChange;	// 0x348a825d
- (id)_pathsToInstalledProfilesWithFlags:(int)flags;	// 0x348d276d
- (void)_profileListDidChange;	// 0x348a832d
- (id)_queueDataForAcceptance:(id)acceptance originalFileName:(id)name transitionToUI:(BOOL)ui outError:(id *)error;	// 0x348d3705
- (void)_registerSelectorsForInteractionServer:(id)interactionServer;	// 0x348d2d61
- (void)_restrictionDidChange;	// 0x348a80bd
- (void)_setTimeoutWaitingForUserInputType:(int)userInputType;	// 0x348d3321
- (void)_tearDownInteractionServer;	// 0x348d40b1
- (void)_userInputTimerFired;	// 0x348d352d
- (id)acceptedFileExtensions;	// 0x348d2a9d
- (id)acceptedMIMETypes;	// 0x348d2a45
- (void)addObserver:(id)observer;	// 0x348a8c45
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x348d53a1
- (int)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message complianceBlocking:(int)blocking displayImmediateAlert:(BOOL)alert outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed9 outError:(id *)error;	// 0x348d56b9
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outError:(id *)error;	// 0x348d551d
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed5 outError:(id *)error;	// 0x348d1e51
- (int)boolRestrictionForFeature:(id)feature;	// 0x348d52f9
- (void)cancelUserInputResponses;	// 0x348d4389
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x348d68ad
- (id)chaperoneOrganization;	// 0x348d525d
- (void)checkCarrierProfile;	// 0x348d7225
- (void)checkIn;	// 0x348a7f71
- (void)checkInAsynchronously;	// 0x348a7fc5
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x348d69b9
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)globalRestrictionsOutError;	// 0x348d64b5
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)profileRestrictionsOutError;	// 0x348d6529
- (void)dealloc;	// 0x348a8e11
- (int)defaultBoolValueForSetting:(id)setting;	// 0x348d5f99
- (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x348d5fd1
- (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x348d5fed
- (id)defaultValueForSetting:(id)setting;	// 0x348d5fb5
- (id)doNotBackupAppIDs;	// 0x348d70b9
- (id)doNotDocumentSyncAppIDs;	// 0x348d70cd
- (int)effectiveBoolValueForSetting:(id)setting;	// 0x348d6079
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x348d6009
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x348d6041
- (int)effectiveRestrictedBoolValueForSetting:(id)setting;	// 0x348d1ec5
- (id)effectiveRestrictions;	// 0x348d52c5
- (id)effectiveUserSettings;	// 0x348d6265
- (id)effectiveValueForSetting:(id)setting;	// 0x348d60cd
- (int)getPasscodeComplianceWarningLastLockDate:(id)date outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x348d6b19
- (void)installProfile:(id)profile interactionDelegate:(id)delegate;	// 0x348d3009
- (id)installProfile:(id)profile outError:(id *)error;	// 0x348d28b1
- (id)installProfileData:(id)data context:(id)context managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x348d387d
- (void)installProfileData:(id)data interactionDelegate:(id)delegate;	// 0x348d2e85
- (id)installProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x348d290d
- (id)installProfileData:(id)data outError:(id *)error;	// 0x348d28ed
- (BOOL)installProvisioningProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x348d3a61
- (id)installedProfileWithIdentifier:(id)identifier;	// 0x348d27a5
- (id)installedProfilesWithFilterFlags:(int)filterFlags;	// 0x348d315d
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x348d6105
- (BOOL)isChaperoned;	// 0x348d521d
- (BOOL)isContentProtectionInEffect;	// 0x348d6af5
- (BOOL)isPasscodeRequired;	// 0x348d6369
- (BOOL)isPasscodeRequiredByPolicy;	// 0x348d1df5
- (BOOL)isPasscodeRequiredByProfiles;	// 0x348d6781
- (BOOL)isPasscodeSet;	// 0x348d6335
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x348d613d
- (id)localizedDescriptionOfCurrentPasscodeConstraints;	// 0x348d6729
- (void)lockDevice;	// 0x348d62c9
- (id)managedAppIDsWithFlags:(int)flags;	// 0x348d70e1
- (id)managedSystemConfigurationServiceIDs;	// 0x348d705d
- (id)managedWiFiNetworkNames;	// 0x348d6fad
- (void)migratePostDataMigrator;	// 0x348d71f5
- (int)newPasscodeEntryScreenType;	// 0x348d66f5
- (void)notifyClientsToRecomputeCompliance;	// 0x348d65b5
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x348d65e5
- (id)objectForFeature:(id)feature;	// 0x348d1eb5
- (id)objectRestrictionForFeature:(id)feature;	// 0x348d5369
- (id)parametersForBoolSetting:(id)boolSetting;	// 0x348d5f19
- (id)parametersForValueSetting:(id)valueSetting;	// 0x348d5f59
- (BOOL)passcode:(id)passcode meetsCurrentConstraintsOutError:(id *)error;	// 0x348d6475
- (id)passcodeExpiryDate;	// 0x348d1e0d
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x348d6689
- (void)performBootTimeChecks;	// 0x348d7279
- (id)popProfileFromHeadOfInstallationQueue;	// 0x348d3269
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;	// 0x348d27c1
- (void)preflightUserInputResponses:(id)responses forPayloadIndex:(unsigned)payloadIndex;	// 0x348d414d
- (void)processProfilesPostMigrate;	// 0x348d71c5
- (void)processProfilesPostRestore;	// 0x348d7195
- (id)profileFromProfileData:(id)profileData outError:(id *)error;	// 0x348d1d2d
- (id)queueFileDataForAcceptance:(id)acceptance originalFileName:(id)name outError:(id *)error;	// 0x348d285d
- (id)queueFileDataForProfileInstallation:(id)profileInstallation originalFileName:(id)name outError:(id *)error;	// 0x348d1dd1
- (id)queueProfileDataForAcceptance:(id)acceptance outError:(id *)error;	// 0x348d1d4d
- (id)queueProfileDataForInstallation:(id)installation outError:(id *)error;	// 0x348d1dad
- (id)queueProfileForAcceptance:(id)acceptance outError:(id *)error;	// 0x348d281d
- (id)queueProfileForInstallation:(id)installation outError:(id *)error;	// 0x348d1d71
- (void)recomputeUserComplianceWarning;	// 0x348d6585
- (void)removeBoolSetting:(id)setting;	// 0x348d6175
- (void)removeObserver:(id)observer;	// 0x348a8be9
- (void)removeOrphanedClientRestrictions;	// 0x348d54ed
- (void)removeProfileAsyncWithIdentifier:(id)identifier;	// 0x348d29a9
- (void)removeProfileWithIdentifier:(id)identifier;	// 0x348d2931
- (void)removeProfileWithIdentifier:(id)identifier completion:(id)completion;	// 0x348d3d25
- (void)removeProfilesFromInstallationQueue;	// 0x348d2881
- (BOOL)removeProvisioningProfileWithUUID:(id)uuid outError:(id *)error;	// 0x348d3b55
- (void)removeValueSetting:(id)setting;	// 0x348d61ed
- (void)resetAllSettingsToDefaults;	// 0x348d6299
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)currentPasscodeRequestContinue passcode:(id)passcode;	// 0x348d4fc9
- (void)respondToWarningsContinueInstallation:(BOOL)warningsContinueInstallation;	// 0x348d4eb1
- (int)restrictedBoolValueForFeature:(id)feature;	// 0x348d1e95
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x348d5d99
- (void)setDelegate:(id)delegate;	// 0x348d1cbd
- (void)setInteractionDelegate:(id)delegate;	// 0x348d2759
- (void)setParameters:(id)parameters forBoolSetting:(id)boolSetting;	// 0x348d5cb1
- (void)setParameters:(id)parameters forValueSetting:(id)valueSetting;	// 0x348d5d25
- (void)setParametersForSettingsByType:(id)settingsByType;	// 0x348d5bc1
- (void)setPasscodeWasSetInBackup:(BOOL)backup;	// 0x348d1cb9
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x348d5411
- (void)setValue:(id)value forSetting:(id)setting;	// 0x348d5e4d
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)profileIdentifier outError:(id *)error;	// 0x348d3e29
- (void)shutDown;	// 0x348d7009
- (void)storeCertificateData:(id)data forHostIdentifier:(id)hostIdentifier;	// 0x348d72cd
- (void)submitUserInputResponses:(id)responses;	// 0x348d4459
- (BOOL)transitionToProfileAcceptanceUI;	// 0x348d2c25
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)bundleID;	// 0x348d2c71
- (BOOL)transitionToProfileOverviewUI;	// 0x348d2bf9
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x348d63b5
- (int)unlockScreenType;	// 0x348d66c1
- (void)updateProfileWithIdentifier:(id)identifier interactionDelegate:(id)delegate;	// 0x348d3041
- (id)updateProfileWithIdentifier:(id)identifier outError:(id *)error;	// 0x348d399d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x348d53d9
- (id)userSettings;	// 0x348d5ee5
- (BOOL)validatePasscode:(id)passcode;	// 0x348d1e21
- (BOOL)validatePasscode:(id)passcode andUnlockContentProtectedDevice:(BOOL)device;	// 0x348d1e39
- (id)valueForFeature:(id)feature;	// 0x348d1ea5
- (id)valueRestrictionForFeature:(id)feature;	// 0x348d5331
@end
