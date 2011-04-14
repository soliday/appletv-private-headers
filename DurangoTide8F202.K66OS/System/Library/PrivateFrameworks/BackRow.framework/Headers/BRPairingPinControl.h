/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;

__attribute__((visibility("hidden")))
@interface BRPairingPinControl : BRControl {
@private
	BRImage *_boxImage;	// 44 = 0x2c
	NSString *_pin;	// 48 = 0x30
}
@property(retain) id PIN;	// G=0x32905429; S=0x3290548d; converted property
- (id)init;	// 0x3290564d
// converted property getter: - (id)PIN;	// 0x32905429
- (id)_layerForPINDigit:(id)pindigit;	// 0x329056f9
- (id)accessibilityLabel;	// 0x32905439
- (void)dealloc;	// 0x329055f1
- (void)layoutSubcontrols;	// 0x329057b9
// converted property setter: - (void)setPIN:(id)pin;	// 0x3290548d
@end
