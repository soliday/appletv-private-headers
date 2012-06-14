/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSArray, MCAsset, NSAttributedString, MCContainerEffect, NSString;

@interface MCText : MCObject {
	unsigned mIndex;	// 12 = 0xc
	NSArray *mStringAttributes;	// 16 = 0x10
	MCAsset *mAsset;	// 20 = 0x14
	NSString *mKeyInAsset;	// 24 = 0x18
	MCContainerEffect *mContainer;	// 28 = 0x1c
}
@property(retain, nonatomic) MCAsset *asset;	// G=0x32198251; S=0x32198325; 
@property(copy) NSAttributedString *attributedString;	// G=0x32198475; S=0x32198485; @dynamic
@property(assign) MCContainerEffect *container;	// G=0x32198539; S=0x32198549; @synthesize=mContainer
@property(assign, nonatomic) unsigned index;	// G=0x321984e1; S=0x321984f1; @synthesize=mIndex
@property(copy) NSString *keyInAsset;	// G=0x32198501; S=0x32198515; @synthesize=mKeyInAsset
@property(retain) NSArray *stringAttributes;	// G=0x32198559; S=0x3219856d; @synthesize=mStringAttributes
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32197f11
// declared property getter: - (id)asset;	// 0x32198251
// declared property getter: - (id)attributedString;	// 0x32198475
- (id)attributedStringWithCTAttributes;	// 0x32198449
// declared property getter: - (id)container;	// 0x32198539
- (void)demolish;	// 0x32198055
- (id)imprint;	// 0x32198115
// declared property getter: - (unsigned)index;	// 0x321984e1
// declared property getter: - (id)keyInAsset;	// 0x32198501
// declared property setter: - (void)setAsset:(id)asset;	// 0x32198325
// declared property setter: - (void)setAttributedString:(id)string;	// 0x32198485
// declared property setter: - (void)setContainer:(id)container;	// 0x32198549
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x321984f1
// declared property setter: - (void)setKeyInAsset:(id)asset;	// 0x32198515
// declared property setter: - (void)setStringAttributes:(id)attributes;	// 0x3219856d
// declared property getter: - (id)stringAttributes;	// 0x32198559
@end

