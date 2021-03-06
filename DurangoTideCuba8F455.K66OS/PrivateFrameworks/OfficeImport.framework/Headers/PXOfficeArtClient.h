/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAXClient.h"

@class PXPresentationState;

__attribute__((visibility("hidden")))
@interface PXOfficeArtClient : OAXClient {
@private
	PXPresentationState *mPresentationState;	// 4 = 0x4
}
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x32c74f79
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x32c74e0d
- (id)initWithState:(id)state;	// 0x32c71001
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x32c82b31
- (id)presentationState;	// 0x32d18045
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x32c8cfbd
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x32c77825
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x32c74c25
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x32c75029
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x32c84cd5
@end

