/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement;

__attribute__((visibility("hidden")))
@interface DOMHTMLFieldSetElement : DOMHTMLElement {
}
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x33f8c59d; 
- (BOOL)checkValidity;	// 0x33f8c709
// declared property getter: - (id)form;	// 0x33f8c59d
- (void)setCustomValidity:(id)validity;	// 0x33f8c725
- (id)validationMessage;	// 0x33f8c5d5
- (id)validity;	// 0x33f8c5b9
- (BOOL)willValidate;	// 0x33f8c57d
@end
