/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMOutgoingThumbnail : PBCodable {
	int _width;	// 4 = 0x4
	int _height;	// 8 = 0x8
}
@property(assign, nonatomic) int height;	// G=0x31fc51bd; S=0x31fc51cd; @synthesize=_height
@property(assign, nonatomic) int width;	// G=0x31fc519d; S=0x31fc51ad; @synthesize=_width
- (void)dealloc;	// 0x31fc4f19
- (id)description;	// 0x31fc4f45
- (id)dictionaryRepresentation;	// 0x31fc4fb5
// declared property getter: - (int)height;	// 0x31fc51bd
- (BOOL)readFrom:(id)from;	// 0x31fc5061
// declared property setter: - (void)setHeight:(int)height;	// 0x31fc51cd
// declared property setter: - (void)setWidth:(int)width;	// 0x31fc51ad
// declared property getter: - (int)width;	// 0x31fc519d
- (void)writeTo:(id)to;	// 0x31fc5155
@end

