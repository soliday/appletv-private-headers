/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class GMMMapInfo, NSData, GMMClientCapabilities, NSString;

@interface GMMSearchRequest : PBRequest {
	int _type;	// 4 = 0x4
	NSString *_query;	// 8 = 0x8
	GMMMapInfo *_mapInfo;	// 12 = 0xc
	BOOL _hasResultOffset;	// 16 = 0x10
	int _resultOffset;	// 20 = 0x14
	BOOL _hasMaxResults;	// 24 = 0x18
	int _maxResults;	// 28 = 0x1c
	BOOL _hasIncludeStructuredAddress;	// 32 = 0x20
	BOOL _includeStructuredAddress;	// 33 = 0x21
	BOOL _hasIncludeAdResults;	// 34 = 0x22
	BOOL _includeAdResults;	// 35 = 0x23
	BOOL _hasIncludeKmlResults;	// 36 = 0x24
	BOOL _includeKmlResults;	// 37 = 0x25
	NSData *_kmlDocument;	// 40 = 0x28
	NSString *_gaiaSid;	// 44 = 0x2c
	GMMClientCapabilities *_capabilities;	// 48 = 0x30
	BOOL _hasIncludeCategories;	// 52 = 0x34
	BOOL _includeCategories;	// 53 = 0x35
	BOOL _hasIncludeMapsUrlForEachResult;	// 54 = 0x36
	BOOL _includeMapsUrlForEachResult;	// 55 = 0x37
	BOOL _hasUseSeparateRefinementString;	// 56 = 0x38
	BOOL _useSeparateRefinementString;	// 57 = 0x39
	BOOL _hasSourceType;	// 58 = 0x3a
	int _sourceType;	// 60 = 0x3c
	BOOL _hasIncludeRatings;	// 64 = 0x40
	BOOL _includeRatings;	// 65 = 0x41
	BOOL _hasIncludeProximityAdResults;	// 66 = 0x42
	BOOL _includeProximityAdResults;	// 67 = 0x43
	BOOL _hasIncludeStreetViewPanoId;	// 68 = 0x44
	BOOL _includeStreetViewPanoId;	// 69 = 0x45
	BOOL _hasAddLabelToUnverifiedListings;	// 70 = 0x46
	BOOL _addLabelToUnverifiedListings;	// 71 = 0x47
	BOOL _hasPayloadType;	// 72 = 0x48
	int _payloadType;	// 76 = 0x4c
	BOOL _hasTileSize;	// 80 = 0x50
	int _tileSize;	// 84 = 0x54
	BOOL _hasAdjustViewport;	// 88 = 0x58
	BOOL _adjustViewport;	// 89 = 0x59
	BOOL _hasAddLabelToClosedListings;	// 90 = 0x5a
	BOOL _addLabelToClosedListings;	// 91 = 0x5b
}
@property(assign, nonatomic) BOOL addLabelToClosedListings;	// G=0x33cc50b9; S=0x33cc50dd; @synthesize=_addLabelToClosedListings
@property(assign, nonatomic) BOOL addLabelToUnverifiedListings;	// G=0x33cc4f99; S=0x33cc4fbd; @synthesize=_addLabelToUnverifiedListings
@property(assign, nonatomic) BOOL adjustViewport;	// G=0x33cc5071; S=0x33cc5095; @synthesize=_adjustViewport
@property(retain, nonatomic) GMMClientCapabilities *capabilities;	// G=0x33cc6245; S=0x33cc6255; @synthesize=_capabilities
@property(retain, nonatomic) NSString *gaiaSid;	// G=0x33cc6211; S=0x33cc6221; @synthesize=_gaiaSid
@property(assign, nonatomic) BOOL hasAddLabelToClosedListings;	// G=0x33cc63e9; S=0x33cc63f9; @synthesize=_hasAddLabelToClosedListings
@property(assign, nonatomic) BOOL hasAddLabelToUnverifiedListings;	// G=0x33cc6369; S=0x33cc6379; @synthesize=_hasAddLabelToUnverifiedListings
@property(assign, nonatomic) BOOL hasAdjustViewport;	// G=0x33cc63c9; S=0x33cc63d9; @synthesize=_hasAdjustViewport
@property(readonly, assign, nonatomic) BOOL hasCapabilities;	// G=0x33cc4dad; 
@property(readonly, assign, nonatomic) BOOL hasGaiaSid;	// G=0x33cc4d95; 
@property(assign, nonatomic) BOOL hasIncludeAdResults;	// G=0x33cc619d; S=0x33cc61ad; @synthesize=_hasIncludeAdResults
@property(assign, nonatomic) BOOL hasIncludeCategories;	// G=0x33cc6279; S=0x33cc6289; @synthesize=_hasIncludeCategories
@property(assign, nonatomic) BOOL hasIncludeKmlResults;	// G=0x33cc61bd; S=0x33cc61cd; @synthesize=_hasIncludeKmlResults
@property(assign, nonatomic) BOOL hasIncludeMapsUrlForEachResult;	// G=0x33cc6299; S=0x33cc62a9; @synthesize=_hasIncludeMapsUrlForEachResult
@property(assign, nonatomic) BOOL hasIncludeProximityAdResults;	// G=0x33cc6329; S=0x33cc6339; @synthesize=_hasIncludeProximityAdResults
@property(assign, nonatomic) BOOL hasIncludeRatings;	// G=0x33cc6309; S=0x33cc6319; @synthesize=_hasIncludeRatings
@property(assign, nonatomic) BOOL hasIncludeStreetViewPanoId;	// G=0x33cc6349; S=0x33cc6359; @synthesize=_hasIncludeStreetViewPanoId
@property(assign, nonatomic) BOOL hasIncludeStructuredAddress;	// G=0x33cc617d; S=0x33cc618d; @synthesize=_hasIncludeStructuredAddress
@property(readonly, assign, nonatomic) BOOL hasKmlDocument;	// G=0x33cc4d7d; 
@property(readonly, assign, nonatomic) BOOL hasMapInfo;	// G=0x33cc4bfd; 
@property(assign, nonatomic) BOOL hasMaxResults;	// G=0x33cc615d; S=0x33cc616d; @synthesize=_hasMaxResults
@property(assign, nonatomic) BOOL hasPayloadType;	// G=0x33cc6389; S=0x33cc6399; @synthesize=_hasPayloadType
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x33cc613d; S=0x33cc614d; @synthesize=_hasResultOffset
@property(assign, nonatomic) BOOL hasSourceType;	// G=0x33cc62d9; S=0x33cc62e9; @synthesize=_hasSourceType
@property(assign, nonatomic) BOOL hasTileSize;	// G=0x33cc63a9; S=0x33cc63b9; @synthesize=_hasTileSize
@property(assign, nonatomic) BOOL hasUseSeparateRefinementString;	// G=0x33cc62b9; S=0x33cc62c9; @synthesize=_hasUseSeparateRefinementString
@property(assign, nonatomic) BOOL includeAdResults;	// G=0x33cc4ced; S=0x33cc4d11; @synthesize=_includeAdResults
@property(assign, nonatomic) BOOL includeCategories;	// G=0x33cc4dc5; S=0x33cc4de9; @synthesize=_includeCategories
@property(assign, nonatomic) BOOL includeKmlResults;	// G=0x33cc4d35; S=0x33cc4d59; @synthesize=_includeKmlResults
@property(assign, nonatomic) BOOL includeMapsUrlForEachResult;	// G=0x33cc4e0d; S=0x33cc4e31; @synthesize=_includeMapsUrlForEachResult
@property(assign, nonatomic) BOOL includeProximityAdResults;	// G=0x33cc4f09; S=0x33cc4f2d; @synthesize=_includeProximityAdResults
@property(assign, nonatomic) BOOL includeRatings;	// G=0x33cc4ec1; S=0x33cc4ee5; @synthesize=_includeRatings
@property(assign, nonatomic) BOOL includeStreetViewPanoId;	// G=0x33cc4f51; S=0x33cc4f75; @synthesize=_includeStreetViewPanoId
@property(assign, nonatomic) BOOL includeStructuredAddress;	// G=0x33cc4ca5; S=0x33cc4cc9; @synthesize=_includeStructuredAddress
@property(retain, nonatomic) NSData *kmlDocument;	// G=0x33cc61dd; S=0x33cc61ed; @synthesize=_kmlDocument
@property(retain, nonatomic) GMMMapInfo *mapInfo;	// G=0x33cc6109; S=0x33cc6119; @synthesize=_mapInfo
@property(assign, nonatomic) int maxResults;	// G=0x33cc4c5d; S=0x33cc4c81; @synthesize=_maxResults
@property(assign, nonatomic) int payloadType;	// G=0x33cc4fe1; S=0x33cc5005; @synthesize=_payloadType
@property(retain, nonatomic) NSString *query;	// G=0x33cc60d5; S=0x33cc60e5; @synthesize=_query
@property(assign, nonatomic) int resultOffset;	// G=0x33cc4c15; S=0x33cc4c39; @synthesize=_resultOffset
@property(assign, nonatomic) int sourceType;	// G=0x33cc62f9; S=0x33cc4e9d; @synthesize=_sourceType
@property(assign, nonatomic) int tileSize;	// G=0x33cc5029; S=0x33cc504d; @synthesize=_tileSize
@property(assign, nonatomic) int type;	// G=0x33cc60b5; S=0x33cc60c5; @synthesize=_type
@property(assign, nonatomic) BOOL useSeparateRefinementString;	// G=0x33cc4e55; S=0x33cc4e79; @synthesize=_useSeparateRefinementString
// declared property getter: - (BOOL)addLabelToClosedListings;	// 0x33cc50b9
// declared property getter: - (BOOL)addLabelToUnverifiedListings;	// 0x33cc4f99
// declared property getter: - (BOOL)adjustViewport;	// 0x33cc5071
// declared property getter: - (id)capabilities;	// 0x33cc6245
- (void)dealloc;	// 0x33cc4b69
- (id)description;	// 0x33cc5101
- (id)dictionaryRepresentation;	// 0x33cc5171
// declared property getter: - (id)gaiaSid;	// 0x33cc6211
// declared property getter: - (BOOL)hasAddLabelToClosedListings;	// 0x33cc63e9
// declared property getter: - (BOOL)hasAddLabelToUnverifiedListings;	// 0x33cc6369
// declared property getter: - (BOOL)hasAdjustViewport;	// 0x33cc63c9
// declared property getter: - (BOOL)hasCapabilities;	// 0x33cc4dad
// declared property getter: - (BOOL)hasGaiaSid;	// 0x33cc4d95
// declared property getter: - (BOOL)hasIncludeAdResults;	// 0x33cc619d
// declared property getter: - (BOOL)hasIncludeCategories;	// 0x33cc6279
// declared property getter: - (BOOL)hasIncludeKmlResults;	// 0x33cc61bd
// declared property getter: - (BOOL)hasIncludeMapsUrlForEachResult;	// 0x33cc6299
// declared property getter: - (BOOL)hasIncludeProximityAdResults;	// 0x33cc6329
// declared property getter: - (BOOL)hasIncludeRatings;	// 0x33cc6309
// declared property getter: - (BOOL)hasIncludeStreetViewPanoId;	// 0x33cc6349
// declared property getter: - (BOOL)hasIncludeStructuredAddress;	// 0x33cc617d
// declared property getter: - (BOOL)hasKmlDocument;	// 0x33cc4d7d
// declared property getter: - (BOOL)hasMapInfo;	// 0x33cc4bfd
// declared property getter: - (BOOL)hasMaxResults;	// 0x33cc615d
// declared property getter: - (BOOL)hasPayloadType;	// 0x33cc6389
// declared property getter: - (BOOL)hasResultOffset;	// 0x33cc613d
// declared property getter: - (BOOL)hasSourceType;	// 0x33cc62d9
// declared property getter: - (BOOL)hasTileSize;	// 0x33cc63a9
// declared property getter: - (BOOL)hasUseSeparateRefinementString;	// 0x33cc62b9
// declared property getter: - (BOOL)includeAdResults;	// 0x33cc4ced
// declared property getter: - (BOOL)includeCategories;	// 0x33cc4dc5
// declared property getter: - (BOOL)includeKmlResults;	// 0x33cc4d35
// declared property getter: - (BOOL)includeMapsUrlForEachResult;	// 0x33cc4e0d
// declared property getter: - (BOOL)includeProximityAdResults;	// 0x33cc4f09
// declared property getter: - (BOOL)includeRatings;	// 0x33cc4ec1
// declared property getter: - (BOOL)includeStreetViewPanoId;	// 0x33cc4f51
// declared property getter: - (BOOL)includeStructuredAddress;	// 0x33cc4ca5
// declared property getter: - (id)kmlDocument;	// 0x33cc61dd
// declared property getter: - (id)mapInfo;	// 0x33cc6109
// declared property getter: - (int)maxResults;	// 0x33cc4c5d
// declared property getter: - (int)payloadType;	// 0x33cc4fe1
// declared property getter: - (id)query;	// 0x33cc60d5
- (BOOL)readFrom:(id)from;	// 0x33cc5715
- (unsigned)requestTypeCode;	// 0x33cc6095
- (Class)responseClass;	// 0x33cc6099
// declared property getter: - (int)resultOffset;	// 0x33cc4c15
// declared property setter: - (void)setAddLabelToClosedListings:(BOOL)closedListings;	// 0x33cc50dd
// declared property setter: - (void)setAddLabelToUnverifiedListings:(BOOL)unverifiedListings;	// 0x33cc4fbd
// declared property setter: - (void)setAdjustViewport:(BOOL)viewport;	// 0x33cc5095
// declared property setter: - (void)setCapabilities:(id)capabilities;	// 0x33cc6255
// declared property setter: - (void)setGaiaSid:(id)sid;	// 0x33cc6221
// declared property setter: - (void)setHasAddLabelToClosedListings:(BOOL)closedListings;	// 0x33cc63f9
// declared property setter: - (void)setHasAddLabelToUnverifiedListings:(BOOL)unverifiedListings;	// 0x33cc6379
// declared property setter: - (void)setHasAdjustViewport:(BOOL)viewport;	// 0x33cc63d9
// declared property setter: - (void)setHasIncludeAdResults:(BOOL)results;	// 0x33cc61ad
// declared property setter: - (void)setHasIncludeCategories:(BOOL)categories;	// 0x33cc6289
// declared property setter: - (void)setHasIncludeKmlResults:(BOOL)results;	// 0x33cc61cd
// declared property setter: - (void)setHasIncludeMapsUrlForEachResult:(BOOL)eachResult;	// 0x33cc62a9
// declared property setter: - (void)setHasIncludeProximityAdResults:(BOOL)results;	// 0x33cc6339
// declared property setter: - (void)setHasIncludeRatings:(BOOL)ratings;	// 0x33cc6319
// declared property setter: - (void)setHasIncludeStreetViewPanoId:(BOOL)anId;	// 0x33cc6359
// declared property setter: - (void)setHasIncludeStructuredAddress:(BOOL)address;	// 0x33cc618d
// declared property setter: - (void)setHasMaxResults:(BOOL)results;	// 0x33cc616d
// declared property setter: - (void)setHasPayloadType:(BOOL)type;	// 0x33cc6399
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x33cc614d
// declared property setter: - (void)setHasSourceType:(BOOL)type;	// 0x33cc62e9
// declared property setter: - (void)setHasTileSize:(BOOL)size;	// 0x33cc63b9
// declared property setter: - (void)setHasUseSeparateRefinementString:(BOOL)string;	// 0x33cc62c9
// declared property setter: - (void)setIncludeAdResults:(BOOL)results;	// 0x33cc4d11
// declared property setter: - (void)setIncludeCategories:(BOOL)categories;	// 0x33cc4de9
// declared property setter: - (void)setIncludeKmlResults:(BOOL)results;	// 0x33cc4d59
// declared property setter: - (void)setIncludeMapsUrlForEachResult:(BOOL)eachResult;	// 0x33cc4e31
// declared property setter: - (void)setIncludeProximityAdResults:(BOOL)results;	// 0x33cc4f2d
// declared property setter: - (void)setIncludeRatings:(BOOL)ratings;	// 0x33cc4ee5
// declared property setter: - (void)setIncludeStreetViewPanoId:(BOOL)anId;	// 0x33cc4f75
// declared property setter: - (void)setIncludeStructuredAddress:(BOOL)address;	// 0x33cc4cc9
// declared property setter: - (void)setKmlDocument:(id)document;	// 0x33cc61ed
// declared property setter: - (void)setMapInfo:(id)info;	// 0x33cc6119
// declared property setter: - (void)setMaxResults:(int)results;	// 0x33cc4c81
// declared property setter: - (void)setPayloadType:(int)type;	// 0x33cc5005
// declared property setter: - (void)setQuery:(id)query;	// 0x33cc60e5
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x33cc4c39
// declared property setter: - (void)setSourceType:(int)type;	// 0x33cc4e9d
// declared property setter: - (void)setTileSize:(int)size;	// 0x33cc504d
// declared property setter: - (void)setType:(int)type;	// 0x33cc60c5
// declared property setter: - (void)setUseSeparateRefinementString:(BOOL)string;	// 0x33cc4e79
// declared property getter: - (int)sourceType;	// 0x33cc62f9
// declared property getter: - (int)tileSize;	// 0x33cc5029
// declared property getter: - (int)type;	// 0x33cc60b5
// declared property getter: - (BOOL)useSeparateRefinementString;	// 0x33cc4e55
- (void)writeTo:(id)to;	// 0x33cc5ba9
@end

