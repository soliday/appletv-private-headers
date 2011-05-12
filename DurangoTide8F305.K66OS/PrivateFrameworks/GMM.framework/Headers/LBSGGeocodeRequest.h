/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest {
@private
	unsigned _numFeatureLimit;	// 4 = 0x4
	BOOL _hasNumFeatureLimit;	// 8 = 0x8
	BOOL _includeBoundingBoxes;	// 9 = 0x9
	BOOL _hasIncludeBoundingBoxes;	// 10 = 0xa
	LBSGRectangle *_boundingBox;	// 12 = 0xc
	int _addressLinesLimit;	// 16 = 0x10
	BOOL _hasAddressLinesLimit;	// 20 = 0x14
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x32ba94e1; S=0x32ba94b1; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x32ba94f1; S=0x32ba9a85; @synthesize=_boundingBox
@property(readonly, assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x32ba94d1; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x32ba949d; 
@property(readonly, assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x32ba9501; @synthesize=_hasIncludeBoundingBoxes
@property(readonly, assign, nonatomic) BOOL hasNumFeatureLimit;	// G=0x32ba9521; @synthesize=_hasNumFeatureLimit
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x32ba9511; S=0x32ba9481; @synthesize=_includeBoundingBoxes
@property(assign, nonatomic) unsigned numFeatureLimit;	// G=0x32ba9531; S=0x32ba9465; @synthesize=_numFeatureLimit
- (id)init;	// 0x32ba9a0d
// declared property getter: - (int)addressLinesLimit;	// 0x32ba94e1
// declared property getter: - (id)boundingBox;	// 0x32ba94f1
- (void)dealloc;	// 0x32ba99c5
- (id)description;	// 0x32ba9541
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x32ba94d1
// declared property getter: - (BOOL)hasBoundingBox;	// 0x32ba949d
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x32ba9501
// declared property getter: - (BOOL)hasNumFeatureLimit;	// 0x32ba9521
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x32ba9511
// declared property getter: - (unsigned)numFeatureLimit;	// 0x32ba9531
- (BOOL)readFrom:(id)from;	// 0x32ba97c5
- (unsigned)requestTypeCode;	// 0x32ba94cd
- (Class)responseClass;	// 0x32ba9a71
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x32ba94b1
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x32ba9a85
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x32ba9481
// declared property setter: - (void)setNumFeatureLimit:(unsigned)limit;	// 0x32ba9465
- (void)writeTo:(id)to;	// 0x32ba9689
@end
