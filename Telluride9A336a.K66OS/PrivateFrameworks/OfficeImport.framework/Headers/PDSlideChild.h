/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild : PDSlideBase {
@private
	BOOL mShowMasterPlaceholderAnimations;	// 32 = 0x20
	BOOL mShowMasterShapes;	// 33 = 0x21
	OADThemeOverrides *mThemeOverrides;	// 36 = 0x24
	OADColorMap *mColorMapOverride;	// 40 = 0x28
}
@property(retain) id colorMapOverride;	// G=0x34c08385; S=0x34d441d5; converted property
@property(assign) BOOL showMasterPlaceholderAnimations;	// G=0x34d98335; S=0x34d2fa05; converted property
@property(assign) BOOL showMasterShapes;	// G=0x34c01629; S=0x34b8755d; converted property
- (id)init;	// 0x34b86e8d
- (id)colorMap;	// 0x34c08345
// converted property getter: - (id)colorMapOverride;	// 0x34c08385
- (id)colorScheme;	// 0x34c083c5
- (void)dealloc;	// 0x34c0a1b1
- (void)doneWithContent;	// 0x34d983a1
- (id)drawingTheme;	// 0x34d98345
- (id)fontScheme;	// 0x34d2fd0d
// converted property setter: - (void)setColorMapOverride:(id)override;	// 0x34d441d5
// converted property setter: - (void)setShowMasterPlaceholderAnimations:(BOOL)animations;	// 0x34d2fa05
// converted property setter: - (void)setShowMasterShapes:(BOOL)shapes;	// 0x34b8755d
// converted property getter: - (BOOL)showMasterPlaceholderAnimations;	// 0x34d98335
// converted property getter: - (BOOL)showMasterShapes;	// 0x34c01629
- (id)styleMatrix;	// 0x34d4cd4d
- (id)themeOverrides;	// 0x34c0840d
@end

