/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBWorkbook : NSObject {
}
+ (ChVector<OcText> *)createSheetNamesFromWorkbook:(id)workbook;	// 0x345cd041
+ (void)readDocumentPresentation:(id)presentation state:(id)state;	// 0x3444d2f1
+ (void)readDocumentProperties:(id)properties state:(id)state;	// 0x3444d01d
+ (id)readWithState:(id)state reader:(id)reader fileName:(id)name temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3444b3b5
+ (void)setupProcessors:(id)processors;	// 0x3444ce3d
+ (int)xlSheetTypeEnumFromEDSheet:(id)edsheet;	// 0x345ccfc9
@end

