/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x356a2285
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x356ff1b5
+ (BOOL)escherIsFullySupported;	// 0x35564365
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x3555ebe9
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x355aee51
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x3555e59d
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x356f26f1
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x35563899
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x35563a59
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x355633cd
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x3556389d
+ (BOOL)tablesAreAllowed;	// 0x355ae8e5
@end
