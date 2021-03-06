/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
@private
	BRControl *_prerender;	// 56 = 0x38
	BOOL _prerenderAnimation;	// 60 = 0x3c
}
@property(assign) BOOL prerenderAnimation;	// G=0x3324b371; S=0x3324b361; converted property
- (void)_addPrerender;	// 0x3324b4b5
- (void)_removePrerender;	// 0x3324b53d
- (void)_takePrerenderSnapshot;	// 0x3324b5a9
- (void)_updateContentForTransitionState;	// 0x3324b7e1
- (void)_zoomInCompleted:(id)completed;	// 0x3324bee9
- (void)_zoomOutCompleted:(id)completed;	// 0x3324bf59
- (void)dealloc;	// 0x3324b2ad
- (void)layoutSubcontrols;	// 0x3324b3e1
// converted property getter: - (BOOL)prerenderAnimation;	// 0x3324b371
- (void)setContent:(id)content;	// 0x3324b2f9
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x3324b361
- (void)setTransitionedIn:(BOOL)anIn;	// 0x3324b381
@end

