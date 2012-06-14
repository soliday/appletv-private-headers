/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class GMMMapPoint;

__attribute__((visibility("hidden")))
@interface GMMLocationShiftResponse : PBCodable {
	int _status;	// 4 = 0x4
	XXStruct_19EQxD _coefficients;	// 8 = 0x8
	GMMMapPoint *_originalPoint;	// 20 = 0x14
	BOOL _hasValidSquareLength;	// 24 = 0x18
	int _validSquareLength;	// 28 = 0x1c
	BOOL _hasCacheSquareLength;	// 32 = 0x20
	int _cacheSquareLength;	// 36 = 0x24
}
@property(assign, nonatomic) int cacheSquareLength;	// G=0x31fbe9f9; S=0x31fbe389; @synthesize=_cacheSquareLength
@property(readonly, assign, nonatomic) long long *coefficients;	// G=0x31fbe251; 
@property(readonly, assign, nonatomic) unsigned coefficientsCount;	// G=0x31fbe23d; 
@property(assign, nonatomic) BOOL hasCacheSquareLength;	// G=0x31fbe9d9; S=0x31fbe9e9; @synthesize=_hasCacheSquareLength
@property(readonly, assign, nonatomic) BOOL hasOriginalPoint;	// G=0x31fbe34d; 
@property(assign, nonatomic) BOOL hasValidSquareLength;	// G=0x31fbe9a9; S=0x31fbe9b9; @synthesize=_hasValidSquareLength
@property(retain, nonatomic) GMMMapPoint *originalPoint;	// G=0x31fbe975; S=0x31fbe985; @synthesize=_originalPoint
@property(assign, nonatomic) int status;	// G=0x31fbe955; S=0x31fbe965; @synthesize=_status
@property(assign, nonatomic) int validSquareLength;	// G=0x31fbe9c9; S=0x31fbe365; @synthesize=_validSquareLength
- (void)addCoefficient:(long long)coefficient;	// 0x31fbe275
// declared property getter: - (int)cacheSquareLength;	// 0x31fbe9f9
- (void)clearCoefficients;	// 0x31fbe261
- (long long)coefficientAtIndex:(unsigned)index;	// 0x31fbe28d
// declared property getter: - (long long *)coefficients;	// 0x31fbe251
// declared property getter: - (unsigned)coefficientsCount;	// 0x31fbe23d
- (void)dealloc;	// 0x31fbe1e9
- (id)description;	// 0x31fbe3ad
- (id)dictionaryRepresentation;	// 0x31fbe41d
// declared property getter: - (BOOL)hasCacheSquareLength;	// 0x31fbe9d9
// declared property getter: - (BOOL)hasOriginalPoint;	// 0x31fbe34d
// declared property getter: - (BOOL)hasValidSquareLength;	// 0x31fbe9a9
// declared property getter: - (id)originalPoint;	// 0x31fbe975
- (BOOL)readFrom:(id)from;	// 0x31fbe55d
// declared property setter: - (void)setCacheSquareLength:(int)length;	// 0x31fbe389
- (void)setCoefficients:(long long *)coefficients count:(unsigned)count;	// 0x31fbe335
// declared property setter: - (void)setHasCacheSquareLength:(BOOL)length;	// 0x31fbe9e9
// declared property setter: - (void)setHasValidSquareLength:(BOOL)length;	// 0x31fbe9b9
// declared property setter: - (void)setOriginalPoint:(id)point;	// 0x31fbe985
// declared property setter: - (void)setStatus:(int)status;	// 0x31fbe965
// declared property setter: - (void)setValidSquareLength:(int)length;	// 0x31fbe365
// declared property getter: - (int)status;	// 0x31fbe955
// declared property getter: - (int)validSquareLength;	// 0x31fbe9c9
- (void)writeTo:(id)to;	// 0x31fbe7e5
@end

