/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGCellularProfile, LBSGGeocodeRequest, LBSGLocation;

@interface LBSGLocRequestElement : PBCodable {
	LBSGCellularProfile *_cellularProfile;	// 4 = 0x4
	LBSGLocation *_location;	// 8 = 0x8
	LBSGGeocodeRequest *_geocode;	// 12 = 0xc
}
@property(retain, nonatomic) LBSGCellularProfile *cellularProfile;	// G=0x3386030d; S=0x3386031d; @synthesize=_cellularProfile
@property(retain, nonatomic) LBSGGeocodeRequest *geocode;	// G=0x33860375; S=0x33860385; @synthesize=_geocode
@property(readonly, assign, nonatomic) BOOL hasCellularProfile;	// G=0x3385fd51; 
@property(readonly, assign, nonatomic) BOOL hasGeocode;	// G=0x3385fd81; 
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x3385fd69; 
@property(retain, nonatomic) LBSGLocation *location;	// G=0x33860341; S=0x33860351; @synthesize=_location
// declared property getter: - (id)cellularProfile;	// 0x3386030d
- (void)dealloc;	// 0x3385fce5
- (id)description;	// 0x3385fd99
- (id)dictionaryRepresentation;	// 0x3385fe09
// declared property getter: - (id)geocode;	// 0x33860375
// declared property getter: - (BOOL)hasCellularProfile;	// 0x3385fd51
// declared property getter: - (BOOL)hasGeocode;	// 0x3385fd81
// declared property getter: - (BOOL)hasLocation;	// 0x3385fd69
// declared property getter: - (id)location;	// 0x33860341
- (BOOL)readFrom:(id)from;	// 0x3385feb5
// declared property setter: - (void)setCellularProfile:(id)profile;	// 0x3386031d
// declared property setter: - (void)setGeocode:(id)geocode;	// 0x33860385
// declared property setter: - (void)setLocation:(id)location;	// 0x33860351
- (void)writeTo:(id)to;	// 0x33860151
@end

