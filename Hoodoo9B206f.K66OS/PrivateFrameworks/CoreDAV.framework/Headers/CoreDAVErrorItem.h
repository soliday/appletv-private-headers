/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_validSyncToken;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_noUIDConflict;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_validAddressData;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_maxResourceSize;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_uid;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_ctagOkay;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_maxImageSize;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_invalidImageType;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_imageError;	// 60 = 0x3c
	CoreDAVLeafItem *_status;	// 64 = 0x40
}
@property(retain) CoreDAVItemWithNoChildren *ctagOkay;	// G=0x339ece09; S=0x339ece1d; @synthesize=_ctagOkay
@property(retain) CoreDAVItemWithNoChildren *imageError;	// G=0x339eceb1; S=0x339ecec5; @synthesize=_imageError
@property(retain) CoreDAVItemWithNoChildren *invalidImageType;	// G=0x339ece79; S=0x339ece8d; @synthesize=_invalidImageType
@property(retain) CoreDAVItemWithNoChildren *maxImageSize;	// G=0x339ece41; S=0x339ece55; @synthesize=_maxImageSize
@property(retain) CoreDAVItemWithNoChildren *maxResourceSize;	// G=0x339ecd99; S=0x339ecdad; @synthesize=_maxResourceSize
@property(retain) CoreDAVItemWithNoChildren *noUIDConflict;	// G=0x339ecd29; S=0x339ecd3d; @synthesize=_noUIDConflict
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;	// G=0x339eccb9; S=0x339ecccd; @synthesize=_numberOfMatchesWithinLimits
@property(retain) CoreDAVLeafItem *status;	// G=0x339ecee9; S=0x339ecefd; @synthesize=_status
@property(retain) CoreDAVItemWithNoChildren *uid;	// G=0x339ecdd1; S=0x339ecde5; @synthesize=_uid
@property(retain) CoreDAVItemWithNoChildren *validAddressData;	// G=0x339ecd61; S=0x339ecd75; @synthesize=_validAddressData
@property(retain) CoreDAVItemWithNoChildren *validSyncToken;	// G=0x339eccf1; S=0x339ecd05; @synthesize=_validSyncToken
- (id)init;	// 0x339ec16d
- (id)copyParseRules;	// 0x339ec5b9
// declared property getter: - (id)ctagOkay;	// 0x339ece09
- (void)dealloc;	// 0x339ec199
- (id)description;	// 0x339ec2ad
// declared property getter: - (id)imageError;	// 0x339eceb1
// declared property getter: - (id)invalidImageType;	// 0x339ece79
// declared property getter: - (id)maxImageSize;	// 0x339ece41
// declared property getter: - (id)maxResourceSize;	// 0x339ecd99
// declared property getter: - (id)noUIDConflict;	// 0x339ecd29
// declared property getter: - (id)numberOfMatchesWithinLimits;	// 0x339eccb9
// declared property setter: - (void)setCtagOkay:(id)okay;	// 0x339ece1d
// declared property setter: - (void)setImageError:(id)error;	// 0x339ecec5
// declared property setter: - (void)setInvalidImageType:(id)type;	// 0x339ece8d
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x339ece55
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x339ecdad
// declared property setter: - (void)setNoUIDConflict:(id)conflict;	// 0x339ecd3d
// declared property setter: - (void)setNumberOfMatchesWithinLimits:(id)matchesWithinLimits;	// 0x339ecccd
// declared property setter: - (void)setStatus:(id)status;	// 0x339ecefd
// declared property setter: - (void)setUid:(id)uid;	// 0x339ecde5
// declared property setter: - (void)setValidAddressData:(id)data;	// 0x339ecd75
// declared property setter: - (void)setValidSyncToken:(id)token;	// 0x339ecd05
// declared property getter: - (id)status;	// 0x339ecee9
// declared property getter: - (id)uid;	// 0x339ecdd1
// declared property getter: - (id)validAddressData;	// 0x339ecd61
// declared property getter: - (id)validSyncToken;	// 0x339eccf1
@end

