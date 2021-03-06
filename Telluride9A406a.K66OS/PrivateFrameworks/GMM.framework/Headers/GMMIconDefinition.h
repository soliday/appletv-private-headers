/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIconDefinition : PBCodable {
	long long _iconId;	// 4 = 0x4
	NSData *_image;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasImage;	// G=0x33a976f9; 
@property(assign, nonatomic) long long iconId;	// G=0x33a9797d; S=0x33a97995; @synthesize=_iconId
@property(retain, nonatomic) NSData *image;	// G=0x33a979a9; S=0x33a979b9; @synthesize=_image
- (void)dealloc;	// 0x33a976b5
- (id)description;	// 0x33a97711
- (id)dictionaryRepresentation;	// 0x33a97781
// declared property getter: - (BOOL)hasImage;	// 0x33a976f9
// declared property getter: - (long long)iconId;	// 0x33a9797d
// declared property getter: - (id)image;	// 0x33a979a9
- (BOOL)readFrom:(id)from;	// 0x33a97819
// declared property setter: - (void)setIconId:(long long)anId;	// 0x33a97995
// declared property setter: - (void)setImage:(id)image;	// 0x33a979b9
- (void)writeTo:(id)to;	// 0x33a97921
@end

