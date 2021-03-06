/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OAVState, NSMutableDictionary, OAXTableStyleCache, OAXDrawingState, PDPresentation;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PXPresentationState : NSObject {
@private
	NSMutableDictionary *mModelObjects;	// 4 = 0x4
	OAXDrawingState *mOfficeArtState;	// 8 = 0x8
	OAVState *mOAVState;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mSlideURLToIndexMap;	// 20 = 0x14
	PDPresentation *mTgtPresentation;	// 24 = 0x18
	id<OCCancelDelegate> mCancel;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x31160171; S=0x311385a5; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x3113cdc5; S=0x311385b5; converted property
- (id)init;	// 0x31138339
// declared property getter: - (id)cancelDelegate;	// 0x31160171
- (void)dealloc;	// 0x31145f95
- (BOOL)isCancelled;	// 0x31139c9d
- (id)modelObjectForLocation:(id)location;	// 0x3113fc35
- (id)oavState;	// 0x3128b275
- (id)officeArtState;	// 0x31138af5
- (void)resetOfficeArtState;	// 0x3113f269
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x311385a5
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x3113f919
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x31138931
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x311385b5
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x311c469d
- (id)tableStyleCache;	// 0x31138991
// converted property getter: - (id)tgtPresentation;	// 0x3113cdc5
@end

