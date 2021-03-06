/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x31c14225; S=0x31c143e5; 
@property(retain) id autocapitalize;	// G=0x31c158ad; S=0x31c15981; converted property
@property(assign) BOOL autocorrect;	// G=0x31c15725; S=0x31c157e1; converted property
@property(assign) BOOL autofocus;	// G=0x31c147f1; S=0x31c14b21; 
@property(assign) int cols;	// G=0x31c1385d; S=0x31c1466d; 
@property(copy) NSString *defaultValue;	// G=0x31c13be1; S=0x31c13f65; 
@property(assign) BOOL disabled;	// G=0x31c14729; S=0x31c14a49; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x31c1409d; 
@property(assign) int maxLength;	// G=0x31c13889; S=0x31c14da9; converted property
@property(copy) NSString *name;	// G=0x31c13a35; S=0x31c14e75; 
@property(retain) id placeholder;	// G=0x31c14305; S=0x31c14529; converted property
@property(assign) BOOL readOnly;	// G=0x31c148b9; S=0x31c14bf9; 
@property(assign) BOOL required;	// G=0x31c14981; S=0x31c14cd1; converted property
@property(assign) int rows;	// G=0x31c13949; S=0x31c14fad; 
@property(assign) int selectionEnd;	// G=0x31c15465; S=0x31c15521; 
@property(assign) int selectionStart;	// G=0x31c152ed; S=0x31c153a9; 
@property(readonly, copy) NSString *type;	// G=0x31c13b09; 
@property(copy) NSString *value;	// G=0x31c13d2d; S=0x31c15069; 
@property(readonly, assign) BOOL willValidate;	// G=0x31c13975; 
- (int)_autocapitalizeType;	// 0x31be1589
- (BOOL)_isEdited;	// 0x31be1569
// declared property getter: - (id)accessKey;	// 0x31c14225
// converted property getter: - (id)autocapitalize;	// 0x31c158ad
// converted property getter: - (BOOL)autocorrect;	// 0x31c15725
// declared property getter: - (BOOL)autofocus;	// 0x31c147f1
- (BOOL)checkValidity;	// 0x31c15b71
// declared property getter: - (int)cols;	// 0x31c1385d
// declared property getter: - (id)defaultValue;	// 0x31c13be1
// declared property getter: - (BOOL)disabled;	// 0x31c14729
// declared property getter: - (id)form;	// 0x31c1409d
- (id)labels;	// 0x31c155dd
// converted property getter: - (int)maxLength;	// 0x31c13889
// declared property getter: - (id)name;	// 0x31c13a35
// converted property getter: - (id)placeholder;	// 0x31c14305
// declared property getter: - (BOOL)readOnly;	// 0x31c148b9
// converted property getter: - (BOOL)required;	// 0x31c14981
// declared property getter: - (int)rows;	// 0x31c13949
- (void)select;	// 0x31c15ab9
// declared property getter: - (int)selectionEnd;	// 0x31c15465
// declared property getter: - (int)selectionStart;	// 0x31c152ed
// declared property setter: - (void)setAccessKey:(id)key;	// 0x31c143e5
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x31c15981
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x31c157e1
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x31c14b21
// declared property setter: - (void)setCols:(int)cols;	// 0x31c1466d
- (void)setCustomValidity:(id)validity;	// 0x31c15c31
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x31c13f65
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31c14a49
// converted property setter: - (void)setMaxLength:(int)length;	// 0x31c14da9
// declared property setter: - (void)setName:(id)name;	// 0x31c14e75
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x31c14529
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x31c14bf9
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x31c14cd1
// declared property setter: - (void)setRows:(int)rows;	// 0x31c14fad
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x31c15521
- (void)setSelectionRange:(int)range end:(int)end;	// 0x31c15d69
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x31c153a9
// declared property setter: - (void)setValue:(id)value;	// 0x31c15069
- (int)structuralComplexityContribution;	// 0x31c285a5
- (unsigned)textLength;	// 0x31c13e7d
// declared property getter: - (id)type;	// 0x31c13b09
- (id)validationMessage;	// 0x31c151a1
- (id)validity;	// 0x31c14159
// declared property getter: - (id)value;	// 0x31c13d2d
// declared property getter: - (BOOL)willValidate;	// 0x31c13975
@end

