/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString;

@interface UIKeyboardInputMode : UITextInputMode {
@private
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x35380b85; S=0x353805d1; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x35332f35; S=0x353803c1; @synthesize
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x35380935; S=0x3538050d; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x35380b75; S=0x35380559; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x353803e5
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x3538057d
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x35380241
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x35380531
- (id)initWithIdentifier:(id)identifier;	// 0x353802f5
- (void)dealloc;	// 0x35675191
// declared property getter: - (id)hardwareLayout;	// 0x35380b85
// declared property getter: - (id)identifier;	// 0x35332f35
// declared property getter: - (id)primaryLanguage;	// 0x35380935
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x353805d1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353803c1
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x3538050d
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x35380559
// declared property getter: - (id)softwareLayout;	// 0x35380b75
@end

