/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

@interface TLToneManager : NSObject {
@private
	NSMutableDictionary *_iTunesTonesByIdentifier;	// 4 = 0x4
	NSMutableDictionary *_textTonesByIdentifier;	// 8 = 0x8
	NSMutableDictionary *_iTunesIdentifiersByPID;	// 12 = 0xc
	NSDictionary *_previewBehaviorForDefaultIdentifier;	// 16 = 0x10
	NSDictionary *_identifierAliasMap;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
	BOOL _observingChangeNotifications;	// 28 = 0x1c
	BOOL _hasAdditionalTextTones;	// 29 = 0x1d
}
@property(retain) id currentRingtoneIdentifier;	// G=0x31f0780d; S=0x31f0957d; converted property
@property(assign) BOOL hasAdditionalTextTones;	// G=0x31f09d21; S=0x31f09d31; converted property
+ (BOOL)identifierIsTextTone:(id)tone;	// 0x31f07941
+ (BOOL)migrateLegacyToneSettings;	// 0x31f0b2a1
+ (id)sharedRingtoneManager;	// 0x31f06e1d
- (id)init;	// 0x31f06e69
- (id)initWithChangeNotifications:(BOOL)changeNotifications;	// 0x31f06e7d
- (id)initWithITunesRingtonePlistAtPath:(id)path registerForChangeNotifications:(BOOL)changeNotifications;	// 0x31f06e91
- (id)ITunesRingtoneInformationPlist;	// 0x31f087d1
- (BOOL)_addToneToManifest:(id)manifest metadata:(id)metadata fileName:(id)name mediaDirectory:(id)directory;	// 0x31f0a465
- (id)_copyITunesRingtonesFromManifestPath:(id)manifestPath mediaDirectoryPath:(id)path;	// 0x31f08461
- (unsigned long)_currentToneSoundID:(id)anId defaultIdentifier:(id)identifier;	// 0x31f09d95
- (id)_defaultToneIdentifier:(int)identifier;	// 0x31f09d41
- (id)_defaultToneName:(int)name;	// 0x31f09d51
- (void)_deviceRingtonesChangedNotification;	// 0x31f0773d
- (int)_lockManifest:(id)manifest;	// 0x31f09e65
- (void)_reloadITunesRingtonesAfterExternalChange;	// 0x31f086e5
- (BOOL)_removeToneFromManifest:(id)manifest fileName:(id)name deletedMetadata:(id *)metadata;	// 0x31f0a6f9
- (unsigned long)_soundIDForSystemTone:(id)systemTone isValid:(BOOL *)valid;	// 0x31f097c1
- (id)aliasForIdentifier:(id)identifier;	// 0x31f09791
- (void)clearOldToneSettings;	// 0x31f07481
- (id)copyCurrentRingtoneIdentifier;	// 0x31f077bd
- (id)copyCurrentRingtoneName;	// 0x31f0774d
- (id)copyCurrentTextToneIdentifier;	// 0x31f09449
- (id)copyCurrentTextToneName;	// 0x31f094e5
- (id)copyIdentifierForRingtoneAtPath:(id)path isValid:(BOOL *)valid;	// 0x31f07ca5
- (id)copyNameOfIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x31f08005
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier;	// 0x31f07a05
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x31f07a19
- (id)copyNameOfTextToneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x31f0968d
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier;	// 0x31f07a29
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x31f07a3d
- (unsigned long)createPreviewSoundIDForToneIdentifier:(id)toneIdentifier;	// 0x31f09c15
- (id)currentCalendarAlertToneIdentifier;	// 0x31f0aeed
- (unsigned long)currentNewCalendarAlertToneSoundID;	// 0x31f0b1c9
- (id)currentNewMailToneIdentifier;	// 0x31f0ace9
- (unsigned long)currentNewMailToneSoundID;	// 0x31f0b0f1
- (unsigned long)currentNewReminderAlertToneSoundID;	// 0x31f0b211
- (id)currentNewVoicemailToneIdentifier;	// 0x31f0ae41
- (unsigned long)currentNewVoicemailToneSoundID;	// 0x31f0b181
- (id)currentReminderAlertToneIdentifier;	// 0x31f0af99
// converted property getter: - (id)currentRingtoneIdentifier;	// 0x31f0780d
- (id)currentRingtoneName;	// 0x31f07835
- (id)currentSentMailToneIdentifier;	// 0x31f0ad95
- (unsigned long)currentSentMailToneSoundID;	// 0x31f0b139
- (id)currentSentTweetToneIdentifier;	// 0x31f0b045
- (unsigned long)currentSentTweetToneSoundID;	// 0x31f0b259
- (unsigned long)currentTextToneSoundID;	// 0x31f09635
- (void)dealloc;	// 0x31f07249
- (id)defaultCalendarAlertToneIdentifier;	// 0x31f0acad
- (id)defaultNewMailToneIdentifier;	// 0x31f0ac71
- (id)defaultNewVoicemailToneIdentifier;	// 0x31f0ac99
- (id)defaultReminderAlertToneIdentifier;	// 0x31f0acc1
- (id)defaultRingtoneIdentifier;	// 0x31f0785d
- (id)defaultRingtoneName;	// 0x31f07871
- (id)defaultRingtonePath;	// 0x31f078b1
- (id)defaultSentMailToneIdentifier;	// 0x31f0ac85
- (id)defaultSentTweetToneIdentifier;	// 0x31f0acd5
- (id)defaultTextToneIdentifier;	// 0x31f095cd
- (id)defaultTextToneName;	// 0x31f095e1
- (void)deleteAllSyncedData;	// 0x31f0a8a5
- (BOOL)deleteSyncedToneByPID:(id)pid;	// 0x31f09fd5
- (id)deviceITunesRingtoneDirectory;	// 0x31f08789
- (id)deviceITunesRingtoneInformationPlist;	// 0x31f087ad
- (unsigned)durationOfToneWithIdentifier:(id)identifier;	// 0x31f083f5
- (BOOL)ensureDirectoryExists:(id)exists;	// 0x31f09dd9
- (void)fixupMissingToneSettings;	// 0x31f07335
// converted property getter: - (BOOL)hasAdditionalTextTones;	// 0x31f09d21
- (id)iTunesRingtoneDirectory;	// 0x31f087f5
- (id)iTunesToneForPID:(id)pid;	// 0x31f0a421
- (void)importTone:(id)tone metadata:(id)metadata completionBlock:(id)block;	// 0x31f0a159
- (BOOL)insertPurchasedToneMetadata:(id)metadata filename:(id)filename;	// 0x31f09f69
- (BOOL)insertSyncedToneMetadata:(id)metadata filename:(id)filename;	// 0x31f09efd
- (id)installedTones;	// 0x31f0ab05
- (BOOL)isAlertTone:(id)tone;	// 0x31f083b5
- (BOOL)isRingtonePurchased:(id)purchased;	// 0x31f08381
- (BOOL)isToneProtectedWithIdentifier:(id)identifier;	// 0x31f0842d
- (BOOL)isValidToneIdentifier:(id)identifier;	// 0x31f09369
- (void)loadITunesRingtoneInfoPlistAtPath:(id)path;	// 0x31f07579
- (void)loadTextToneInfo;	// 0x31f08859
- (id)localizedNameWithIdentifier:(id)identifier;	// 0x31f078d9
- (id)localizedRingtoneNameWithIdentifier:(id)identifier;	// 0x31f07931
- (id)newAVItemWithRingtoneIdentifier:(id)ringtoneIdentifier;	// 0x31f082ad
- (id)nullTextToneName;	// 0x31f095f5
- (id)pathFromIdentifier:(id)identifier withPrefix:(id)prefix;	// 0x31f07999
- (int)previewBehaviorForDefaultIdentifier:(id)defaultIdentifier;	// 0x31f09751
- (unsigned long)previewSoundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x31f09701
- (id)rootDirectory;	// 0x31f0877d
// converted property setter: - (void)setCurrentRingtoneIdentifier:(id)identifier;	// 0x31f0957d
- (void)setCurrentTextToneIdentifier:(id)identifier;	// 0x31f0952d
- (void)setDelegate:(id)delegate;	// 0x31f07325
// converted property setter: - (void)setHasAdditionalTextTones:(BOOL)tones;	// 0x31f09d31
- (BOOL)shouldShowAlarmSounds;	// 0x31f07321
- (BOOL)shouldShowRingtones;	// 0x31f0731d
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x31f09821
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier isValid:(BOOL *)valid;	// 0x31f09835
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier;	// 0x31f09845
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier isValid:(BOOL *)valid;	// 0x31f09859
- (id)systemNewSoundDirectory;	// 0x31f0884d
- (id)systemRingtoneDirectory;	// 0x31f08819
- (id)systemSoundDirectory;	// 0x31f08841
- (BOOL)toneWithIdentifierIsValid:(id)identifierIsValid;	// 0x31f0822d
- (BOOL)transferPurchasedToITunes:(id)itunes;	// 0x31f0ab25
@end

