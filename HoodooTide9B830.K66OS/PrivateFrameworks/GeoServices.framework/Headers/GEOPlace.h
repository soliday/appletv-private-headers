/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOLatLng, NSMutableArray, GEOAddress, GEOMapRegion, NSString;

@interface GEOPlace : PBCodable {
	BOOL _hasUID;	// 4 = 0x4
	long long _uID;	// 8 = 0x8
	BOOL _hasVersion;	// 16 = 0x10
	int _version;	// 20 = 0x14
	BOOL _hasType;	// 24 = 0x18
	int _type;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	GEOMapRegion *_mapRegion;	// 36 = 0x24
	GEOAddress *_address;	// 40 = 0x28
	NSString *_phoneticName;	// 44 = 0x2c
	GEOAddress *_phoneticAddress;	// 48 = 0x30
	GEOLatLng *_center;	// 52 = 0x34
	NSMutableArray *_business;	// 56 = 0x38
	BOOL _hasAddressGeocodeAccuracy;	// 60 = 0x3c
	int _addressGeocodeAccuracy;	// 64 = 0x40
	BOOL _hasGeoId;	// 68 = 0x44
	long long _geoId;	// 72 = 0x48
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x35f2908d; S=0x35f2909d; @synthesize=_address
@property(assign, nonatomic) int addressGeocodeAccuracy;	// G=0x35f291b1; S=0x35f280e9; @synthesize=_addressGeocodeAccuracy
@property(retain, nonatomic) NSMutableArray *business;	// G=0x35f2915d; S=0x35f2916d; @synthesize=_business
@property(retain, nonatomic) GEOLatLng *center;	// G=0x35f29129; S=0x35f29139; @synthesize=_center
@property(assign, nonatomic) long long geoId;	// G=0x35f291e1; S=0x35f2810d; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x35f27fe5; 
@property(assign, nonatomic) BOOL hasAddressGeocodeAccuracy;	// G=0x35f29191; S=0x35f291a1; @synthesize=_hasAddressGeocodeAccuracy
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x35f2802d; 
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x35f291c1; S=0x35f291d1; @synthesize=_hasGeoId
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x35f27fcd; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x35f27fb5; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticAddress;	// G=0x35f28015; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x35f27ffd; 
@property(assign, nonatomic) BOOL hasType;	// G=0x35f28ff5; S=0x35f29005; @synthesize=_hasType
@property(assign, nonatomic) BOOL hasUID;	// G=0x35f28f8d; S=0x35f28f9d; @synthesize=_hasUID
@property(assign, nonatomic) BOOL hasVersion;	// G=0x35f28fc5; S=0x35f28fd5; @synthesize=_hasVersion
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x35f29059; S=0x35f29069; @synthesize=_mapRegion
@property(retain, nonatomic) NSString *name;	// G=0x35f29025; S=0x35f29035; @synthesize=_name
@property(retain, nonatomic) GEOAddress *phoneticAddress;	// G=0x35f290f5; S=0x35f29105; @synthesize=_phoneticAddress
@property(retain, nonatomic) NSString *phoneticName;	// G=0x35f290c1; S=0x35f290d1; @synthesize=_phoneticName
@property(assign, nonatomic) int type;	// G=0x35f29015; S=0x35f27f91; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x35f28fad; S=0x35f27f41; @synthesize=_uID
@property(assign, nonatomic) int version;	// G=0x35f28fe5; S=0x35f27f6d; @synthesize=_version
- (void)addBusiness:(id)business;	// 0x35f28045
// declared property getter: - (id)address;	// 0x35f2908d
- (id)addressDictionary;	// 0x35f183c9
// declared property getter: - (int)addressGeocodeAccuracy;	// 0x35f291b1
// declared property getter: - (id)business;	// 0x35f2915d
- (id)businessAtIndex:(unsigned)index;	// 0x35f280c9
- (unsigned)businessCount;	// 0x35f280a9
// declared property getter: - (id)center;	// 0x35f29129
- (void)dealloc;	// 0x35f27e85
- (id)description;	// 0x35f28139
- (id)dictionaryRepresentation;	// 0x35f281a9
// declared property getter: - (long long)geoId;	// 0x35f291e1
// declared property getter: - (BOOL)hasAddress;	// 0x35f27fe5
// declared property getter: - (BOOL)hasAddressGeocodeAccuracy;	// 0x35f29191
// declared property getter: - (BOOL)hasCenter;	// 0x35f2802d
// declared property getter: - (BOOL)hasGeoId;	// 0x35f291c1
// declared property getter: - (BOOL)hasMapRegion;	// 0x35f27fcd
// declared property getter: - (BOOL)hasName;	// 0x35f27fb5
// declared property getter: - (BOOL)hasPhoneticAddress;	// 0x35f28015
// declared property getter: - (BOOL)hasPhoneticName;	// 0x35f27ffd
// declared property getter: - (BOOL)hasType;	// 0x35f28ff5
// declared property getter: - (BOOL)hasUID;	// 0x35f28f8d
// declared property getter: - (BOOL)hasVersion;	// 0x35f28fc5
// declared property getter: - (id)mapRegion;	// 0x35f29059
// declared property getter: - (id)name;	// 0x35f29025
// declared property getter: - (id)phoneticAddress;	// 0x35f290f5
// declared property getter: - (id)phoneticName;	// 0x35f290c1
- (BOOL)readFrom:(id)from;	// 0x35f28629
// declared property setter: - (void)setAddress:(id)address;	// 0x35f2909d
// declared property setter: - (void)setAddressGeocodeAccuracy:(int)accuracy;	// 0x35f280e9
// declared property setter: - (void)setBusiness:(id)business;	// 0x35f2916d
// declared property setter: - (void)setCenter:(id)center;	// 0x35f29139
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x35f2810d
// declared property setter: - (void)setHasAddressGeocodeAccuracy:(BOOL)accuracy;	// 0x35f291a1
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x35f291d1
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x35f29005
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x35f28f9d
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x35f28fd5
// declared property setter: - (void)setMapRegion:(id)region;	// 0x35f29069
// declared property setter: - (void)setName:(id)name;	// 0x35f29035
// declared property setter: - (void)setPhoneticAddress:(id)address;	// 0x35f29105
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x35f290d1
// declared property setter: - (void)setType:(int)type;	// 0x35f27f91
// declared property setter: - (void)setUID:(long long)uid;	// 0x35f27f41
// declared property setter: - (void)setVersion:(int)version;	// 0x35f27f6d
// declared property getter: - (int)type;	// 0x35f29015
// declared property getter: - (long long)uID;	// 0x35f28fad
// declared property getter: - (int)version;	// 0x35f28fe5
- (void)writeTo:(id)to;	// 0x35f28af1
@end

