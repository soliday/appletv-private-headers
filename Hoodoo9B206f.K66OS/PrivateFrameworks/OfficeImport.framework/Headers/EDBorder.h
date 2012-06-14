/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDColorReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDBorder : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x3456e2e5; S=0x345c0e7d; converted property
@property(assign) int type;	// G=0x34472c79; S=0x345c0e6d; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x345c0e8d
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x345c0ec1
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x34453895
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x34453785
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x344537c5
- (id)initWithResources:(id)resources;	// 0x34453821
- (id)color;	// 0x34472dc1
- (id)colorReference;	// 0x3456e2d5
- (void)dealloc;	// 0x3445b495
// converted property getter: - (int)diagonalType;	// 0x3456e2e5
- (unsigned)hash;	// 0x345c0f2d
- (BOOL)isEqual:(id)equal;	// 0x34453ae5
- (BOOL)isEqualToBorder:(id)border;	// 0x34453b41
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x345c0e7d
// converted property setter: - (void)setType:(int)type;	// 0x345c0e6d
// converted property getter: - (int)type;	// 0x34472c79
@end
