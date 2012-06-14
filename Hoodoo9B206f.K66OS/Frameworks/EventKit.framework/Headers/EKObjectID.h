/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface EKObjectID : NSObject <NSCopying, NSCoding> {
@private
	BOOL _temporary;	// 4 = 0x4
	int _entityType;	// 8 = 0x8
	int _rowID;	// 12 = 0xc
}
@property(readonly, assign) int entityType;	// G=0x31f3e045; converted property
@property(readonly, assign) int rowID;	// G=0x31efdf3d; converted property
@property(readonly, assign, getter=isTemporary) BOOL temporary;	// G=0x31ee52b9; converted property
+ (id)objectIDWithCADObjectID:(XXStruct_K5nmsA)cadobjectID;	// 0x31ee415d
+ (id)objectIDWithEntityType:(int)entityType rowID:(int)anId;	// 0x31ee9969
+ (id)objectIDWithURL:(id)url;	// 0x31f3dd41
+ (id)temporaryObjectIDWithEntityType:(int)entityType;	// 0x31ef3ce5
- (id)initWithCoder:(id)coder;	// 0x31efd9e9
- (id)initWithEntityType:(int)entityType rowID:(int)anId temporary:(BOOL)temporary;	// 0x31ee41ad
- (XXStruct_K5nmsA)CADObjectID;	// 0x31ee52c9
- (id)URIRepresentation;	// 0x31f3e0f5
- (id)copyWithZone:(NSZone *)zone;	// 0x31ee49cd
- (id)description;	// 0x31f3e055
- (void)encodeWithCoder:(id)coder;	// 0x31eea0d1
- (id)entityName;	// 0x31ee44a1
// converted property getter: - (int)entityType;	// 0x31f3e045
- (unsigned)hash;	// 0x31ee433d
- (BOOL)isEqual:(id)equal;	// 0x31ee4cd9
// converted property getter: - (BOOL)isTemporary;	// 0x31ee52b9
// converted property getter: - (int)rowID;	// 0x31efdf3d
- (id)stringRepresentation;	// 0x31f3e065
@end

