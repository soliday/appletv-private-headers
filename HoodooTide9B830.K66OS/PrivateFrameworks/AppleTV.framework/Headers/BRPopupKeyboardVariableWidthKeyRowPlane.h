/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRPopupKeyboardVariableWidthKeyRowPlane : BRControl {
@private
	BRControl *_baseKeyControl;	// 48 = 0x30
}
- (id)initWithBaseKeyControl:(id)baseKeyControl;	// 0x32a16475
- (void)dealloc;	// 0x32a164cd
- (void)layoutSubcontrols;	// 0x32a1653d
- (CGSize)performActionWithSubcontrols:(int)subcontrols;	// 0x32a16571
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a16519
@end

