/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEONameInfo : PBCodable {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_phoneticName;	// 8 = 0x8
	int _phoneticType;	// 12 = 0xc
	NSString *_shield;	// 16 = 0x10
	int _shieldType;	// 20 = 0x14
	int _signType;	// 24 = 0x18
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x34b534bd; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x34b534d5; 
@property(assign, nonatomic) BOOL hasPhoneticType;	// G=0x34b535a5; S=0x34b53589; 
@property(readonly, assign, nonatomic) BOOL hasShield;	// G=0x34b534ed; 
@property(assign, nonatomic) BOOL hasShieldType;	// G=0x34b5354d; S=0x34b5352d; 
@property(assign, nonatomic) BOOL hasSignType;	// G=0x34b53601; S=0x34b535e1; 
@property(retain, nonatomic) NSString *name;	// G=0x34b540f9; S=0x34b54109; @synthesize=_name
@property(retain, nonatomic) NSString *phoneticName;	// G=0x34b54119; S=0x34b54129; @synthesize=_phoneticName
@property(assign, nonatomic) int phoneticType;	// G=0x34b54169; S=0x34b53561; @synthesize=_phoneticType
@property(retain, nonatomic) NSString *shield;	// G=0x34b54139; S=0x34b54149; @synthesize=_shield
@property(assign, nonatomic) int shieldType;	// G=0x34b54159; S=0x34b53505; @synthesize=_shieldType
@property(assign, nonatomic) int signType;	// G=0x34b54179; S=0x34b535b9; @synthesize=_signType
- (void)copyTo:(id)to;	// 0x34b53d19
- (void)dealloc;	// 0x34b53451
- (id)description;	// 0x34b53615
- (id)dictionaryRepresentation;	// 0x34b53685
// declared property getter: - (BOOL)hasName;	// 0x34b534bd
// declared property getter: - (BOOL)hasPhoneticName;	// 0x34b534d5
// declared property getter: - (BOOL)hasPhoneticType;	// 0x34b535a5
// declared property getter: - (BOOL)hasShield;	// 0x34b534ed
// declared property getter: - (BOOL)hasShieldType;	// 0x34b5354d
// declared property getter: - (BOOL)hasSignType;	// 0x34b53601
- (unsigned)hash;	// 0x34b54005
- (BOOL)isEqual:(id)equal;	// 0x34b53e9d
// declared property getter: - (id)name;	// 0x34b540f9
// declared property getter: - (id)phoneticName;	// 0x34b54119
// declared property getter: - (int)phoneticType;	// 0x34b54169
- (BOOL)readFrom:(id)from;	// 0x34b53c05
// declared property setter: - (void)setHasPhoneticType:(BOOL)type;	// 0x34b53589
// declared property setter: - (void)setHasShieldType:(BOOL)type;	// 0x34b5352d
// declared property setter: - (void)setHasSignType:(BOOL)type;	// 0x34b535e1
// declared property setter: - (void)setName:(id)name;	// 0x34b54109
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x34b54129
// declared property setter: - (void)setPhoneticType:(int)type;	// 0x34b53561
// declared property setter: - (void)setShield:(id)shield;	// 0x34b54149
// declared property setter: - (void)setShieldType:(int)type;	// 0x34b53505
// declared property setter: - (void)setSignType:(int)type;	// 0x34b535b9
// declared property getter: - (id)shield;	// 0x34b54139
// declared property getter: - (int)shieldType;	// 0x34b54159
// declared property getter: - (int)signType;	// 0x34b54179
- (void)writeTo:(id)to;	// 0x34b53c11
@end

