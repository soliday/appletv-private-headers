/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDProtection, EDResources;

__attribute__((visibility("hidden")))
@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mParentIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mFontIndex;	// 16 = 0x10
	unsigned mFillIndex;	// 20 = 0x14
	unsigned mAlignmentInfoIndex;	// 24 = 0x18
	unsigned mBordersIndex;	// 28 = 0x1c
	EDProtection *mProtection;	// 32 = 0x20
	unsigned mIndex;	// 36 = 0x24
	bool mContentFormatOverridden;	// 40 = 0x28
	bool mFontOverridden;	// 41 = 0x29
	bool mFillOverridden;	// 42 = 0x2a
	bool mAlignmentInfoOverridden;	// 43 = 0x2b
	bool mBordersOverridden;	// 44 = 0x2c
	bool mProtectionOverridden;	// 45 = 0x2d
	bool mDoNotModify;	// 46 = 0x2e
}
@property(retain) id alignmentInfo;	// G=0x3446fdd9; S=0x344534a5; converted property
@property(assign) unsigned alignmentInfoIndex;	// G=0x345c6471; S=0x345c6481; converted property
@property(assign, getter=isAlignmentInfoOverridden) bool alignmentInfoOverridden;	// G=0x34470415; S=0x34454295; converted property
@property(retain) id borders;	// G=0x344727d9; S=0x34453d2d; converted property
@property(assign) unsigned bordersIndex;	// G=0x345c6451; S=0x345182b1; converted property
@property(assign, getter=isBordersOverridden) bool bordersOverridden;	// G=0x3446fc79; S=0x344542b5; converted property
@property(retain) id contentFormat;	// G=0x3447190d; S=0x345c65a5; converted property
@property(assign) unsigned contentFormatId;	// G=0x344718fd; S=0x34454241; converted property
@property(assign, getter=isContentFormatOverridden) bool contentFormatOverridden;	// G=0x344718ed; S=0x34454315; converted property
@property(retain) id fill;	// G=0x3446fc89; S=0x34454051; converted property
@property(assign) unsigned fillIndex;	// G=0x345c6461; S=0x345182e5; converted property
@property(assign, getter=isFillOverridden) bool fillOverridden;	// G=0x345c6401; S=0x344542d5; converted property
@property(retain) id font;	// G=0x3445f8cd; S=0x3456e7a1; converted property
@property(assign) unsigned fontIndex;	// G=0x345c6431; S=0x34453155; converted property
@property(assign, getter=isFontOverridden) bool fontOverridden;	// G=0x3447afcd; S=0x34454275; converted property
@property(assign) unsigned index;	// G=0x3446eea5; S=0x34454391; converted property
@property(retain) id parent;	// G=0x345c655d; S=0x345c6501; converted property
@property(assign) unsigned parentIndex;	// G=0x345c6441; S=0x34452f85; converted property
@property(retain) id protection;	// G=0x345c6421; S=0x344541dd; converted property
@property(assign, getter=isProtectionOverridden) bool protectionOverridden;	// G=0x345c6411; S=0x344542f5; converted property
+ (id)styleWithResources:(id)resources;	// 0x345c64b5
- (id)initWithResources:(id)resources;	// 0x34452dad
// converted property getter: - (id)alignmentInfo;	// 0x3446fdd9
// converted property getter: - (unsigned)alignmentInfoIndex;	// 0x345c6471
// converted property getter: - (id)borders;	// 0x344727d9
// converted property getter: - (unsigned)bordersIndex;	// 0x345c6451
// converted property getter: - (id)contentFormat;	// 0x3447190d
// converted property getter: - (unsigned)contentFormatId;	// 0x344718fd
- (id)copyWithZone:(NSZone *)zone;	// 0x3456dbe5
- (void)dealloc;	// 0x34485bc9
// converted property getter: - (id)fill;	// 0x3446fc89
// converted property getter: - (unsigned)fillIndex;	// 0x345c6461
// converted property getter: - (id)font;	// 0x3445f8cd
// converted property getter: - (unsigned)fontIndex;	// 0x345c6431
- (unsigned)hash;	// 0x345c639d
// converted property getter: - (unsigned)index;	// 0x3446eea5
// converted property getter: - (bool)isAlignmentInfoOverridden;	// 0x34470415
// converted property getter: - (bool)isBordersOverridden;	// 0x3446fc79
// converted property getter: - (bool)isContentFormatOverridden;	// 0x344718ed
- (BOOL)isEqual:(id)equal;	// 0x3456e849
- (BOOL)isEqualToStyle:(id)style;	// 0x3456e8a5
- (BOOL)isEquivalentToStyle:(id)style;	// 0x3456e959
// converted property getter: - (bool)isFillOverridden;	// 0x345c6401
// converted property getter: - (bool)isFontOverridden;	// 0x3447afcd
// converted property getter: - (bool)isProtectionOverridden;	// 0x345c6411
// converted property getter: - (id)parent;	// 0x345c655d
// converted property getter: - (unsigned)parentIndex;	// 0x345c6441
// converted property getter: - (id)protection;	// 0x345c6421
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x344534a5
// converted property setter: - (void)setAlignmentInfoIndex:(unsigned)index;	// 0x345c6481
// converted property setter: - (void)setAlignmentInfoOverridden:(bool)overridden;	// 0x34454295
// converted property setter: - (void)setBorders:(id)borders;	// 0x34453d2d
// converted property setter: - (void)setBordersIndex:(unsigned)index;	// 0x345182b1
// converted property setter: - (void)setBordersOverridden:(bool)overridden;	// 0x344542b5
// converted property setter: - (void)setContentFormat:(id)format;	// 0x345c65a5
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x34454241
// converted property setter: - (void)setContentFormatOverridden:(bool)overridden;	// 0x34454315
- (void)setDoNotModify:(bool)modify;	// 0x34454381
// converted property setter: - (void)setFill:(id)fill;	// 0x34454051
// converted property setter: - (void)setFillIndex:(unsigned)index;	// 0x345182e5
// converted property setter: - (void)setFillOverridden:(bool)overridden;	// 0x344542d5
// converted property setter: - (void)setFont:(id)font;	// 0x3456e7a1
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x34453155
// converted property setter: - (void)setFontOverridden:(bool)overridden;	// 0x34454275
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x34454391
// converted property setter: - (void)setParent:(id)parent;	// 0x345c6501
// converted property setter: - (void)setParentIndex:(unsigned)index;	// 0x34452f85
// converted property setter: - (void)setProtection:(id)protection;	// 0x344541dd
// converted property setter: - (void)setProtectionOverridden:(bool)overridden;	// 0x344542f5
@end

