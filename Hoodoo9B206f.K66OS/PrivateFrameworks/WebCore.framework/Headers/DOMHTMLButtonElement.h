/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x33486ebd; S=0x33486851; 
@property(assign) BOOL autofocus;	// G=0x334872ed; S=0x33487565; 
@property(assign) BOOL disabled;	// G=0x33487225; S=0x3348748d; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x33486055; 
@property(retain) id formAction;	// G=0x334861e9; S=0x33486341; converted property
@property(retain) id formEnctype;	// G=0x33486c1d; S=0x33486485; converted property
@property(retain) id formMethod;	// G=0x33486cfd; S=0x334865c9; converted property
@property(assign) BOOL formNoValidate;	// G=0x3348715d; S=0x334873b5; converted property
@property(retain) id formTarget;	// G=0x33486ddd; S=0x3348670d; converted property
@property(copy) NSString *name;	// G=0x33486f9d; S=0x33486995; 
@property(readonly, copy) NSString *type;	// G=0x33486111; 
@property(copy) NSString *value;	// G=0x3348707d; S=0x33486ad9; 
@property(readonly, assign) BOOL willValidate;	// G=0x33485f95; 
// declared property getter: - (id)accessKey;	// 0x33486ebd
// declared property getter: - (BOOL)autofocus;	// 0x334872ed
- (BOOL)checkValidity;	// 0x3348799d
- (void)click;	// 0x33487b95
// declared property getter: - (BOOL)disabled;	// 0x33487225
// declared property getter: - (id)form;	// 0x33486055
// converted property getter: - (id)formAction;	// 0x334861e9
// converted property getter: - (id)formEnctype;	// 0x33486c1d
// converted property getter: - (id)formMethod;	// 0x33486cfd
// converted property getter: - (BOOL)formNoValidate;	// 0x3348715d
// converted property getter: - (id)formTarget;	// 0x33486ddd
- (id)labels;	// 0x33487855
// declared property getter: - (id)name;	// 0x33486f9d
// declared property setter: - (void)setAccessKey:(id)key;	// 0x33486851
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x33487565
- (void)setCustomValidity:(id)validity;	// 0x33487a5d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3348748d
// converted property setter: - (void)setFormAction:(id)action;	// 0x33486341
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x33486485
// converted property setter: - (void)setFormMethod:(id)method;	// 0x334865c9
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x334873b5
// converted property setter: - (void)setFormTarget:(id)target;	// 0x3348670d
// declared property setter: - (void)setName:(id)name;	// 0x33486995
// declared property setter: - (void)setValue:(id)value;	// 0x33486ad9
- (int)structuralComplexityContribution;	// 0x334c5de5
// declared property getter: - (id)type;	// 0x33486111
- (id)validationMessage;	// 0x33487709
- (id)validity;	// 0x3348763d
// declared property getter: - (id)value;	// 0x3348707d
// declared property getter: - (BOOL)willValidate;	// 0x33485f95
@end

