/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMDocumentInfo : PBCodable {
	NSString *_author;	// 4 = 0x4
	NSString *_attributionUrl;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x33cc1095; S=0x33cc10a5; @synthesize=_attributionUrl
@property(retain, nonatomic) NSString *author;	// G=0x33cc1061; S=0x33cc1071; @synthesize=_author
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x33cc0e0d; 
@property(readonly, assign, nonatomic) BOOL hasAuthor;	// G=0x33cc0df5; 
// declared property getter: - (id)attributionUrl;	// 0x33cc1095
// declared property getter: - (id)author;	// 0x33cc1061
- (void)dealloc;	// 0x33cc0d9d
- (id)description;	// 0x33cc0e25
- (id)dictionaryRepresentation;	// 0x33cc0e95
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x33cc0e0d
// declared property getter: - (BOOL)hasAuthor;	// 0x33cc0df5
- (BOOL)readFrom:(id)from;	// 0x33cc0f15
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x33cc10a5
// declared property setter: - (void)setAuthor:(id)author;	// 0x33cc1071
- (void)writeTo:(id)to;	// 0x33cc1009
@end

