/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLCapabilitiesManager : NSObject {
	BOOL _isRingtoneStoreAvailable;	// 4 = 0x4
@private
	BOOL _isToneStoreAvailable;	// 5 = 0x5
}
@property(assign, nonatomic) BOOL isRingtoneStoreAvailable;	// G=0x36df8991; S=0x36df89a1; @synthesize=_isRingtoneStoreAvailable
@property(assign, nonatomic) BOOL isToneStoreAvailable;	// G=0x36df89b1; S=0x36df89c1; @synthesize=_isToneStoreAvailable
+ (void)_setDefaultCapabilitiesManager:(id)manager;	// 0x36df8689
+ (id)defaultCapabilitiesManager;	// 0x36df8641
- (id)init;	// 0x36df86c1
- (void)_checkRingtoneStoreAvailability;	// 0x36df8875
- (BOOL)areCustomVibrationsAllowed;	// 0x36df884d
- (void)dealloc;	// 0x36df8765
- (BOOL)hasAdditionalTextTones;	// 0x36df8859
- (BOOL)hasTelephonyCapability;	// 0x36df87f1
- (BOOL)hasVibratorCapability;	// 0x36df87fd
// declared property getter: - (BOOL)isRingtoneStoreAvailable;	// 0x36df8991
- (BOOL)isSensitiveUIAllowed;	// 0x36df87d5
// declared property getter: - (BOOL)isToneStoreAvailable;	// 0x36df89b1
// declared property setter: - (void)setIsRingtoneStoreAvailable:(BOOL)available;	// 0x36df89a1
// declared property setter: - (void)setIsToneStoreAvailable:(BOOL)available;	// 0x36df89c1
@end

