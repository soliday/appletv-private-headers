/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x344bd3ed
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x3466ebd5
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x344bd171
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x3466e441
+ (id)readBlipFromBse:(id)bse;	// 0x34431339
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x34431425
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x3466e43d
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x3466e981
+ (EshBlip *)writeBlip:(id)blip;	// 0x3466e559
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x3466e895
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x3466e539
@end

