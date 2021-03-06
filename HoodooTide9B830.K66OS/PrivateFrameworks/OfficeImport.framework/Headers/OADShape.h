/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"

@class OADTextBody, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADTextBody *mTextBody;	// 32 = 0x20
}
@property(retain) id geometry;	// G=0x310e6af1; S=0x3115f1c5; converted property
@property(retain) id textBody;	// G=0x310e7739; S=0x3116626d; converted property
- (id)init;	// 0x310ee1e5
- (void)createPresetGeometryWithShapeType:(int)shapeType;	// 0x3138a05d
- (void)dealloc;	// 0x31170335
- (void)flattenProperties;	// 0x3138a141
// converted property getter: - (id)geometry;	// 0x310e6af1
- (void)removeUnnecessaryOverrides;	// 0x31168e19
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x3115f1c5
- (void)setParentTextListStyle:(id)style;	// 0x311688dd
// converted property setter: - (void)setTextBody:(id)body;	// 0x3116626d
- (id)shapeProperties;	// 0x310e6b61
// converted property getter: - (id)textBody;	// 0x310e7739
- (int)type;	// 0x310e6a75
@end

