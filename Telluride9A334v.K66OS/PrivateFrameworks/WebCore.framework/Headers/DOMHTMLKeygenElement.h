/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMValidityState, DOMNodeList, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x36850b85; S=0x36850d15; 
@property(copy) NSString *challenge;	// G=0x36850ec5; S=0x36851231; 
@property(assign) BOOL disabled;	// G=0x36850c4d; S=0x36850ded; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x368514b9; 
@property(copy) NSString *keytype;	// G=0x36850fa5; S=0x36851375; 
@property(readonly, retain) DOMNodeList *labels;	// G=0x368518c5; 
@property(copy) NSString *name;	// G=0x36851085; S=0x36851575; 
@property(readonly, copy) NSString *type;	// G=0x36851159; 
@property(readonly, copy) NSString *validationMessage;	// G=0x36851779; 
@property(readonly, retain) DOMValidityState *validity;	// G=0x368516ad; 
@property(readonly, assign) BOOL willValidate;	// G=0x36850ac5; 
// declared property getter: - (BOOL)autofocus;	// 0x36850b85
// declared property getter: - (id)challenge;	// 0x36850ec5
- (BOOL)checkValidity;	// 0x36851a0d
// declared property getter: - (BOOL)disabled;	// 0x36850c4d
// declared property getter: - (id)form;	// 0x368514b9
// declared property getter: - (id)keytype;	// 0x36850fa5
// declared property getter: - (id)labels;	// 0x368518c5
// declared property getter: - (id)name;	// 0x36851085
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36850d15
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x36851231
- (void)setCustomValidity:(id)validity;	// 0x36851acd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36850ded
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x36851375
// declared property setter: - (void)setName:(id)name;	// 0x36851575
// declared property getter: - (id)type;	// 0x36851159
// declared property getter: - (id)validationMessage;	// 0x36851779
// declared property getter: - (id)validity;	// 0x368516ad
// declared property getter: - (BOOL)willValidate;	// 0x36850ac5
@end

