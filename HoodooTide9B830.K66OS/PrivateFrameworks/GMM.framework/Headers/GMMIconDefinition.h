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
@property(readonly, assign, nonatomic) BOOL hasImage;	// G=0x31faa6e9; 
@property(assign, nonatomic) long long iconId;	// G=0x31faa96d; S=0x31faa985; @synthesize=_iconId
@property(retain, nonatomic) NSData *image;	// G=0x31faa999; S=0x31faa9a9; @synthesize=_image
- (void)dealloc;	// 0x31faa6a5
- (id)description;	// 0x31faa701
- (id)dictionaryRepresentation;	// 0x31faa771
// declared property getter: - (BOOL)hasImage;	// 0x31faa6e9
// declared property getter: - (long long)iconId;	// 0x31faa96d
// declared property getter: - (id)image;	// 0x31faa999
- (BOOL)readFrom:(id)from;	// 0x31faa809
// declared property setter: - (void)setIconId:(long long)anId;	// 0x31faa985
// declared property setter: - (void)setImage:(id)image;	// 0x31faa9a9
- (void)writeTo:(id)to;	// 0x31faa911
@end

