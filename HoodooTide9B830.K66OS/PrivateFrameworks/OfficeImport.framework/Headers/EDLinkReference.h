/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDLinkReference : NSObject {
@private
	unsigned mLinkIndex;	// 4 = 0x4
	unsigned mFirstSheetIndex;	// 8 = 0x8
	unsigned mLastSheetIndex;	// 12 = 0xc
}
@property(assign) unsigned firstSheetIndex;	// G=0x31256559; S=0x31334279; converted property
@property(assign) unsigned lastSheetIndex;	// G=0x31256569; S=0x31334289; converted property
@property(assign) unsigned linkIndex;	// G=0x312564d5; S=0x31334299; converted property
+ (id)linkReferenceWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x311c844d
- (id)init;	// 0x313342f1
- (id)initWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x311c84a5
// converted property getter: - (unsigned)firstSheetIndex;	// 0x31256559
- (unsigned)hash;	// 0x3133434d
- (BOOL)isEqual:(id)equal;	// 0x31334379
- (BOOL)isEqualToLinkReference:(id)linkReference;	// 0x313342a9
// converted property getter: - (unsigned)lastSheetIndex;	// 0x31256569
// converted property getter: - (unsigned)linkIndex;	// 0x312564d5
// converted property setter: - (void)setFirstSheetIndex:(unsigned)index;	// 0x31334279
// converted property setter: - (void)setLastSheetIndex:(unsigned)index;	// 0x31334289
// converted property setter: - (void)setLinkIndex:(unsigned)index;	// 0x31334299
@end

