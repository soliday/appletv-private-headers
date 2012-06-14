/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSData, NSArray;

@interface DAContactSearchResultElement : NSObject <NSCoding> {
	NSString *_displayName;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_workPhone;	// 20 = 0x14
	NSString *_mobilePhone;	// 24 = 0x18
	NSString *_company;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_homePhone;	// 36 = 0x24
	NSString *_alias;	// 40 = 0x28
	NSString *_office;	// 44 = 0x2c
	NSString *_serverSource;	// 48 = 0x30
	NSString *_recordName;	// 52 = 0x34
	NSString *_faxPhone;	// 56 = 0x38
	NSString *_department;	// 60 = 0x3c
	NSString *_street;	// 64 = 0x40
	NSString *_city;	// 68 = 0x44
	NSString *_state;	// 72 = 0x48
	NSString *_zip;	// 76 = 0x4c
	NSString *_country;	// 80 = 0x50
	NSData *_jpegPhoto;	// 84 = 0x54
	NSString *_imAddress;	// 88 = 0x58
	NSString *_uri;	// 92 = 0x5c
	NSString *_buildingName;	// 96 = 0x60
	NSString *_appleFloor;	// 100 = 0x64
	NSString *_pagerNumber;	// 104 = 0x68
	NSString *_postalAddress;	// 108 = 0x6c
	NSString *_homePostalAddress;	// 112 = 0x70
	NSString *_principalPath;	// 116 = 0x74
	NSString *_preferredUserAddress;	// 120 = 0x78
	NSArray *_cuAddresses;	// 124 = 0x7c
	NSString *_iPhone;	// 128 = 0x80
	NSString *_mainPhone;	// 132 = 0x84
	NSString *_workFaxPhone;	// 136 = 0x88
	NSString *_identifierOnServer;	// 140 = 0x8c
}
@property(copy) NSString *alias;	// G=0x35f62729; S=0x35f6273d; @synthesize=_alias
@property(copy) NSString *appleFloor;	// G=0x35f62aa9; S=0x35f62abd; @synthesize=_appleFloor
@property(copy) NSString *buildingName;	// G=0x35f62a71; S=0x35f62a85; @synthesize=_buildingName
@property(copy) NSString *city;	// G=0x35f628e9; S=0x35f628fd; @synthesize=_city
@property(copy) NSString *company;	// G=0x35f626b9; S=0x35f626cd; @synthesize=_company
@property(copy) NSString *country;	// G=0x35f62991; S=0x35f629a5; @synthesize=_country
@property(copy) NSArray *cuAddresses;	// G=0x35f62bf9; S=0x35f62c0d; @synthesize=_cuAddresses
@property(copy) NSString *department;	// G=0x35f62879; S=0x35f6288d; @synthesize=_department
@property(copy) NSString *displayName;	// G=0x35f62569; S=0x35f6257d; @synthesize=_displayName
@property(copy) NSString *emailAddress;	// G=0x35f62611; S=0x35f62625; @synthesize=_emailAddress
@property(copy) NSString *faxPhone;	// G=0x35f62841; S=0x35f62855; @synthesize=_faxPhone
@property(copy) NSString *firstName;	// G=0x35f625a1; S=0x35f625b5; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x35f62761; S=0x35f62775; @synthesize=_homePhone
@property(copy) NSString *homePostalAddress;	// G=0x35f62b51; S=0x35f62b65; @synthesize=_homePostalAddress
@property(copy) NSString *iPhone;	// G=0x35f62c31; S=0x35f62c45; @synthesize=_iPhone
@property(retain) NSString *identifierOnServer;	// G=0x35f62cd9; S=0x35f62ced; @synthesize=_identifierOnServer
@property(copy) NSString *imAddress;	// G=0x35f62a01; S=0x35f62a15; @synthesize=_imAddress
@property(copy) NSData *jpegPhoto;	// G=0x35f629c9; S=0x35f629dd; @synthesize=_jpegPhoto
@property(copy) NSString *lastName;	// G=0x35f625d9; S=0x35f625ed; @synthesize=_lastName
@property(copy) NSString *mainPhone;	// G=0x35f62c69; S=0x35f62c7d; @synthesize=_mainPhone
@property(copy) NSString *mobilePhone;	// G=0x35f62681; S=0x35f62695; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x35f62799; S=0x35f627ad; @synthesize=_office
@property(copy) NSString *pagerNumber;	// G=0x35f62ae1; S=0x35f62af5; @synthesize=_pagerNumber
@property(copy) NSString *postalAddress;	// G=0x35f62b19; S=0x35f62b2d; @synthesize=_postalAddress
@property(copy) NSString *preferredUserAddress;	// G=0x35f62bc1; S=0x35f62bd5; @synthesize=_preferredUserAddress
@property(copy) NSString *principalPath;	// G=0x35f62b89; S=0x35f62b9d; @synthesize=_principalPath
@property(copy) NSString *recordName;	// G=0x35f62809; S=0x35f6281d; @synthesize=_recordName
@property(copy) NSString *serverSource;	// G=0x35f627d1; S=0x35f627e5; @synthesize=_serverSource
@property(copy) NSString *state;	// G=0x35f62921; S=0x35f62935; @synthesize=_state
@property(copy) NSString *street;	// G=0x35f628b1; S=0x35f628c5; @synthesize=_street
@property(copy) NSString *title;	// G=0x35f626f1; S=0x35f62705; @synthesize=_title
@property(copy) NSString *uri;	// G=0x35f62a39; S=0x35f62a4d; @synthesize=_uri
@property(copy) NSString *workFaxPhone;	// G=0x35f62ca1; S=0x35f62cb5; @synthesize=_workFaxPhone
@property(copy) NSString *workPhone;	// G=0x35f62649; S=0x35f6265d; @synthesize=_workPhone
@property(copy) NSString *zip;	// G=0x35f62959; S=0x35f6296d; @synthesize=_zip
- (id)initWithCoder:(id)coder;	// 0x35f61ff5
// declared property getter: - (id)alias;	// 0x35f62729
// declared property getter: - (id)appleFloor;	// 0x35f62aa9
// declared property getter: - (id)buildingName;	// 0x35f62a71
// declared property getter: - (id)city;	// 0x35f628e9
// declared property getter: - (id)company;	// 0x35f626b9
// declared property getter: - (id)country;	// 0x35f62991
// declared property getter: - (id)cuAddresses;	// 0x35f62bf9
- (void)dealloc;	// 0x35f60dd9
// declared property getter: - (id)department;	// 0x35f62879
- (id)description;	// 0x35f610cd
// declared property getter: - (id)displayName;	// 0x35f62569
// declared property getter: - (id)emailAddress;	// 0x35f62611
- (void)encodeWithCoder:(id)coder;	// 0x35f61aad
// declared property getter: - (id)faxPhone;	// 0x35f62841
// declared property getter: - (id)firstName;	// 0x35f625a1
// declared property getter: - (id)homePhone;	// 0x35f62761
// declared property getter: - (id)homePostalAddress;	// 0x35f62b51
// declared property getter: - (id)iPhone;	// 0x35f62c31
// declared property getter: - (id)identifierOnServer;	// 0x35f62cd9
// declared property getter: - (id)imAddress;	// 0x35f62a01
- (BOOL)isEqual:(id)equal;	// 0x35f61a51
- (BOOL)isEqualToDAContactSearchResultElement:(id)dacontactSearchResultElement;	// 0x35f61179
// declared property getter: - (id)jpegPhoto;	// 0x35f629c9
// declared property getter: - (id)lastName;	// 0x35f625d9
// declared property getter: - (id)mainPhone;	// 0x35f62c69
// declared property getter: - (id)mobilePhone;	// 0x35f62681
// declared property getter: - (id)office;	// 0x35f62799
// declared property getter: - (id)pagerNumber;	// 0x35f62ae1
// declared property getter: - (id)postalAddress;	// 0x35f62b19
// declared property getter: - (id)preferredUserAddress;	// 0x35f62bc1
// declared property getter: - (id)principalPath;	// 0x35f62b89
// declared property getter: - (id)recordName;	// 0x35f62809
// declared property getter: - (id)serverSource;	// 0x35f627d1
// declared property setter: - (void)setAlias:(id)alias;	// 0x35f6273d
// declared property setter: - (void)setAppleFloor:(id)floor;	// 0x35f62abd
// declared property setter: - (void)setBuildingName:(id)name;	// 0x35f62a85
// declared property setter: - (void)setCity:(id)city;	// 0x35f628fd
// declared property setter: - (void)setCompany:(id)company;	// 0x35f626cd
// declared property setter: - (void)setCountry:(id)country;	// 0x35f629a5
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x35f62c0d
// declared property setter: - (void)setDepartment:(id)department;	// 0x35f6288d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x35f6257d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x35f62625
// declared property setter: - (void)setFaxPhone:(id)phone;	// 0x35f62855
// declared property setter: - (void)setFirstName:(id)name;	// 0x35f625b5
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x35f62775
// declared property setter: - (void)setHomePostalAddress:(id)address;	// 0x35f62b65
// declared property setter: - (void)setIPhone:(id)phone;	// 0x35f62c45
// declared property setter: - (void)setIdentifierOnServer:(id)server;	// 0x35f62ced
// declared property setter: - (void)setImAddress:(id)address;	// 0x35f62a15
// declared property setter: - (void)setJpegPhoto:(id)photo;	// 0x35f629dd
// declared property setter: - (void)setLastName:(id)name;	// 0x35f625ed
// declared property setter: - (void)setMainPhone:(id)phone;	// 0x35f62c7d
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x35f62695
// declared property setter: - (void)setOffice:(id)office;	// 0x35f627ad
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x35f62af5
// declared property setter: - (void)setPostalAddress:(id)address;	// 0x35f62b2d
// declared property setter: - (void)setPreferredUserAddress:(id)address;	// 0x35f62bd5
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x35f62b9d
// declared property setter: - (void)setRecordName:(id)name;	// 0x35f6281d
// declared property setter: - (void)setServerSource:(id)source;	// 0x35f627e5
// declared property setter: - (void)setState:(id)state;	// 0x35f62935
// declared property setter: - (void)setStreet:(id)street;	// 0x35f628c5
// declared property setter: - (void)setTitle:(id)title;	// 0x35f62705
// declared property setter: - (void)setUri:(id)uri;	// 0x35f62a4d
// declared property setter: - (void)setWorkFaxPhone:(id)phone;	// 0x35f62cb5
// declared property setter: - (void)setWorkPhone:(id)phone;	// 0x35f6265d
// declared property setter: - (void)setZip:(id)zip;	// 0x35f6296d
// declared property getter: - (id)state;	// 0x35f62921
// declared property getter: - (id)street;	// 0x35f628b1
// declared property getter: - (id)title;	// 0x35f626f1
// declared property getter: - (id)uri;	// 0x35f62a39
// declared property getter: - (id)workFaxPhone;	// 0x35f62ca1
// declared property getter: - (id)workPhone;	// 0x35f62649
// declared property getter: - (id)zip;	// 0x35f62959
@end

