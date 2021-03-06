/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface PSSpecifier : NSObject {
	id target;	// 4 = 0x4
	SEL getter;	// 8 = 0x8
	SEL setter;	// 12 = 0xc
	SEL action;	// 16 = 0x10
	SEL cancel;	// 20 = 0x14
	Class detailControllerClass;	// 24 = 0x18
	int cellType;	// 28 = 0x1c
	Class editPaneClass;	// 32 = 0x20
	int keyboardType;	// 36 = 0x24
	int autoCapsType;	// 40 = 0x28
	int autoCorrectionType;	// 44 = 0x2c
	int textFieldType;	// 48 = 0x30
	NSString *_name;	// 52 = 0x34
	NSArray *_values;	// 56 = 0x38
	NSDictionary *_titleDict;	// 60 = 0x3c
	NSDictionary *_shortTitleDict;	// 64 = 0x40
	id _userInfo;	// 68 = 0x44
	NSMutableDictionary *_properties;	// 72 = 0x48
@private
	SEL _confirmationAction;	// 76 = 0x4c
	SEL _confirmationCancelAction;	// 80 = 0x50
	SEL _buttonAction;	// 84 = 0x54
	SEL _controllerLoadAction;	// 88 = 0x58
}
@property(assign, nonatomic) SEL buttonAction;	// G=0x3729edbd; S=0x3729edcd; @synthesize=_buttonAction
@property(assign, nonatomic) int cellType;	// G=0x3729ecad; S=0x3729ecbd; @synthesize
@property(assign, nonatomic) SEL confirmationAction;	// G=0x3729ed7d; S=0x3729ed8d; @synthesize=_confirmationAction
@property(assign, nonatomic) SEL confirmationCancelAction;	// G=0x3729ed9d; S=0x3729edad; @synthesize=_confirmationCancelAction
@property(assign, nonatomic) SEL controllerLoadAction;	// G=0x3729eddd; S=0x3729eded; @synthesize=_controllerLoadAction
@property(assign, nonatomic) Class detailControllerClass;	// G=0x3729ec8d; S=0x3729ec9d; @synthesize
@property(assign, nonatomic) Class editPaneClass;	// G=0x3729eccd; S=0x3729ecdd; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x3729eb65; S=0x3729eb49; 
@property(retain, nonatomic) NSString *name;	// G=0x3729ed5d; S=0x3729ed6d; @synthesize=_name
@property(retain) NSMutableDictionary *properties;	// G=0x3729e325; S=0x3729e2e9; converted property
@property(retain, nonatomic) NSDictionary *shortTitleDictionary;	// G=0x3729eb25; S=0x3729ed2d; @synthesize=_shortTitleDict
@property(assign, nonatomic) id target;	// G=0x3729ec6d; S=0x3729ec7d; @synthesize
@property(retain, nonatomic) NSDictionary *titleDictionary;	// G=0x3729ed0d; S=0x3729ed1d; @synthesize=_titleDict
@property(retain, nonatomic) id userInfo;	// G=0x3729eced; S=0x3729ecfd; @synthesize=_userInfo
@property(retain, nonatomic) NSArray *values;	// G=0x3729ed3d; S=0x3729ed4d; @synthesize=_values
+ (int)autoCapsTypeForString:(id)string;	// 0x3729ea69
+ (int)autoCorrectionTypeForNumber:(id)number;	// 0x3729ea3d
+ (id)emptyGroupSpecifier;	// 0x3729e26d
+ (id)groupSpecifierWithName:(id)name;	// 0x3729e239
+ (int)keyboardTypeForString:(id)string;	// 0x3729ead5
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;	// 0x3729e179
- (id)init;	// 0x3729e0ed
// declared property getter: - (SEL)buttonAction;	// 0x3729edbd
// declared property getter: - (int)cellType;	// 0x3729ecad
// declared property getter: - (SEL)confirmationAction;	// 0x3729ed7d
// declared property getter: - (SEL)confirmationCancelAction;	// 0x3729ed9d
// declared property getter: - (SEL)controllerLoadAction;	// 0x3729eddd
- (void)dealloc;	// 0x3729e8b1
- (id)description;	// 0x3729e965
// declared property getter: - (Class)detailControllerClass;	// 0x3729ec8d
// declared property getter: - (Class)editPaneClass;	// 0x3729eccd
// declared property getter: - (id)identifier;	// 0x3729eb65
- (void)loadValuesAndTitlesFromDataSource;	// 0x3729e335
// declared property getter: - (id)name;	// 0x3729ed5d
// converted property getter: - (id)properties;	// 0x3729e325
- (id)propertyForKey:(id)key;	// 0x3729e281
- (void)removePropertyForKey:(id)key;	// 0x3729e2c9
// declared property setter: - (void)setButtonAction:(SEL)action;	// 0x3729edcd
// declared property setter: - (void)setCellType:(int)type;	// 0x3729ecbd
// declared property setter: - (void)setConfirmationAction:(SEL)action;	// 0x3729ed8d
// declared property setter: - (void)setConfirmationCancelAction:(SEL)action;	// 0x3729edad
// declared property setter: - (void)setControllerLoadAction:(SEL)action;	// 0x3729eded
// declared property setter: - (void)setDetailControllerClass:(Class)aClass;	// 0x3729ec9d
// declared property setter: - (void)setEditPaneClass:(Class)aClass;	// 0x3729ecdd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3729eb49
- (void)setKeyboardType:(int)type autoCaps:(int)caps autoCorrection:(int)correction;	// 0x3729ebe9
// declared property setter: - (void)setName:(id)name;	// 0x3729ed6d
// converted property setter: - (void)setProperties:(id)properties;	// 0x3729e2e9
- (void)setProperty:(id)property forKey:(id)key;	// 0x3729e2a1
// declared property setter: - (void)setShortTitleDictionary:(id)dictionary;	// 0x3729ed2d
// declared property setter: - (void)setTarget:(id)target;	// 0x3729ec7d
// declared property setter: - (void)setTitleDictionary:(id)dictionary;	// 0x3729ed1d
// declared property setter: - (void)setUserInfo:(id)info;	// 0x3729ecfd
// declared property setter: - (void)setValues:(id)values;	// 0x3729ed4d
- (void)setValues:(id)values titles:(id)titles;	// 0x3729e3f9
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3;	// 0x3729e41d
- (void)setupIconImageWithBundle:(id)bundle;	// 0x3729e56d
- (void)setupIconImageWithPath:(id)path;	// 0x3729e66d
// declared property getter: - (id)shortTitleDictionary;	// 0x3729eb25
// declared property getter: - (id)target;	// 0x3729ec6d
- (int)titleCompare:(id)compare;	// 0x3729ec31
// declared property getter: - (id)titleDictionary;	// 0x3729ed0d
// declared property getter: - (id)userInfo;	// 0x3729eced
// declared property getter: - (id)values;	// 0x3729ed3d
@end

