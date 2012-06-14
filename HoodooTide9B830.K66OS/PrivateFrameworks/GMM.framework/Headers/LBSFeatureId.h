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
@property(assign, nonatomic) unsigned long long cellId;	// G=0x31fb2f01; S=0x31fb2f19; @synthesize=_cellId
@property(assign, nonatomic) unsigned long long fprint;	// G=0x31fb2f2d; S=0x31fb2f45; @synthesize=_fprint
// declared property getter: - (unsigned long long)cellId;	// 0x31fb2f01
- (void)dealloc;	// 0x31fb2c65
- (id)description;	// 0x31fb2c91
- (id)dictionaryRepresentation;	// 0x31fb2d01
// declared property getter: - (unsigned long long)fprint;	// 0x31fb2f2d
- (BOOL)readFrom:(id)from;	// 0x31fb2db5
// declared property setter: - (void)setCellId:(unsigned long long)anId;	// 0x31fb2f19
// declared property setter: - (void)setFprint:(unsigned long long)fprint;	// 0x31fb2f45
- (void)writeTo:(id)to;	// 0x31fb2ead
@end

