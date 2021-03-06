/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMCopyright;

__attribute__((visibility("hidden")))
@interface GMMMapTileInfo : PBCodable {
	GMMCopyright *_copyright;	// 4 = 0x4
}
@property(retain, nonatomic) GMMCopyright *copyright;	// G=0x33ce6aa1; S=0x33ce6ab1; @synthesize=_copyright
@property(readonly, assign, nonatomic) BOOL hasCopyright;	// G=0x33ce67b1; 
// declared property getter: - (id)copyright;	// 0x33ce6aa1
- (void)dealloc;	// 0x33ce676d
- (id)description;	// 0x33ce67c9
- (id)dictionaryRepresentation;	// 0x33ce6839
// declared property getter: - (BOOL)hasCopyright;	// 0x33ce67b1
- (BOOL)readFrom:(id)from;	// 0x33ce688d
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x33ce6ab1
- (void)writeTo:(id)to;	// 0x33ce6a01
@end

