/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIFormPeripheral.h"

@class DOMHTMLInputElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePeripheral : NSObject <UIFormPeripheral> {
@private
	DOMHTMLInputElement *_inputElement;	// 4 = 0x4
	id<UIWebFormControl> _control;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _control;	// G=0x30237cb5; S=0x30237cc5; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x30237c81; S=0x30237c91; @synthesize
+ (id)createPeripheralWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x30237bf9
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x30237a3d
// declared property getter: - (id)_control;	// 0x30237cb5
- (int)_datePickerModeForInputType:(id)inputType;	// 0x30237995
// declared property getter: - (id)_inputElement;	// 0x30237c81
- (id)assistantView;	// 0x30237c61
- (void)beginEditing;	// 0x30237c41
- (void)dealloc;	// 0x30237ba1
// declared property setter: - (void)set_control:(id)control;	// 0x30237cc5
// declared property setter: - (void)set_inputElement:(id)element;	// 0x30237c91
@end

