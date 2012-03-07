/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface PKPaper : NSObject {
@private
	NSString *name;	// 4 = 0x4
	NSString *_baseName;	// 8 = 0x8
	int width;	// 12 = 0xc
	int height;	// 16 = 0x10
	int leftMargin;	// 20 = 0x14
	int topMargin;	// 24 = 0x18
	int rightMargin;	// 28 = 0x1c
	int bottomMargin;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *baseName;	// G=0x30561a55; @dynamic
@property(assign, nonatomic) int bottomMargin;	// G=0x305610d9; S=0x305610e9; @synthesize
@property(assign, nonatomic) int height;	// G=0x30561159; S=0x30561169; @synthesize
@property(readonly, assign, nonatomic) float imageableArea;	// G=0x30561c5d; @dynamic
@property(readonly, assign, nonatomic) CGRect imageableAreaRect;	// G=0x30561d39; 
@property(readonly, assign, nonatomic) BOOL isBorderless;	// G=0x30561bf9; 
@property(assign, nonatomic) int leftMargin;	// G=0x30561139; S=0x30561149; @synthesize
@property(readonly, retain, nonatomic) NSString *localizedName;	// G=0x3056196d; @dynamic
@property(retain, nonatomic) NSString *name;	// G=0x30561199; S=0x30561759; @synthesize
@property(readonly, assign, nonatomic) CGSize paperSize;	// G=0x30561e69; 
@property(assign, nonatomic) int rightMargin;	// G=0x305610f9; S=0x30561109; @synthesize
@property(assign, nonatomic) int topMargin;	// G=0x30561119; S=0x30561129; @synthesize
@property(assign, nonatomic) int width;	// G=0x30561179; S=0x30561189; @synthesize
+ (id)documentPapers;	// 0x30561281
+ (id)generic3_5x5Paper;	// 0x305616a1
+ (id)generic4x6Paper;	// 0x30561629
+ (id)genericA4Paper;	// 0x30561739
+ (id)genericA6Paper;	// 0x305615b1
+ (id)genericBorderlessWithName:(id)name;	// 0x3056140d
+ (id)genericHagakiPaper;	// 0x30561539
+ (id)genericLetterPaper;	// 0x30561719
+ (id)genericPRC32KPaper;	// 0x305614c1
+ (id)genericWithName:(id)name;	// 0x30561489
+ (id)photoPapers;	// 0x305612ed
+ (BOOL)willAdjustMarginsForDuplexMode:(id)duplexMode;	// 0x305613e5
- (id)initWithPWGSize:(pwg_size_s *)pwgsize localizedName:(id)name codeName:(id)name3;	// 0x30561edd
- (id)initWithWidth:(int)width Height:(int)height Left:(int)left Top:(int)top Right:(int)right Bottom:(int)bottom localizedName:(id)name codeName:(id)name8;	// 0x305611a9
// declared property getter: - (id)baseName;	// 0x30561a55
// declared property getter: - (int)bottomMargin;	// 0x305610d9
- (void)dealloc;	// 0x305619f5
- (unsigned)hash;	// 0x30561781
// declared property getter: - (int)height;	// 0x30561159
// declared property getter: - (float)imageableArea;	// 0x30561c5d
// declared property getter: - (CGRect)imageableAreaRect;	// 0x30561d39
// declared property getter: - (BOOL)isBorderless;	// 0x30561bf9
- (BOOL)isEqual:(id)equal;	// 0x305617a9
// declared property getter: - (int)leftMargin;	// 0x30561139
// declared property getter: - (id)localizedName;	// 0x3056196d
// declared property getter: - (id)name;	// 0x30561199
- (id)nameWithoutSuffixes:(id)suffixes;	// 0x30561b5d
// declared property getter: - (CGSize)paperSize;	// 0x30561e69
- (id)paperWithMarginsAdjustedForDuplexMode:(id)duplexMode;	// 0x3056182d
// declared property getter: - (int)rightMargin;	// 0x305610f9
// declared property setter: - (void)setBottomMargin:(int)margin;	// 0x305610e9
// declared property setter: - (void)setHeight:(int)height;	// 0x30561169
// declared property setter: - (void)setLeftMargin:(int)margin;	// 0x30561149
// declared property setter: - (void)setName:(id)name;	// 0x30561759
// declared property setter: - (void)setRightMargin:(int)margin;	// 0x30561109
// declared property setter: - (void)setTopMargin:(int)margin;	// 0x30561129
// declared property setter: - (void)setWidth:(int)width;	// 0x30561189
// declared property getter: - (int)topMargin;	// 0x30561119
// declared property getter: - (int)width;	// 0x30561179
@end
