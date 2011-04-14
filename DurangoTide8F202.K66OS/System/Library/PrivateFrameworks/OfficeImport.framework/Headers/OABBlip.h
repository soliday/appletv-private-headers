/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x319eaf59
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x31b0c989
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x319ead19
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x31b0caa1
+ (id)readBlipFromBse:(id)bse;	// 0x319cf571
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x319cf645
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x31b0c985
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x31b0cbb5
+ (EshBlip *)writeBlip:(id)blip;	// 0x31b0cded
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x31b0d199
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x31b0ca81
@end
