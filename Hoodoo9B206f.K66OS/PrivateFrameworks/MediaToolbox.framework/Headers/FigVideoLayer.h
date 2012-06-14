/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h> // Unknown library

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer {
@private
	FigVideoLayerInternal *_videoLayer;	// 48 = 0x30
}
- (id)init;	// 0x35c16519
- (id)initWithLayer:(id)layer;	// 0x35c16601
- (void)_sendVideoLayerIsBeingServicedNotification;	// 0x35c169a1
- (void)dealloc;	// 0x35c16705
- (void)finalize;	// 0x35c167a5
- (BOOL)isVideoLayerBeingServiced;	// 0x35c1692d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x35c16831
- (void)notificationBarrier;	// 0x35c16971
@end

