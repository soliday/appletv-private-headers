/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, OCPPackageProperties, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackage : NSObject {
@private
	OCPPackageRelationshipCollection *mRelationships;	// 4 = 0x4
	OCPPackageProperties *mProperties;	// 8 = 0x8
	NSMutableDictionary *mDefaultContentTypes;	// 12 = 0xc
	NSMutableDictionary *mContentTypeOverrides;	// 16 = 0x10
}
- (id)init;	// 0x312674b5
- (id)initWithRelationshipsXml:(xmlDoc *)relationshipsXml propertiesXml:(xmlDoc *)xml contentTypesXml:(xmlDoc *)xml3;	// 0x310d756d
- (id)contentTypeForPartLocation:(id)partLocation;	// 0x310ee7e5
- (void)dealloc;	// 0x3110aa95
- (id)partForLocation:(id)location;	// 0x312674cd
- (id)properties;	// 0x310fb0a9
- (void)readContentTypeOverrideFromElement:(xmlNode *)element;	// 0x310d85bd
- (void)readContentTypesXml:(xmlDoc *)xml;	// 0x310d8479
- (void)readDefaultContentTypeFromElement:(xmlNode *)element;	// 0x310d8801
- (id)relationshipForIdentifier:(id)identifier;	// 0x312674d1
- (id)relationshipsByType:(id)type;	// 0x312674f1
@end
