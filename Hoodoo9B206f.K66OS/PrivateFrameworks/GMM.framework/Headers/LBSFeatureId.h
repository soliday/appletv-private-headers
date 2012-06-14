/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSFeatureId : PBCodable {
	unsigned long long _cellId;	// 4 = 0x4
	unsigned long long _fprint;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long cellId;	// G=0x33cd7f01; S=0x33cd7f19; @synthesize=_cellId
@property(assign, nonatomic) unsigned long long fprint;	// G=0x33cd7f2d; S=0x33cd7f45; @synthesize=_fprint
// declared property getter: - (unsigned long long)cellId;	// 0x33cd7f01
- (void)dealloc;	// 0x33cd7c65
- (id)description;	// 0x33cd7c91
- (id)dictionaryRepresentation;	// 0x33cd7d01
// declared property getter: - (unsigned long long)fprint;	// 0x33cd7f2d
- (BOOL)readFrom:(id)from;	// 0x33cd7db5
// declared property setter: - (void)setCellId:(unsigned long long)anId;	// 0x33cd7f19
// declared property setter: - (void)setFprint:(unsigned long long)fprint;	// 0x33cd7f45
- (void)writeTo:(id)to;	// 0x33cd7ead
@end

