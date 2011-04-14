/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject {
@private
	NSMutableArray *mFills;	// 4 = 0x4
	NSMutableArray *mStrokes;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	NSMutableArray *mBgFills;	// 16 = 0x10
}
- (id)init;	// 0x319aa0ed
- (void)addBgFill:(id)fill;	// 0x31a314f9
- (void)addEffects:(id)effects;	// 0x31a314d9
- (void)addFill:(id)fill;	// 0x31a30415
- (void)addStroke:(id)stroke;	// 0x31a30f95
- (id)bgFillAtIndex:(unsigned)index;	// 0x31a51671
- (unsigned)bgFillCount;	// 0x31ab74dd
- (void)dealloc;	// 0x318f2231
- (id)effectsAtIndex:(unsigned)index;	// 0x31a5a9c1
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x31ab74fd
- (unsigned)effectsCount;	// 0x31ab7571
- (id)fillAtIndex:(unsigned)index;	// 0x31a54c99
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x31ab75fd
- (unsigned)fillCount;	// 0x31ab7649
- (id)strokeAtIndex:(unsigned)index;	// 0x31a5a8d1
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x31ab7591
- (unsigned)strokeCount;	// 0x31ab75dd
@end
