/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationshipCollection : NSObject {
@private
	NSMutableDictionary *mIdentifierMap;	// 4 = 0x4
	NSMutableDictionary *mTypeMap;	// 8 = 0x8
}
- (id)initWithRelationshipsXml:(xmlDoc *)relationshipsXml baseLocation:(id)location;	// 0x344f8dc5
- (void)dealloc;	// 0x34514795
- (id)relationshipForIdentifier:(id)identifier;	// 0x34508a79
- (id)relationshipsByType:(id)type;	// 0x344fb33d
@end

