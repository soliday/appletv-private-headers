/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMNavigationImage : PBCodable {
	int _width;	// 4 = 0x4
	int _height;	// 8 = 0x8
	NSData *_imageData;	// 12 = 0xc
}
@property(assign, nonatomic) int height;	// G=0x33ce5b25; S=0x33ce5b35; @synthesize=_height
@property(retain, nonatomic) NSData *imageData;	// G=0x33ce5b45; S=0x33ce5b55; @synthesize=_imageData
@property(assign, nonatomic) int width;	// G=0x33ce5b05; S=0x33ce5b15; @synthesize=_width
- (void)dealloc;	// 0x33ce5805
- (id)description;	// 0x33ce5849
- (id)dictionaryRepresentation;	// 0x33ce58b9
// declared property getter: - (int)height;	// 0x33ce5b25
// declared property getter: - (id)imageData;	// 0x33ce5b45
- (BOOL)readFrom:(id)from;	// 0x33ce5985
// declared property setter: - (void)setHeight:(int)height;	// 0x33ce5b35
// declared property setter: - (void)setImageData:(id)data;	// 0x33ce5b55
// declared property setter: - (void)setWidth:(int)width;	// 0x33ce5b15
// declared property getter: - (int)width;	// 0x33ce5b05
- (void)writeTo:(id)to;	// 0x33ce5a9d
@end

