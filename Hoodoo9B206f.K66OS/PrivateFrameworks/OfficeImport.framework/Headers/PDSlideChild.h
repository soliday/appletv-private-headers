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
@property(retain) id colorMapOverride;	// G=0x343fe385; S=0x3453a1d5; converted property
@property(assign) BOOL showMasterPlaceholderAnimations;	// G=0x3458e335; S=0x34525a05; converted property
@property(assign) BOOL showMasterShapes;	// G=0x343f7629; S=0x3437d55d; converted property
- (id)init;	// 0x3437ce8d
- (id)colorMap;	// 0x343fe345
// converted property getter: - (id)colorMapOverride;	// 0x343fe385
- (id)colorScheme;	// 0x343fe3c5
- (void)dealloc;	// 0x344001b1
- (void)doneWithContent;	// 0x3458e3a1
- (id)drawingTheme;	// 0x3458e345
- (id)fontScheme;	// 0x34525d0d
// converted property setter: - (void)setColorMapOverride:(id)override;	// 0x3453a1d5
// converted property setter: - (void)setShowMasterPlaceholderAnimations:(BOOL)animations;	// 0x34525a05
// converted property setter: - (void)setShowMasterShapes:(BOOL)shapes;	// 0x3437d55d
// converted property getter: - (BOOL)showMasterPlaceholderAnimations;	// 0x3458e335
// converted property getter: - (BOOL)showMasterShapes;	// 0x343f7629
- (id)styleMatrix;	// 0x34542d4d
- (id)themeOverrides;	// 0x343fe40d
@end

