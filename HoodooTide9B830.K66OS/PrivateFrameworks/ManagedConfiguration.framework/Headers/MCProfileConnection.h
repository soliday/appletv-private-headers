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
+ (id)sharedConnection;	// 0x33afeae1
- (void)__checkForProfiledCrash;	// 0x33b2b0f9
- (void)__doMCICDidFinish:(id)__doMCIC;	// 0x33b29c2d
- (void)__effectiveSettingsDidChange:(id)__effectiveSettings;	// 0x33afe359
- (void)__passcodeDidChange;	// 0x33afe0e9
- (void)__passcodePolicyDidChange;	// 0x33afe1b9
- (void)__profileListDidChange;	// 0x33afe289
- (void)__restrictionDidChange;	// 0x33afe019
- (void)_applyToObservers:(id)observers;	// 0x33afeca1
- (void)_cancelUserInputTimeout;	// 0x33b294b9
- (void)_detectProfiledCrashes;	// 0x33b29dc9
- (void)_doMCICDidBeginInstallingNextProfileData:(id)_doMCIC params:(id)params;	// 0x33b2a78d
- (void)_doMCICDidFinish:(id)_doMCIC params:(id)params;	// 0x33b2a895
- (void)_doMCICDidRequestCurrentPasscode:(id)_doMCIC params:(id)params;	// 0x33b2a64d
- (void)_doMCICDidUpdateStatus:(id)_doMCIC params:(id)params;	// 0x33b2a57d
- (void)_doMCICPreflightResponse:(id)response params:(id)params;	// 0x33b2a299
- (void)_doMCICRequestUserInput:(id)input params:(id)params;	// 0x33b2aa39
- (void)_doMCICShowUserWarnings:(id)warnings params:(id)params;	// 0x33b2acd9
- (void)_effectiveSettingsDidChange:(id)_effectiveSettings;	// 0x33afe449
- (id)_init;	// 0x33afe47d
- (BOOL)_openSensitiveURLString:(id)string unlock:(BOOL)unlock;	// 0x33b28b19
- (void)_passcodeDidChange;	// 0x33afe18d
- (void)_passcodePolicyDidChange;	// 0x33afe25d
- (id)_pathsToInstalledProfilesWithFlags:(int)flags;	// 0x33b2876d
- (void)_profileListDidChange;	// 0x33afe32d
- (id)_queueDataForAcceptance:(id)acceptance originalFileName:(id)name transitionToUI:(BOOL)ui outError:(id *)error;	// 0x33b29705
- (void)_registerSelectorsForInteractionServer:(id)interactionServer;	// 0x33b28d61
- (void)_restrictionDidChange;	// 0x33afe0bd
- (void)_setTimeoutWaitingForUserInputType:(int)userInputType;	// 0x33b29321
- (void)_tearDownInteractionServer;	// 0x33b2a0b1
- (void)_userInputTimerFired;	// 0x33b2952d
- (id)acceptedFileExtensions;	// 0x33b28a9d
- (id)acceptedMIMETypes;	// 0x33b28a45
- (void)addObserver:(id)observer;	// 0x33afec45
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x33b2b3a1
- (int)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message complianceBlocking:(int)blocking displayImmediateAlert:(BOOL)alert outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed9 outError:(id *)error;	// 0x33b2b6b9
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outError:(id *)error;	// 0x33b2b51d
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed5 outError:(id *)error;	// 0x33b27e51
- (int)boolRestrictionForFeature:(id)feature;	// 0x33b2b2f9
- (void)cancelUserInputResponses;	// 0x33b2a389
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x33b2c8ad
- (id)chaperoneOrganization;	// 0x33b2b25d
- (void)checkCarrierProfile;	// 0x33b2d225
- (void)checkIn;	// 0x33afdf71
- (void)checkInAsynchronously;	// 0x33afdfc5
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x33b2c9b9
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)globalRestrictionsOutError;	// 0x33b2c4b5
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)profileRestrictionsOutError;	// 0x33b2c529
- (void)dealloc;	// 0x33afee11
- (int)defaultBoolValueForSetting:(id)setting;	// 0x33b2bf99
- (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x33b2bfd1
- (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x33b2bfed
- (id)defaultValueForSetting:(id)setting;	// 0x33b2bfb5
- (id)doNotBackupAppIDs;	// 0x33b2d0b9
- (id)doNotDocumentSyncAppIDs;	// 0x33b2d0cd
- (int)effectiveBoolValueForSetting:(id)setting;	// 0x33b2c079
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x33b2c009
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x33b2c041
- (int)effectiveRestrictedBoolValueForSetting:(id)setting;	// 0x33b27ec5
- (id)effectiveRestrictions;	// 0x33b2b2c5
- (id)effectiveUserSettings;	// 0x33b2c265
- (id)effectiveValueForSetting:(id)setting;	// 0x33b2c0cd
- (int)getPasscodeComplianceWarningLastLockDate:(id)date outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x33b2cb19
- (void)installProfile:(id)profile interactionDelegate:(id)delegate;	// 0x33b29009
- (id)installProfile:(id)profile outError:(id *)error;	// 0x33b288b1
- (id)installProfileData:(id)data context:(id)context managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x33b2987d
- (void)installProfileData:(id)data interactionDelegate:(id)delegate;	// 0x33b28e85
- (id)installProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x33b2890d
- (id)installProfileData:(id)data outError:(id *)error;	// 0x33b288ed
- (BOOL)installProvisioningProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x33b29a61
- (id)installedProfileWithIdentifier:(id)identifier;	// 0x33b287a5
- (id)installedProfilesWithFilterFlags:(int)filterFlags;	// 0x33b2915d
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x33b2c105
- (BOOL)isChaperoned;	// 0x33b2b21d
- (BOOL)isContentProtectionInEffect;	// 0x33b2caf5
- (BOOL)isPasscodeRequired;	// 0x33b2c369
- (BOOL)isPasscodeRequiredByPolicy;	// 0x33b27df5
- (BOOL)isPasscodeRequiredByProfiles;	// 0x33b2c781
- (BOOL)isPasscodeSet;	// 0x33b2c335
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x33b2c13d
- (id)localizedDescriptionOfCurrentPasscodeConstraints;	// 0x33b2c729
- (void)lockDevice;	// 0x33b2c2c9
- (id)managedAppIDsWithFlags:(int)flags;	// 0x33b2d0e1
- (id)managedSystemConfigurationServiceIDs;	// 0x33b2d05d
- (id)managedWiFiNetworkNames;	// 0x33b2cfad
- (void)migratePostDataMigrator;	// 0x33b2d1f5
- (int)newPasscodeEntryScreenType;	// 0x33b2c6f5
- (void)notifyClientsToRecomputeCompliance;	// 0x33b2c5b5
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x33b2c5e5
- (id)objectForFeature:(id)feature;	// 0x33b27eb5
- (id)objectRestrictionForFeature:(id)feature;	// 0x33b2b369
- (id)parametersForBoolSetting:(id)boolSetting;	// 0x33b2bf19
- (id)parametersForValueSetting:(id)valueSetting;	// 0x33b2bf59
- (BOOL)passcode:(id)passcode meetsCurrentConstraintsOutError:(id *)error;	// 0x33b2c475
- (id)passcodeExpiryDate;	// 0x33b27e0d
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x33b2c689
- (void)performBootTimeChecks;	// 0x33b2d279
- (id)popProfileFromHeadOfInstallationQueue;	// 0x33b29269
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;	// 0x33b287c1
- (void)preflightUserInputResponses:(id)responses forPayloadIndex:(unsigned)payloadIndex;	// 0x33b2a14d
- (void)processProfilesPostMigrate;	// 0x33b2d1c5
- (void)processProfilesPostRestore;	// 0x33b2d195
- (id)profileFromProfileData:(id)profileData outError:(id *)error;	// 0x33b27d2d
- (id)queueFileDataForAcceptance:(id)acceptance originalFileName:(id)name outError:(id *)error;	// 0x33b2885d
- (id)queueFileDataForProfileInstallation:(id)profileInstallation originalFileName:(id)name outError:(id *)error;	// 0x33b27dd1
- (id)queueProfileDataForAcceptance:(id)acceptance outError:(id *)error;	// 0x33b27d4d
- (id)queueProfileDataForInstallation:(id)installation outError:(id *)error;	// 0x33b27dad
- (id)queueProfileForAcceptance:(id)acceptance outError:(id *)error;	// 0x33b2881d
- (id)queueProfileForInstallation:(id)installation outError:(id *)error;	// 0x33b27d71
- (void)recomputeUserComplianceWarning;	// 0x33b2c585
- (void)removeBoolSetting:(id)setting;	// 0x33b2c175
- (void)removeObserver:(id)observer;	// 0x33afebe9
- (void)removeOrphanedClientRestrictions;	// 0x33b2b4ed
- (void)removeProfileAsyncWithIdentifier:(id)identifier;	// 0x33b289a9
- (void)removeProfileWithIdentifier:(id)identifier;	// 0x33b28931
- (void)removeProfileWithIdentifier:(id)identifier completion:(id)completion;	// 0x33b29d25
- (void)removeProfilesFromInstallationQueue;	// 0x33b28881
- (BOOL)removeProvisioningProfileWithUUID:(id)uuid outError:(id *)error;	// 0x33b29b55
- (void)removeValueSetting:(id)setting;	// 0x33b2c1ed
- (void)resetAllSettingsToDefaults;	// 0x33b2c299
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)currentPasscodeRequestContinue passcode:(id)passcode;	// 0x33b2afc9
- (void)respondToWarningsContinueInstallation:(BOOL)warningsContinueInstallation;	// 0x33b2aeb1
- (int)restrictedBoolValueForFeature:(id)feature;	// 0x33b27e95
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x33b2bd99
- (void)setDelegate:(id)delegate;	// 0x33b27cbd
- (void)setInteractionDelegate:(id)delegate;	// 0x33b28759
- (void)setParameters:(id)parameters forBoolSetting:(id)boolSetting;	// 0x33b2bcb1
- (void)setParameters:(id)parameters forValueSetting:(id)valueSetting;	// 0x33b2bd25
- (void)setParametersForSettingsByType:(id)settingsByType;	// 0x33b2bbc1
- (void)setPasscodeWasSetInBackup:(BOOL)backup;	// 0x33b27cb9
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x33b2b411
- (void)setValue:(id)value forSetting:(id)setting;	// 0x33b2be4d
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)profileIdentifier outError:(id *)error;	// 0x33b29e29
- (void)shutDown;	// 0x33b2d009
- (void)storeCertificateData:(id)data forHostIdentifier:(id)hostIdentifier;	// 0x33b2d2cd
- (void)submitUserInputResponses:(id)responses;	// 0x33b2a459
- (BOOL)transitionToProfileAcceptanceUI;	// 0x33b28c25
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)bundleID;	// 0x33b28c71
- (BOOL)transitionToProfileOverviewUI;	// 0x33b28bf9
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x33b2c3b5
- (int)unlockScreenType;	// 0x33b2c6c1
- (void)updateProfileWithIdentifier:(id)identifier interactionDelegate:(id)delegate;	// 0x33b29041
- (id)updateProfileWithIdentifier:(id)identifier outError:(id *)error;	// 0x33b2999d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x33b2b3d9
- (id)userSettings;	// 0x33b2bee5
- (BOOL)validatePasscode:(id)passcode;	// 0x33b27e21
- (BOOL)validatePasscode:(id)passcode andUnlockContentProtectedDevice:(BOOL)device;	// 0x33b27e39
- (id)valueForFeature:(id)feature;	// 0x33b27ea5
- (id)valueRestrictionForFeature:(id)feature;	// 0x33b2b331
@end

