/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

@interface MCRestrictionManager : NSObject {
@private
	NSMutableDictionary *_defaultRestrictions;	// 4 = 0x4
	NSMutableDictionary *_restrictions;	// 8 = 0x8
	NSMutableDictionary *_profileRestrictions;	// 12 = 0xc
	NSMutableDictionary *_clientRestrictions;	// 16 = 0x10
	NSDictionary *_userSettings;	// 20 = 0x14
	NSDictionary *_effectiveUserSettings;	// 24 = 0x18
	NSDictionary *_clientTypeLoaders;	// 28 = 0x1c
	CFDictionaryRef _clientTypeToLoaderClass;	// 32 = 0x20
	CFDictionaryRef _clientTypeToLoaderSelector;	// 36 = 0x24
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;	// 40 = 0x28
	dispatch_queue_s *_syncQueue;	// 44 = 0x2c
	dispatch_queue_s *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientRestrictions;	// G=0x3306b0b5; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x3306b635; converted property
@property(readonly, retain) NSMutableDictionary *profileRestrictions;	// G=0x3306af81; converted property
@property(assign) int senderPID;	// G=0x3306a665; S=0x3306a675; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x3306b525; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x3306d03d
+ (void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x3306e549
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x3306d151
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x3306d26d
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x3306d325
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x3306d3d9
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x3306d399
+ (id)defaultSettingsDict;	// 0x3306d419
+ (id)defaultValueForSetting:(id)setting;	// 0x3306d2d1
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x3306d6dd
+ (id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x3306d5dd
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x3306d509
+ (int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x3306d66d
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x3306d435
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x3306dc9d
+ (id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL *)changed outError:(id *)error;	// 0x3306da4d
+ (id)sharedManager;	// 0x3306e51d
+ (id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x3306d619
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x3306d07d
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x3306d225
- (id)_clientRestrictions;	// 0x3306fde1
- (id)_clientRestrictionsForClientUUID:(id)clientUUID;	// 0x3306bf49
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x3306bf89
- (id)_currentRestrictionsDictionary;	// 0x330701d9
- (id)_defaultRestrictionsDictionary;	// 0x330702a9
- (id)_defaultSettingsDictionary;	// 0x3306bc55
- (id)_effectiveUserSettings;	// 0x3306ef29
- (id)_init;	// 0x3306f375
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x3306f4f1
- (id)_loadClientLoaders;	// 0x3306f555
- (id)_profileRestrictions;	// 0x33070055
- (BOOL)_recomputeEffectiveUserSettings;	// 0x3306e841
- (BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x3306fb71
- (void)_setClientRestrictionsWithoutNotifications:(id)notifications;	// 0x3306fd75
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x3306ee25
- (void)_setRestrictions:(id)restrictions;	// 0x33070151
- (BOOL)_setUserSettings:(id)settings;	// 0x3306efd1
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x3306bfc9
- (id)_userSettings;	// 0x3306f06d
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x3306c009
// converted property getter: - (id)clientRestrictions;	// 0x3306b0b5
- (id)clientRestrictionsForClientUUID:(id)clientUUID;	// 0x3306b1c5
- (id)combinedProfileRestrictions;	// 0x3306fedd
- (id)currentRestrictionsDictionary;	// 0x3306ae71
- (void)dealloc;	// 0x3306f1d5
- (id)defaultRestrictionsDictionary;	// 0x3306ad4d
- (id)description;	// 0x3306f2f9
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x3306e801
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x3306e7c1
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x3306e76d
// converted property getter: - (id)effectiveUserSettings;	// 0x3306b635
- (id)effectiveValueForSetting:(id)setting;	// 0x3306e735
- (void)invalidateRestrictions;	// 0x3306a685
- (void)invalidateSettings;	// 0x3306a779
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x3306e691
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x3306b8d1
- (void)notifyClientsToRecomputeCompliance;	// 0x3306f3f9
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x3306a8c5
- (id)objectForFeature:(id)feature;	// 0x3306f115
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x3306cfe9
// converted property getter: - (id)profileRestrictions;	// 0x3306af81
- (BOOL)recomputeNagMetadata;	// 0x3306c8e9
- (void)removeBoolSetting:(id)setting;	// 0x3306a9a5
- (BOOL)removeOrphanedClientRestrictions;	// 0x3306c39d
- (void)removeValueSetting:(id)setting;	// 0x3306ab11
- (void)resetAllSettingsToDefaults;	// 0x3306ac7d
- (int)restrictedBoolForFeature:(id)feature;	// 0x3306f195
// declared property getter: - (int)senderPID;	// 0x3306a665
- (BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3306c2b9
- (BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3306f9d5
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x3306b745
- (BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3306bc71
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x3306a675
- (void)setShowNagMessage;	// 0x3306a839
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x3306fad9
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x3306b2fd
// converted property getter: - (id)userSettings;	// 0x3306b525
- (id)valueForFeature:(id)feature;	// 0x3306f155
@end

