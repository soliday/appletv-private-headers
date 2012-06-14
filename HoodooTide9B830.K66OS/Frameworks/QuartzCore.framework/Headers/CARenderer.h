/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CAContext, CALayer;

@interface CARenderer : NSObject {
@private
	CARendererPriv *_priv;	// 4 = 0x4
}
@property(assign) CGRect bounds;	// G=0x36cd335d; S=0x36cd333d; 
@property(retain) CAContext *context;	// G=0x36cd33c9; S=0x36cd3e9d; 
@property(assign) id delegate;	// G=0x36cd33dd; S=0x36cd3ee9; 
@property(retain) CALayer *layer;	// G=0x36cd3411; S=0x36cd33f1; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x36cd3431
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x36cd3ad5
- (id)_initWithOptions:(id)options;	// 0x36cd3471
- (void)addUpdateRect:(CGRect)rect;	// 0x36cd36cd
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x36cd3809
// declared property getter: - (CGRect)bounds;	// 0x36cd335d
// declared property getter: - (id)context;	// 0x36cd33c9
- (void)dealloc;	// 0x36cd3a19
// declared property getter: - (id)delegate;	// 0x36cd33dd
- (void)endFrame;	// 0x36cd3595
- (BOOL)hasMissingContent;	// 0x36cd33a9
// declared property getter: - (id)layer;	// 0x36cd3411
- (double)nextFrameTime;	// 0x36cd337d
- (void)render;	// 0x36cd35c9
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x36cd333d
// declared property setter: - (void)setContext:(id)context;	// 0x36cd3e9d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36cd3ee9
// declared property setter: - (void)setLayer:(id)layer;	// 0x36cd33f1
- (CGRect)updateBounds;	// 0x36cd373d
@end

