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
- (id)init;	// 0x311a1a31
- (void)addBgFill:(id)fill;	// 0x3126d959
- (void)addEffects:(id)effects;	// 0x3126d935
- (void)addFill:(id)fill;	// 0x3126c6e5
- (void)addStroke:(id)stroke;	// 0x3126d365
- (id)bgFillAtIndex:(unsigned)index;	// 0x31291645
- (unsigned)bgFillCount;	// 0x3138ac75
- (void)dealloc;	// 0x311710d9
- (id)effectsAtIndex:(unsigned)index;	// 0x3129dc49
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x3138abed
- (unsigned)effectsCount;	// 0x3138abcd
- (id)fillAtIndex:(unsigned)index;	// 0x3129537d
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x3138aafd
- (unsigned)fillCount;	// 0x3138aadd
- (id)strokeAtIndex:(unsigned)index;	// 0x3129dbd5
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x3138ab75
- (unsigned)strokeCount;	// 0x3138ab55
@end

