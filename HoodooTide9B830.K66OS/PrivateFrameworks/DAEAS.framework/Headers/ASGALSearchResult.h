/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSDictionary, NSArray, NSMutableArray, NSString;

@interface ASGALSearchResult : ASItem {
	NSDictionary *_applicationData;	// 40 = 0x28
	NSString *_longID;	// 44 = 0x2c
	NSMutableArray *_classes;	// 48 = 0x30
	NSMutableArray *_collectionIDs;	// 52 = 0x34
	NSString *_phone;	// 56 = 0x38
	NSString *_office;	// 60 = 0x3c
	NSString *_title;	// 64 = 0x40
	NSString *_company;	// 68 = 0x44
	NSString *_alias;	// 72 = 0x48
	NSString *_firstName;	// 76 = 0x4c
	NSString *_lastName;	// 80 = 0x50
	NSString *_homePhone;	// 84 = 0x54
	NSString *_mobilePhone;	// 88 = 0x58
	NSString *_emailAddress;	// 92 = 0x5c
}
@property(copy) NSString *alias;	// G=0x3186be75; S=0x3186be89; @synthesize=_alias
@property(retain) NSDictionary *applicationData;	// G=0x3186b175; S=0x3186b0f1; converted property
@property(retain) NSArray *classes;	// G=0x3186bd25; S=0x3186bd39; @synthesize=_classes
@property(retain) NSArray *collectionIDs;	// G=0x3186bd5d; S=0x3186bd71; @synthesize=_collectionIDs
@property(copy) NSString *company;	// G=0x3186be3d; S=0x3186be51; @synthesize=_company
@property(copy) NSString *emailAddress;	// G=0x3186bf8d; S=0x3186bfa1; @synthesize=_emailAddress
@property(copy) NSString *firstName;	// G=0x3186bead; S=0x3186bec1; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x3186bf1d; S=0x3186bf31; @synthesize=_homePhone
@property(copy) NSString *lastName;	// G=0x3186bee5; S=0x3186bef9; @synthesize=_lastName
@property(retain) NSString *longID;	// G=0x3186bced; S=0x3186bd01; @synthesize=_longID
@property(copy) NSString *mobilePhone;	// G=0x3186bf55; S=0x3186bf69; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x3186bdcd; S=0x3186bde1; @synthesize=_office
@property(copy) NSString *phone;	// G=0x3186bd95; S=0x3186bda9; @synthesize=_phone
@property(copy) NSString *title;	// G=0x3186be05; S=0x3186be19; @synthesize=_title
+ (BOOL)acceptsTopLevelLeaves;	// 0x3186ad95
+ (BOOL)frontingBasicTypes;	// 0x3186ae91
+ (BOOL)notifyOfUnknownTokens;	// 0x3186aee5
+ (BOOL)parsingLeafNode;	// 0x3186ade9
+ (BOOL)parsingWithSubItems;	// 0x3186ae3d
- (void)addClass:(id)aClass;	// 0x3186bc25
- (void)addCollectionID:(id)anId;	// 0x3186bc89
// declared property getter: - (id)alias;	// 0x3186be75
// converted property getter: - (id)applicationData;	// 0x3186b175
- (id)asParseRules;	// 0x3186b185
// declared property getter: - (id)classes;	// 0x3186bd25
// declared property getter: - (id)collectionIDs;	// 0x3186bd5d
// declared property getter: - (id)company;	// 0x3186be3d
- (id)convertToDAContactSearchResultElement;	// 0x3186b94d
- (void)dealloc;	// 0x3186af39
- (id)description;	// 0x3186b089
// declared property getter: - (id)emailAddress;	// 0x3186bf8d
// declared property getter: - (id)firstName;	// 0x3186bead
// declared property getter: - (id)homePhone;	// 0x3186bf1d
// declared property getter: - (id)lastName;	// 0x3186bee5
// declared property getter: - (id)longID;	// 0x3186bced
// declared property getter: - (id)mobilePhone;	// 0x3186bf55
// declared property getter: - (id)office;	// 0x3186bdcd
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3186b8c9
// declared property getter: - (id)phone;	// 0x3186bd95
- (void)postProcessApplicationData;	// 0x3186b429
// declared property setter: - (void)setAlias:(id)alias;	// 0x3186be89
// converted property setter: - (void)setApplicationData:(id)data;	// 0x3186b0f1
// declared property setter: - (void)setClasses:(id)classes;	// 0x3186bd39
// declared property setter: - (void)setCollectionIDs:(id)ids;	// 0x3186bd71
// declared property setter: - (void)setCompany:(id)company;	// 0x3186be51
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3186bfa1
// declared property setter: - (void)setFirstName:(id)name;	// 0x3186bec1
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x3186bf31
// declared property setter: - (void)setLastName:(id)name;	// 0x3186bef9
// declared property setter: - (void)setLongID:(id)anId;	// 0x3186bd01
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x3186bf69
// declared property setter: - (void)setOffice:(id)office;	// 0x3186bde1
// declared property setter: - (void)setPhone:(id)phone;	// 0x3186bda9
// declared property setter: - (void)setTitle:(id)title;	// 0x3186be19
// declared property getter: - (id)title;	// 0x3186be05
@end

