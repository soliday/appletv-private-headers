/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"
#import "OfficeImport-Structs.h"

@class ODDStyleDefinition, ODDColorTransform, ODDNodePoint;

__attribute__((visibility("hidden")))
@interface ODDDiagram : OADDrawable {
@private
	ODDNodePoint *mDocumentPoint;	// 24 = 0x18
	ODDColorTransform *mColorTransform;	// 28 = 0x1c
	ODDStyleDefinition *mStyleDefinition;	// 32 = 0x20
}
@property(retain) id documentPoint;	// G=0x3453e9e9; S=0x3453d891; converted property
- (id)init;	// 0x3453b7a5
- (id)colorTransform;	// 0x3453bde9
- (void)dealloc;	// 0x34544425
// converted property getter: - (id)documentPoint;	// 0x3453e9e9
// converted property setter: - (void)setDocumentPoint:(id)point;	// 0x3453d891
- (void)setParentTextListStyle:(id)style;	// 0x3453e635
- (id)styleDefinition;	// 0x3453ba6d
@end

