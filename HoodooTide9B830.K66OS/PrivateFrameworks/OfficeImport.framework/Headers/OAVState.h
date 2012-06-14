/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, OCPPackagePart, NSMutableDictionary, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface OAVState : NSObject {
@private
	Class mClient;	// 4 = 0x4
	OAXDrawingState *mOAXState;	// 8 = 0x8
	OCPPackagePart *mPackagePart;	// 12 = 0xc
	NSMutableDictionary *mShapeTypes;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	NSMutableSet *mDualDrawables;	// 24 = 0x18
}
@property(retain) id packagePart;	// G=0x3127b2d9; S=0x31273841; converted property
- (id)initWithClient:(Class)client packagePart:(id)part;	// 0x3126a9c1
- (void)addDualDrawable:(id)drawable;	// 0x312ab2bd
- (id)blipRefForURL:(id)url;	// 0x313903e9
- (Class)client;	// 0x31281425
- (void)dealloc;	// 0x31284379
- (id)drawableForVmlShapeId:(id)vmlShapeId;	// 0x312ab20d
- (BOOL)isDualDrawable:(id)drawable;	// 0x312ab425
- (id)oaxState;	// 0x313903d9
- (unsigned long)officeArtShapeIdWithVmlShapeId:(id)vmlShapeId;	// 0x3127f381
// converted property getter: - (id)packagePart;	// 0x3127b2d9
- (void)reset;	// 0x31289d75
- (void)setDrawable:(id)drawable forVmlShapeId:(id)vmlShapeId;	// 0x3127f2a1
- (void)setOAXState:(id)state;	// 0x3126ab1d
// converted property setter: - (void)setPackagePart:(id)part;	// 0x31273841
- (void)setShapeType:(unsigned short)type forId:(id)anId;	// 0x31283899
- (unsigned short)shapeTypeForId:(id)anId;	// 0x312838ed
@end

