/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMFileList, NSURL, NSString;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteImageURL;	// G=0x3070fa61; 
@property(copy) NSString *accept;	// G=0x3070dee1; S=0x3070cd11; 
@property(copy) NSString *accessKey;	// G=0x3070dfc1; S=0x3070ce55; 
@property(copy) NSString *align;	// G=0x3070e0a1; S=0x3070cf99; 
@property(copy) NSString *alt;	// G=0x3070e181; S=0x3070d0dd; 
@property(readonly, copy) NSString *altDisplayString;	// G=0x3070f871; 
@property(retain) id autocapitalize;	// G=0x3070fedd; S=0x3070ffb1; converted property
@property(assign) BOOL autocorrect;	// G=0x3070fd55; S=0x3070fe11; converted property
@property(assign) BOOL autofocus;	// G=0x3070bac5; S=0x3070c05d; 
@property(assign) BOOL checked;	// G=0x3070b111; S=0x3070e94d; 
@property(assign) BOOL defaultChecked;	// G=0x3070b935; S=0x3070bead; 
@property(copy) NSString *defaultValue;	// G=0x3070b561; S=0x3070b7fd; 
@property(assign) BOOL disabled;	// G=0x3070b145; S=0x3070b205; 
@property(readonly, retain) DOMFileList *files;	// G=0x3070fb49; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x3070c495; 
@property(retain) id formAction;	// G=0x3070c551; S=0x3070c801; converted property
@property(retain) id formEnctype;	// G=0x3070dc41; S=0x3070c945; converted property
@property(retain) id formMethod;	// G=0x3070dd21; S=0x3070ca89; converted property
@property(assign) BOOL formNoValidate;	// G=0x3070b9fd; S=0x3070bf85; converted property
@property(retain) id formTarget;	// G=0x3070de01; S=0x3070cbcd; converted property
@property(assign) BOOL incremental;	// G=0x3070bde5; S=0x3070c3bd; converted property
@property(assign) BOOL indeterminate;	// G=0x3070b455; S=0x3070f4b5; 
@property(retain) id max;	// G=0x3070e261; S=0x3070d221; converted property
@property(assign) int maxLength;	// G=0x3070b2d5; S=0x3070ea1d; 
@property(retain) id min;	// G=0x3070e341; S=0x3070d365; converted property
@property(assign) BOOL multiple;	// G=0x3070bb8d; S=0x3070c135; 
@property(copy) NSString *name;	// G=0x3070e421; S=0x3070d4a9; 
@property(retain) id pattern;	// G=0x3070e501; S=0x3070d5ed; converted property
@property(retain) id placeholder;	// G=0x3070e5e1; S=0x3070d731; converted property
@property(assign) BOOL readOnly;	// G=0x3070bc55; S=0x3070c20d; 
@property(assign) BOOL required;	// G=0x3070bd1d; S=0x3070c2e5; converted property
@property(assign) int selectionEnd;	// G=0x3070f6f9; S=0x3070f7b5; 
@property(assign) int selectionStart;	// G=0x3070f581; S=0x3070f63d; 
@property(copy) NSString *size;	// G=0x3070eae9; S=0x3070ec41; 
@property(copy) NSString *src;	// G=0x3070c6a9; S=0x3070d875; 
@property(retain) id step;	// G=0x3070e6c1; S=0x3070d9b9; converted property
@property(copy) NSString *type;	// G=0x3070b489; S=0x3070ed8d; 
@property(copy) NSString *useMap;	// G=0x3070e7a1; S=0x3070dafd; 
@property(copy) NSString *value;	// G=0x3070b6ad; S=0x3070eec5; 
@property(assign) double valueAsDate;	// G=0x3070effd; S=0x3070f0dd; converted property
@property(assign) double valueAsNumber;	// G=0x3070f1d1; S=0x3070f291; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x3070b395; 
- (int)_autocapitalizeType;	// 0x306f3579
- (BOOL)_isAutofilled;	// 0x306f32dd
- (BOOL)_isEdited;	// 0x306f3559
- (BOOL)_isTextField;	// 0x306f32ed
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x306f32fd
- (NSRange)_selectedRange;	// 0x306f34b9
- (void)_setAutofilled:(BOOL)autofilled;	// 0x306f34e9
// declared property getter: - (id)absoluteImageURL;	// 0x3070fa61
// declared property getter: - (id)accept;	// 0x3070dee1
// declared property getter: - (id)accessKey;	// 0x3070dfc1
// declared property getter: - (id)align;	// 0x3070e0a1
// declared property getter: - (id)alt;	// 0x3070e181
// declared property getter: - (id)altDisplayString;	// 0x3070f871
// converted property getter: - (id)autocapitalize;	// 0x3070fedd
// converted property getter: - (BOOL)autocorrect;	// 0x3070fd55
// declared property getter: - (BOOL)autofocus;	// 0x3070bac5
- (BOOL)checkValidity;	// 0x30710281
// declared property getter: - (BOOL)checked;	// 0x3070b111
- (void)click;	// 0x30710531
// declared property getter: - (BOOL)defaultChecked;	// 0x3070b935
// declared property getter: - (id)defaultValue;	// 0x3070b561
// declared property getter: - (BOOL)disabled;	// 0x3070b145
// declared property getter: - (id)files;	// 0x3070fb49
// declared property getter: - (id)form;	// 0x3070c495
// converted property getter: - (id)formAction;	// 0x3070c551
// converted property getter: - (id)formEnctype;	// 0x3070dc41
// converted property getter: - (id)formMethod;	// 0x3070dd21
// converted property getter: - (BOOL)formNoValidate;	// 0x3070b9fd
// converted property getter: - (id)formTarget;	// 0x3070de01
// converted property getter: - (BOOL)incremental;	// 0x3070bde5
// declared property getter: - (BOOL)indeterminate;	// 0x3070b455
- (id)labels;	// 0x3070fc0d
// converted property getter: - (id)max;	// 0x3070e261
// declared property getter: - (int)maxLength;	// 0x3070b2d5
// converted property getter: - (id)min;	// 0x3070e341
// declared property getter: - (BOOL)multiple;	// 0x3070bb8d
// declared property getter: - (id)name;	// 0x3070e421
// converted property getter: - (id)pattern;	// 0x3070e501
// converted property getter: - (id)placeholder;	// 0x3070e5e1
// declared property getter: - (BOOL)readOnly;	// 0x3070bc55
// converted property getter: - (BOOL)required;	// 0x3070bd1d
- (void)select;	// 0x30710479
// declared property getter: - (int)selectionEnd;	// 0x3070f6f9
// declared property getter: - (int)selectionStart;	// 0x3070f581
// declared property setter: - (void)setAccept:(id)accept;	// 0x3070cd11
// declared property setter: - (void)setAccessKey:(id)key;	// 0x3070ce55
// declared property setter: - (void)setAlign:(id)align;	// 0x3070cf99
// declared property setter: - (void)setAlt:(id)alt;	// 0x3070d0dd
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x3070ffb1
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x3070fe11
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x3070c05d
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x3070e94d
- (void)setCustomValidity:(id)validity;	// 0x30710341
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x3070bead
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x3070b7fd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3070b205
// converted property setter: - (void)setFormAction:(id)action;	// 0x3070c801
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x3070c945
// converted property setter: - (void)setFormMethod:(id)method;	// 0x3070ca89
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x3070bf85
// converted property setter: - (void)setFormTarget:(id)target;	// 0x3070cbcd
// converted property setter: - (void)setIncremental:(BOOL)incremental;	// 0x3070c3bd
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x3070f4b5
// converted property setter: - (void)setMax:(id)max;	// 0x3070d221
// declared property setter: - (void)setMaxLength:(int)length;	// 0x3070ea1d
// converted property setter: - (void)setMin:(id)min;	// 0x3070d365
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x3070c135
// declared property setter: - (void)setName:(id)name;	// 0x3070d4a9
// converted property setter: - (void)setPattern:(id)pattern;	// 0x3070d5ed
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3070d731
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x3070c20d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x3070c2e5
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x3070f7b5
- (void)setSelectionRange:(int)range end:(int)end;	// 0x30710721
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x3070f63d
// declared property setter: - (void)setSize:(id)size;	// 0x3070ec41
// declared property setter: - (void)setSrc:(id)src;	// 0x3070d875
// converted property setter: - (void)setStep:(id)step;	// 0x3070d9b9
// declared property setter: - (void)setType:(id)type;	// 0x3070ed8d
// declared property setter: - (void)setUseMap:(id)map;	// 0x3070dafd
// declared property setter: - (void)setValue:(id)value;	// 0x3070eec5
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x3070f0dd
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x3070f291
- (void)setValueForUser:(id)user;	// 0x307105e9
// declared property getter: - (id)size;	// 0x3070eae9
// declared property getter: - (id)src;	// 0x3070c6a9
// converted property getter: - (id)step;	// 0x3070e6c1
- (void)stepDown:(int)down;	// 0x307101b5
- (void)stepUp:(int)up;	// 0x307100e9
- (int)structuralComplexityContribution;	// 0x3073a5ad
// declared property getter: - (id)type;	// 0x3070b489
// declared property getter: - (id)useMap;	// 0x3070e7a1
- (id)validationMessage;	// 0x3070f369
- (id)validity;	// 0x3070e881
// declared property getter: - (id)value;	// 0x3070b6ad
// converted property getter: - (double)valueAsDate;	// 0x3070effd
// converted property getter: - (double)valueAsNumber;	// 0x3070f1d1
// declared property getter: - (BOOL)willValidate;	// 0x3070b395
@end

