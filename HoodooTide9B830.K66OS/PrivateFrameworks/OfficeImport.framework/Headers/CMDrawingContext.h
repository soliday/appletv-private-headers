/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, CMDrawableMapper, NSAffineTransform;

__attribute__((visibility("hidden")))
@interface CMDrawingContext : NSObject {
@private
	CMDrawableMapper *_mapper;	// 4 = 0x4
	NSMutableArray *_actions;	// 8 = 0x8
	CGRect _frame;	// 12 = 0xc
	CGRect _finalFrame;	// 28 = 0x1c
	CFDataRef _data;	// 44 = 0x2c
	CGDataConsumerRef _dataConsumer;	// 48 = 0x30
	CGContextRef _cgContext;	// 52 = 0x34
	NSAffineTransform *_currentTransform;	// 56 = 0x38
	NSMutableArray *_transforms;	// 60 = 0x3c
	CGImageRef _fillImage;	// 64 = 0x40
}
@property(readonly, assign) CGRect frame;	// G=0x313d8555; converted property
@property(retain) CMDrawableMapper *mapper;	// G=0x312a4e39; S=0x310e6591; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x310e6481
- (void)_addTransform:(id)transform;	// 0x311b3225
- (void)_applyTransform:(id)transform;	// 0x311b037d
- (CGContextRef)_cgContext;	// 0x313d8545
- (void)_closeContext;	// 0x311b0729
- (void)_createCGContext;	// 0x311b0205
- (void)_playbackActions;	// 0x311b03e1
- (void)_restoreLastTransform;	// 0x311b3345
- (CGRect)_transformRect:(CGRect)rect withTransform:(id)transform;	// 0x310e7045
- (void)addDebugPath:(CGPathRef)path;	// 0x313d8579
- (void)addPath:(CGPathRef)path;	// 0x311adacd
- (void)addTransform:(id)transform;	// 0x311b31a5
- (id)createPDF;	// 0x310ebc25
- (float)currentScaleFactor;	// 0x313d86b1
- (CGAffineTransform)currentTransform;	// 0x311acc49
- (void)dealloc;	// 0x310ebd2d
// converted property getter: - (CGRect)frame;	// 0x313d8555
// converted property getter: - (id)mapper;	// 0x312a4e39
- (CGRect)pdfFrame;	// 0x311b0349
- (void)restoreLastTransform;	// 0x311b32c5
- (void)setFillColor:(CGColorRef)color;	// 0x311ad971
- (void)setFillImage:(CGImageRef)image;	// 0x312a4e49
- (void)setLineDash:(id)dash;	// 0x3122f0f5
- (void)setLineWidth:(float)width;	// 0x311b3a25
// converted property setter: - (void)setMapper:(id)mapper;	// 0x310e6591
- (void)setStrokeColor:(CGColorRef)color;	// 0x311ad87d
- (CGRect)transformRectToGroup:(CGRect)group;	// 0x312d57b5
- (CGRect)transformRectToPage:(CGRect)page;	// 0x310e7005
@end

