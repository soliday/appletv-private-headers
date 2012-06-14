/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMCopyright : PBCodable {
	NSMutableArray *_mapDataCopyrights;	// 4 = 0x4
	NSMutableArray *_imageryCopyrights;	// 8 = 0x8
	BOOL _hasCopyrightYear;	// 12 = 0xc
	int _copyrightYear;	// 16 = 0x10
}
@property(assign, nonatomic) int copyrightYear;	// G=0x31fc175d; S=0x31fc12dd; @synthesize=_copyrightYear
@property(assign, nonatomic) BOOL hasCopyrightYear;	// G=0x31fc173d; S=0x31fc174d; @synthesize=_hasCopyrightYear
@property(retain, nonatomic) NSMutableArray *imageryCopyrights;	// G=0x31fc1709; S=0x31fc1719; @synthesize=_imageryCopyrights
@property(retain, nonatomic) NSMutableArray *mapDataCopyrights;	// G=0x31fc16d5; S=0x31fc16e5; @synthesize=_mapDataCopyrights
- (void)addImageryCopyright:(id)copyright;	// 0x31fc1239
- (void)addMapDataCopyright:(id)copyright;	// 0x31fc1195
// declared property getter: - (int)copyrightYear;	// 0x31fc175d
- (void)dealloc;	// 0x31fc113d
- (id)description;	// 0x31fc1301
- (id)dictionaryRepresentation;	// 0x31fc1371
// declared property getter: - (BOOL)hasCopyrightYear;	// 0x31fc173d
- (id)imageryCopyrightAtIndex:(unsigned)index;	// 0x31fc12bd
// declared property getter: - (id)imageryCopyrights;	// 0x31fc1709
- (unsigned)imageryCopyrightsCount;	// 0x31fc129d
- (id)mapDataCopyrightAtIndex:(unsigned)index;	// 0x31fc1219
// declared property getter: - (id)mapDataCopyrights;	// 0x31fc16d5
- (unsigned)mapDataCopyrightsCount;	// 0x31fc11f9
- (BOOL)readFrom:(id)from;	// 0x31fc1449
// declared property setter: - (void)setCopyrightYear:(int)year;	// 0x31fc12dd
// declared property setter: - (void)setHasCopyrightYear:(BOOL)year;	// 0x31fc174d
// declared property setter: - (void)setImageryCopyrights:(id)copyrights;	// 0x31fc1719
// declared property setter: - (void)setMapDataCopyrights:(id)copyrights;	// 0x31fc16e5
- (void)writeTo:(id)to;	// 0x31fc1561
@end

