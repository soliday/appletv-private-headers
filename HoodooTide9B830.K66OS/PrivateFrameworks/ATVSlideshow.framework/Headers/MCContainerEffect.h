/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCActionSupport.h"
#import "MCContainer.h"

@class NSArray, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSString;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mTexts;	// 32 = 0x20
	NSMutableDictionary *mActions;	// 36 = 0x24
	NSString *mEffectID;	// 40 = 0x28
	NSMutableDictionary *mEffectAttributes;	// 44 = 0x2c
	BOOL mIsLive;	// 48 = 0x30
}
@property(readonly, assign) NSDictionary *actions;	// G=0x32183bb1; 
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x32183d01; 
@property(readonly, assign, nonatomic) unsigned countOfSlides;	// G=0x3217fb85; 
@property(readonly, assign, nonatomic) unsigned countOfTexts;	// G=0x32181b41; 
@property(copy) NSDictionary *effectAttributes;	// G=0x3218358d; S=0x32183655; 
@property(copy) NSString *effectID;	// G=0x32183761; S=0x32183775; @synthesize=mEffectID
@property(assign, nonatomic) BOOL isLive;	// G=0x32183799; S=0x321837a9; @synthesize=mIsLive
@property(readonly, assign, nonatomic) unsigned nextAvailableSlideIndex;	// G=0x3217fc4d; 
@property(readonly, assign, nonatomic) unsigned nextAvailableTextIndex;	// G=0x32181c09; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0x3217f9b9; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x3218198d; 
@property(readonly, assign) NSSet *slides;	// G=0x3217f885; 
@property(readonly, assign) NSSet *texts;	// G=0x32181859; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3217ec11
- (void)initActionsWithImprints:(id)imprints;	// 0x321837b9
- (id)initFromScratchWithMontage:(id)montage;	// 0x3217eccd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3217ed49
- (id)actionForKey:(id)key;	// 0x32183e05
// declared property getter: - (id)actions;	// 0x32183bb1
- (id)addSlide;	// 0x3218003d
- (id)addSlideForAsset:(id)asset;	// 0x32180779
- (id)addSlideForContainer:(id)container;	// 0x32180d85
- (id)addSlides:(int)slides;	// 0x32180069
- (id)addSlidesForAssets:(id)assets;	// 0x32180809
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x32182091
- (id)addTextForAttributedString:(id)attributedString;	// 0x32181ff9
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x321820fd
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x3218205d
// declared property getter: - (unsigned)countOfActions;	// 0x32183d01
// declared property getter: - (unsigned)countOfSlides;	// 0x3217fb85
// declared property getter: - (unsigned)countOfTexts;	// 0x32181b41
- (void)demolish;	// 0x3217f141
- (void)demolishActions;	// 0x321838f5
- (id)effectAttributeForKey:(id)key;	// 0x3218332d
// declared property getter: - (id)effectAttributes;	// 0x3218358d
// declared property getter: - (id)effectID;	// 0x32183761
- (id)imprint;	// 0x3217f521
- (id)imprintsForActions;	// 0x32183abd
- (id)insertSlideAtIndex:(int)index;	// 0x321803a5
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x3218083d
- (id)insertSlideForContainer:(id)container atIndex:(unsigned)index;	// 0x32180db9
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x321808bd
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x321826d1
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x32182139
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x32182729
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x32182189
// declared property getter: - (BOOL)isLive;	// 0x32183799
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x321815c9
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x321830c5
// declared property getter: - (unsigned)nextAvailableSlideIndex;	// 0x3217fc4d
// declared property getter: - (unsigned)nextAvailableTextIndex;	// 0x32181c09
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3217f811
// declared property getter: - (id)orderedSlides;	// 0x3217f9b9
// declared property getter: - (id)orderedTexts;	// 0x3218198d
- (void)removeActionForKey:(id)key;	// 0x3218409d
- (void)removeAllActions;	// 0x321841ad
- (void)removeAllSlides;	// 0x32181575
- (void)removeAllTexts;	// 0x32183071
- (void)removeSlidesAtIndices:(id)indices;	// 0x321811dd
- (void)removeTextsAtIndices:(id)indices;	// 0x32182c81
- (void)setAction:(id)action forKey:(id)key;	// 0x32183f39
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x32183419
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x32183655
// declared property setter: - (void)setEffectID:(id)anId;	// 0x32183775
// declared property setter: - (void)setIsLive:(BOOL)live;	// 0x321837a9
- (id)slideAtIndex:(unsigned)index;	// 0x3217fe3d
// declared property getter: - (id)slides;	// 0x3217f885
- (id)textAtIndex:(unsigned)index;	// 0x32181df9
// declared property getter: - (id)texts;	// 0x32181859
@end
