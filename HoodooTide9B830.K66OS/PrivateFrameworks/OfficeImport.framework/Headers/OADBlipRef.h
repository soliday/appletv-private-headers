/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, OADBlip, NSString;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying> {
@private
	int mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x31179379; S=0x31237495; converted property
@property(assign) long index;	// G=0x311aaa6d; S=0x31380d91; converted property
@property(retain) id name;	// G=0x312793ad; S=0x31380ead; converted property
+ (int)blipTypeForExtension:(id)extension;	// 0x31278fc9
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x31381069
- (id)init;	// 0x3127dc29
- (id)initWithIndex:(long)index name:(id)name;	// 0x311a6691
- (void)addEffect:(id)effect;	// 0x311aaf3d
// converted property getter: - (id)blip;	// 0x31179379
- (id)copyWithZone:(NSZone *)zone;	// 0x312cd325
- (void)dealloc;	// 0x31170ef9
- (id)effectAtIndex:(unsigned)index;	// 0x312cd6a1
- (unsigned)effectCount;	// 0x312cd681
- (id)effects;	// 0x31380dcd
- (unsigned)hash;	// 0x313811bd
// converted property getter: - (long)index;	// 0x311aaa6d
- (BOOL)isEqual:(id)equal;	// 0x313810f5
- (BOOL)isNull;	// 0x31380da1
// converted property getter: - (id)name;	// 0x312793ad
- (void)removeEffectAtIndex:(unsigned)index;	// 0x31380ef1
// converted property setter: - (void)setBlip:(id)blip;	// 0x31237495
- (void)setFilename:(id)filename data:(id)data;	// 0x31380f15
- (void)setFilenameAndDelayedContext:(id)context context:(id)context2 targetSize:(long)size;	// 0x313812d5
// converted property setter: - (void)setIndex:(long)index;	// 0x31380d91
// converted property setter: - (void)setName:(id)name;	// 0x31380ead
- (void)setPath:(id)path;	// 0x31381281
@end

