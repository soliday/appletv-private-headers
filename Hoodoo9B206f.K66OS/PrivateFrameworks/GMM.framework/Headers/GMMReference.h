/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMReference : PBCodable {
	NSString *_url;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *domain;	// G=0x33cc4b35; S=0x33cc4b45; @synthesize=_domain
@property(retain, nonatomic) NSString *title;	// G=0x33cc4b01; S=0x33cc4b11; @synthesize=_title
@property(retain, nonatomic) NSString *url;	// G=0x33cc4acd; S=0x33cc4add; @synthesize=_url
- (void)dealloc;	// 0x33cc47d5
- (id)description;	// 0x33cc4841
- (id)description;	// 0x33cb86b9
- (id)dictionaryRepresentation;	// 0x33cc48b1
// declared property getter: - (id)domain;	// 0x33cc4b35
- (BOOL)readFrom:(id)from;	// 0x33cc495d
// declared property setter: - (void)setDomain:(id)domain;	// 0x33cc4b45
// declared property setter: - (void)setTitle:(id)title;	// 0x33cc4b11
// declared property setter: - (void)setUrl:(id)url;	// 0x33cc4add
// declared property getter: - (id)title;	// 0x33cc4b01
// declared property getter: - (id)url;	// 0x33cc4acd
- (void)writeTo:(id)to;	// 0x33cc4a6d
@end

