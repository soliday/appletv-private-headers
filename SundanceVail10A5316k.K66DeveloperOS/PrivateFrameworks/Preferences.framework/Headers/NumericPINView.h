/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PINView.h"

@class UIPasscodeField;

@interface NumericPINView : PINView {
	UIPasscodeField *_passcodeField;	// 108 = 0x6c
}
@property(retain) id stringValue;	// G=0x372af15d; S=0x372af17d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x372aebf5
- (void)appendString:(id)string;	// 0x372af1bd
- (void)deleteLastCharacter;	// 0x372af19d
- (void)hidePasscodeField:(BOOL)field;	// 0x372af04d
- (void)layoutSubviews;	// 0x372aee51
// converted property setter: - (void)setStringValue:(id)value;	// 0x372af17d
// converted property getter: - (id)stringValue;	// 0x372af15d
@end
