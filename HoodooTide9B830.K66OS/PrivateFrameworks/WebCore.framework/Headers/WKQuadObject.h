/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WKQuadObject : NSObject {
@private
	WKQuad _quad;	// 4 = 0x4
}
@property(readonly, assign) WKQuad quad;	// G=0x358dadfd; converted property
- (id)initWithQuad:(WKQuad)quad;	// 0x358daf29
- (CGRect)boundingBox;	// 0x358dae35
// converted property getter: - (WKQuad)quad;	// 0x358dadfd
@end

