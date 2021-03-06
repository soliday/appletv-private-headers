/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAXTitleChangeProtocol.h"
#import "BRAXSelectionChangeProtocol.h"
#import "BRController.h"

@class BRImageControl, BRTextControl, BRAlignmentAdjustingTextControl, BRHeaderControl;

@interface BRAlertController : BRController <BRAXSelectionChangeProtocol, BRAXTitleChangeProtocol> {
@private
	id _eventDelegate;	// 80 = 0x50
	SEL _eventSelector;	// 84 = 0x54
	BRHeaderControl *_header;	// 88 = 0x58
	int _type;	// 92 = 0x5c
	BRTextControl *_primary;	// 96 = 0x60
	BRAlignmentAdjustingTextControl *_secondary;	// 100 = 0x64
	BRAlignmentAdjustingTextControl *_footer;	// 104 = 0x68
	BRImageControl *_image;	// 108 = 0x6c
}
@property(retain) id footerText;	// G=0x330598e5; S=0x33059895; converted property
@property(retain) id primaryText;	// G=0x3305972d; S=0x33059645; converted property
@property(retain) id secondaryText;	// G=0x330597c5; S=0x33059775; converted property
+ (id)alertForError:(id)error;	// 0x33058ccd
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x33058d75
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x33058dc1
- (id)_imageForType:(int)type;	// 0x33059a79
- (id)accessibilityLabel;	// 0x33059a11
- (id)axSelectedItemText;	// 0x33059ac9
- (id)axTitleText;	// 0x33059ab9
- (BOOL)brEventAction:(id)action;	// 0x33059475
- (void)dealloc;	// 0x33058f3d
// converted property getter: - (id)footerText;	// 0x330598e5
- (id)footerTextControl;	// 0x3305991d
- (BOOL)isAccessibilityElement;	// 0x33059a0d
- (void)layoutSubcontrols;	// 0x33058fed
// converted property getter: - (id)primaryText;	// 0x3305972d
- (id)primaryTextControl;	// 0x33059765
- (BOOL)recreateOnReselect;	// 0x33059471
// converted property getter: - (id)secondaryText;	// 0x330597c5
- (id)secondaryTextControl;	// 0x330597fd
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x330599b5
// converted property setter: - (void)setFooterText:(id)text;	// 0x33059895
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x3305992d
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x33059645
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x33059695
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x33059775
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x3305980d
- (void)setTitle:(id)title;	// 0x33059605
- (void)wasPushed;	// 0x330595a5
@end

