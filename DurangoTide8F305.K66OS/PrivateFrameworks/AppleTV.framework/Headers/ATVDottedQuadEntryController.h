/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import <BRController.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTextControl, ATVIPv4AddressEntryControl, NSString, BRHeaderControl;
@protocol ATVDottedQuadEntryDelegate;

@interface ATVDottedQuadEntryController : BRController <BRTextFieldDelegate> {
@private
	id<ATVDottedQuadEntryDelegate> _delegate;	// 60 = 0x3c
	ATVIPv4AddressEntryControl *_editor;	// 64 = 0x40
	BRTextControl *_prompt;	// 68 = 0x44
	BRHeaderControl *_header;	// 72 = 0x48
	NSString *_dottedQuad;	// 76 = 0x4c
}
@property(retain) NSString *dottedQuad;	// G=0x30730b8d; S=0x30730b9d; converted property
- (id)initWithTitle:(id)title prompt:(id)prompt label:(id)label notifying:(id)notifying;	// 0x30730d49
- (id)accessibilityLabel;	// 0x30731111
- (void)dealloc;	// 0x30730cb9
// converted property getter: - (id)dottedQuad;	// 0x30730b8d
// converted property setter: - (void)setDottedQuad:(id)quad;	// 0x30730b9d
- (void)setFrame:(CGRect)frame;	// 0x30730ef9
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x30730c89
- (void)textDidChange:(id)text;	// 0x30730b89
- (void)textDidEndEditing:(id)text;	// 0x30730bf1
@end
