/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class OCPPackageRelationshipCollection, NSURL, OCPPackage;

__attribute__((visibility("hidden")))
@interface OCPPackagePart : NSObject {
@private
	NSURL *mLocation;	// 4 = 0x4
	OCPPackageRelationshipCollection *mRelationships;	// 8 = 0x8
	OCPPackage *mPackage;	// 12 = 0xc
	xmlDoc *mDocument;	// 16 = 0x10
}
- (id)initWithLocation:(id)location relationshipsXml:(xmlDoc *)xml package:(id)package;	// 0x345071c5
- (id)contentType;	// 0x3451e2e5
- (void)copyToFile:(id)file;	// 0x345f3b9d
- (id)data;	// 0x345f3b99
- (void)dealloc;	// 0x3451dbc1
- (id)firstPartWithRelationshipOfType:(id)type;	// 0x34507309
- (id)location;	// 0x34513779
- (id)package;	// 0x34513769
- (id)relationshipForIdentifier:(id)identifier;	// 0x345132d9
- (id)relationshipsByType:(id)type;	// 0x34507379
- (xmlDoc *)xmlDocument;	// 0x345f3ba1
- (xmlTextReader *)xmlReader;	// 0x345f3ba5
@end
