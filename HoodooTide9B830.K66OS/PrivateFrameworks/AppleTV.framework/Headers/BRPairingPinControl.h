/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;

__attribute__((visibility("hidden")))
@interface BRPairingPinControl : BRControl {
@private
	BRImage *_boxImage;	// 48 = 0x30
	NSString *_pin;	// 52 = 0x34
}
@property(retain) id PIN;	// G=0x329fd2f9; S=0x329fd18d; converted property
- (id)init;	// 0x329fd06d
// converted property getter: - (id)PIN;	// 0x329fd2f9
- (id)_layerForPINDigit:(id)pindigit;	// 0x329fd4a9
- (id)accessibilityLabel;	// 0x329fd44d
- (void)dealloc;	// 0x329fd12d
- (void)layoutSubcontrols;	// 0x329fd309
// converted property setter: - (void)setPIN:(id)pin;	// 0x329fd18d
@end

