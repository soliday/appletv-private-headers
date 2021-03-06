/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIKeyboardOverlayManager : NSObject {
}
+ (id)overlayDirectory;	// 0x303dbda1
+ (BOOL)overlaysEnabled;	// 0x300b5a2d
+ (id)sharedInstance;	// 0x303dbd65
- (id)baseLayoutForOverlay:(id)overlay;	// 0x303dc19d
- (id)localizedNameForOverlay:(id)overlay;	// 0x303dc095
- (void)modifyKeyboard:(id)keyboard withOverlay:(id)overlay;	// 0x303dc231
- (id)overlayList;	// 0x303dbed9
- (BOOL)overlayNameIsValid:(id)valid;	// 0x303dbff5
@end

