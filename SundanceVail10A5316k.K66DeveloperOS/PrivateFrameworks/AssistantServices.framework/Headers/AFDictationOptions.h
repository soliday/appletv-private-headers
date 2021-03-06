/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFDictationOptions : NSObject {
@private
	NSString *_applicationName;	// 4 = 0x4
	NSString *_applicationVersion;	// 8 = 0x8
	NSString *_fieldLabel;	// 12 = 0xc
	NSString *_fieldIdentifier;	// 16 = 0x10
	NSString *_interactionIdentifier;	// 20 = 0x14
	int _keyboardType;	// 24 = 0x18
	NSString *_prefixText;	// 28 = 0x1c
	NSString *_postfixText;	// 32 = 0x20
	NSString *_selectedText;	// 36 = 0x24
	int _returnKeyType;	// 40 = 0x28
}
@property(copy, nonatomic) NSString *applicationName;	// G=0x345b2081; S=0x345b2095; @synthesize=_applicationName
@property(copy, nonatomic) NSString *applicationVersion;	// G=0x345b20a5; S=0x345b20b9; @synthesize=_applicationVersion
@property(copy, nonatomic) NSString *fieldIdentifier;	// G=0x345b20ed; S=0x345b2101; @synthesize=_fieldIdentifier
@property(copy, nonatomic) NSString *fieldLabel;	// G=0x345b20c9; S=0x345b20dd; @synthesize=_fieldLabel
@property(copy, nonatomic) NSString *interactionIdentifier;	// G=0x345b2111; S=0x345b2125; @synthesize=_interactionIdentifier
@property(assign, nonatomic) int keyboardType;	// G=0x345b2135; S=0x345b2145; @synthesize=_keyboardType
@property(copy, nonatomic) NSString *postfixText;	// G=0x345b2179; S=0x345b218d; @synthesize=_postfixText
@property(copy, nonatomic) NSString *prefixText;	// G=0x345b2155; S=0x345b2169; @synthesize=_prefixText
@property(assign, nonatomic) int returnKeyType;	// G=0x345b21c1; S=0x345b21d1; @synthesize=_returnKeyType
@property(copy, nonatomic) NSString *selectedText;	// G=0x345b219d; S=0x345b21b1; @synthesize=_selectedText
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x345b1e39
- (void).cxx_destruct;	// 0x345b21e1
// declared property getter: - (id)applicationName;	// 0x345b2081
// declared property getter: - (id)applicationVersion;	// 0x345b20a5
- (id)dkPlistRepresentation;	// 0x345b1c0d
// declared property getter: - (id)fieldIdentifier;	// 0x345b20ed
// declared property getter: - (id)fieldLabel;	// 0x345b20c9
// declared property getter: - (id)interactionIdentifier;	// 0x345b2111
// declared property getter: - (int)keyboardType;	// 0x345b2135
// declared property getter: - (id)postfixText;	// 0x345b2179
// declared property getter: - (id)prefixText;	// 0x345b2155
// declared property getter: - (int)returnKeyType;	// 0x345b21c1
// declared property getter: - (id)selectedText;	// 0x345b219d
// declared property setter: - (void)setApplicationName:(id)name;	// 0x345b2095
// declared property setter: - (void)setApplicationVersion:(id)version;	// 0x345b20b9
// declared property setter: - (void)setFieldIdentifier:(id)identifier;	// 0x345b2101
// declared property setter: - (void)setFieldLabel:(id)label;	// 0x345b20dd
// declared property setter: - (void)setInteractionIdentifier:(id)identifier;	// 0x345b2125
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x345b2145
// declared property setter: - (void)setPostfixText:(id)text;	// 0x345b218d
// declared property setter: - (void)setPrefixText:(id)text;	// 0x345b2169
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x345b21d1
// declared property setter: - (void)setSelectedText:(id)text;	// 0x345b21b1
@end

