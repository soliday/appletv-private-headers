/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"

@class OADColor, OADLineJoin, OADLineEnd, OADFill, OADDash;

__attribute__((visibility("hidden")))
@interface OADStroke : OADProperties <NSCopying> {
@private
	OADColor *mColor;	// 12 = 0xc
	OADFill *mFill;	// 16 = 0x10
	OADDash *mDash;	// 20 = 0x14
	OADLineJoin *mJoin;	// 24 = 0x18
	OADLineEnd *mHead;	// 28 = 0x1c
	OADLineEnd *mTail;	// 32 = 0x20
	float mWidth;	// 36 = 0x24
	unsigned char mCap;	// 40 = 0x28
	unsigned char mCompoundType;	// 41 = 0x29
	unsigned char mPenAlignment;	// 42 = 0x2a
	unsigned mIsColorOverridden : 1;	// 43 = 0x2b
	unsigned mIsCompoundTypeOverridden : 1;	// 43 = 0x2b
	unsigned mIsCapOverridden : 1;	// 43 = 0x2b
	unsigned mIsWidthOverridden : 1;	// 43 = 0x2b
	unsigned mIsJoinOverridden : 1;	// 43 = 0x2b
	unsigned mIsDashOverridden : 1;	// 43 = 0x2b
	unsigned mIsFillOverridden : 1;	// 43 = 0x2b
	unsigned mIsPenAlignmentOverridden : 1;	// 43 = 0x2b
}
@property(assign) int cap;	// G=0x319733e1; S=0x3196650d; converted property
@property(retain) id color;	// G=0x319731f9; S=0x31965c79; converted property
@property(assign) int compoundType;	// G=0x31960261; S=0x319665b5; converted property
@property(retain) id dash;	// G=0x31960199; S=0x31965fcd; converted property
@property(retain) id fill;	// G=0x318f74d1; S=0x31965e11; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x31965601; S=0x31ab748d; @synthesize=mHead
@property(retain) id join;	// G=0x31973305; S=0x319660c1; converted property
@property(assign) int penAlignment;	// G=0x31ab6fed; S=0x31a0b329; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x31965611; S=0x31ab74b5; @synthesize=mTail
@property(assign) float width;	// G=0x319600fd; S=0x31966475; converted property
+ (id)blackStroke;	// 0x31ab7019
+ (id)defaultProperties;	// 0x31965409
+ (id)nullStroke;	// 0x31a0af21
- (id)init;	// 0x3196537d
- (id)initWithDefaults;	// 0x31a95cc9
// converted property getter: - (int)cap;	// 0x319733e1
// converted property getter: - (id)color;	// 0x319731f9
// converted property getter: - (int)compoundType;	// 0x31960261
- (id)copyWithZone:(NSZone *)zone;	// 0x31a0af35
// converted property getter: - (id)dash;	// 0x31960199
- (void)dealloc;	// 0x318f16a5
// converted property getter: - (id)fill;	// 0x318f74d1
- (unsigned)hash;	// 0x31ab6e59
// declared property getter: - (id)head;	// 0x31965601
- (BOOL)isCapOverridden;	// 0x319733a9
- (BOOL)isColorOverridden;	// 0x319731c1
- (BOOL)isCompoundTypeOverridden;	// 0x31960229
- (BOOL)isDashOverridden;	// 0x31960161
- (BOOL)isEqual:(id)equal;	// 0x31972d95
- (BOOL)isFillOverridden;	// 0x318f7499
- (BOOL)isJoinOverridden;	// 0x319732cd
- (BOOL)isPenAlignmentOverridden;	// 0x3197340d
- (BOOL)isWidthOverridden;	// 0x31960129
// converted property getter: - (id)join;	// 0x31973305
// converted property getter: - (int)penAlignment;	// 0x31ab6fed
// converted property setter: - (void)setCap:(int)cap;	// 0x3196650d
// converted property setter: - (void)setColor:(id)color;	// 0x31965c79
// converted property setter: - (void)setCompoundType:(int)type;	// 0x319665b5
// converted property setter: - (void)setDash:(id)dash;	// 0x31965fcd
// converted property setter: - (void)setFill:(id)fill;	// 0x31965e11
// declared property setter: - (void)setHead:(id)head;	// 0x31ab748d
// converted property setter: - (void)setJoin:(id)join;	// 0x319660c1
- (void)setParent:(id)parent;	// 0x3196544d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x31a0b329
- (void)setStyleColor:(id)color;	// 0x31a5a915
// declared property setter: - (void)setTail:(id)tail;	// 0x31ab74b5
// converted property setter: - (void)setWidth:(float)width;	// 0x31966475
// declared property getter: - (id)tail;	// 0x31965611
// converted property getter: - (float)width;	// 0x319600fd
@end
