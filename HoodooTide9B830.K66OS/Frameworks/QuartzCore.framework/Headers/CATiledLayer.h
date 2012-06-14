/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CATiledLayer : CALayer {
}
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;	// G=0x36ccfaed; S=0x36ccfaf9; 
@property(assign) CGColorRef fillColor;	// G=0x36ccfacd; S=0x36ccfad5; 
@property(assign) unsigned levelsOfDetail;	// G=0x36cceb79; S=0x36cceb71; 
@property(assign) unsigned levelsOfDetailBias;	// G=0x36cceb69; S=0x36cceb61; 
@property(assign) float maximumTileScale;	// G=0x36ccfadd; S=0x36ccfae5; 
@property(assign) CGSize tileSize;	// G=0x36cceb51; S=0x36cceb49; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36cce97d
+ (id)defaultValueForKey:(id)key;	// 0x36cce9d5
+ (double)fadeDuration;	// 0x36cce861
+ (unsigned)prefetchedTiles;	// 0x36cce875
+ (BOOL)shouldDrawOnMainThread;	// 0x36cce871
- (BOOL)_canDisplayConcurrently;	// 0x36cce86d
- (void)_dealloc;	// 0x36ccee75
- (void)_display;	// 0x36cceb81
- (BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x36ccf0c9
- (void)dealloc;	// 0x36ccee41
- (void)didChangeValueForKey:(id)key;	// 0x36cce879
- (void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x36ccf87d
// declared property getter: - (CGColorRef)fillColor;	// 0x36ccfacd
- (void)invalidateContents;	// 0x36cceea9
// declared property getter: - (BOOL)isDrawingEnabled;	// 0x36ccfaed
// declared property getter: - (unsigned long)levelsOfDetail;	// 0x36cceb79
// declared property getter: - (unsigned long)levelsOfDetailBias;	// 0x36cceb69
// declared property getter: - (float)maximumTileScale;	// 0x36ccfadd
- (BOOL)queueIsEmpty;	// 0x36ccfa31
- (void)setContents:(id)contents;	// 0x36cceebd
// declared property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x36ccfaf9
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x36ccfad5
// declared property setter: - (void)setLevelsOfDetail:(unsigned long)detail;	// 0x36cceb71
// declared property setter: - (void)setLevelsOfDetailBias:(unsigned long)detailBias;	// 0x36cceb61
// declared property setter: - (void)setMaximumTileScale:(float)scale;	// 0x36ccfae5
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x36ccef8d
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x36ccf095
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x36ccf74d
// declared property setter: - (void)setTileSize:(CGSize)size;	// 0x36cceb49
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x36ccf039
// declared property getter: - (CGSize)tileSize;	// 0x36cceb51
@end

