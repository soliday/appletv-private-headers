/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCHacks : NSObject {
}
+ (BOOL)_applyHeuristicsToDictionary:(id)dictionary forProfile:(id)profile outError:(id *)error;	// 0x340fff69
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)settingsDictionary;	// 0x341002b1
+ (void)_applyRestrictionChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x340ffc21
+ (id)_deviceSpecificDefaultSettings;	// 0x34100739
+ (id)_permittedAutoLockNumbers;	// 0x34100709
+ (id)_permittedGracePeriodNumbers;	// 0x341006d9
+ (id)_selectLargestNumberFromSortedArray:(id)sortedArray equalToOrLessThanNumber:(id)orLessThanNumber;	// 0x340ffea9
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)effectiveUserSettings;	// 0x341005bd
@end

