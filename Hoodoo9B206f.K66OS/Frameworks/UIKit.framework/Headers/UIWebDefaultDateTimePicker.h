/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormControl.h"
#import <NSObject.h> // Unknown library

@class DOMHTMLInputElement, NSString, UIDatePicker;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {
@private
	DOMHTMLInputElement *_inputElement;	// 4 = 0x4
	UIDatePicker *_datePicker;	// 8 = 0x8
	NSString *_formatString;	// 12 = 0xc
	BOOL _shouldRemoveTimeZoneInformation;	// 16 = 0x10
	BOOL _isTimeInput;	// 17 = 0x11
}
@property(retain, nonatomic) UIDatePicker *_datePicker;	// G=0x355244a9; S=0x355244b9; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x35524475; S=0x35524485; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x35523ec9
- (void)_dateChangeHandler:(id)handler;	// 0x35523eb9
- (void)_dateChanged;	// 0x35523e85
- (void)_dateChangedSetAsNumber;	// 0x35523c9d
- (void)_dateChangedSetAsString;	// 0x35523d45
// declared property getter: - (id)_datePicker;	// 0x355244a9
// declared property getter: - (id)_inputElement;	// 0x35524475
- (id)_sanitizeInputValueForFormatter:(id)formatter;	// 0x355241f9
- (int)_timeZoneOffsetFromGMT:(id)gmt;	// 0x35523c4d
- (void)controlBeginEditing;	// 0x35524245
- (id)controlView;	// 0x355241e9
- (void)dealloc;	// 0x35524191
// declared property setter: - (void)set_datePicker:(id)picker;	// 0x355244b9
// declared property setter: - (void)set_inputElement:(id)element;	// 0x35524485
@end

