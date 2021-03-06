/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CALayerHost : CALayer {
}
@property(assign) unsigned contextId;	// G=0x32b0439d; S=0x32b043a5; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x32b042fd
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x32b04149
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x32b042c9
// declared property getter: - (unsigned)contextId;	// 0x32b0439d
- (void)didChangeValueForKey:(id)key;	// 0x32b040f9
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x32b04355
// declared property setter: - (void)setContextId:(unsigned)anId;	// 0x32b043a5
@end

