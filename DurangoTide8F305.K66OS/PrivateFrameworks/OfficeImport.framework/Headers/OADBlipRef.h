/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSMutableArray, NSString, OADBlip;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying> {
@private
	int mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x34439959; S=0x344d2eb1; converted property
@property(assign) long index;	// G=0x34439969; S=0x34586e1d; converted property
@property(retain) id name;	// G=0x34513b45; S=0x34587529; converted property
+ (int)blipTypeForExtension:(id)extension;	// 0x34513789
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x3458747d
- (id)init;	// 0x34517e0d
- (id)initWithIndex:(long)index name:(id)name;	// 0x34445811
- (void)addEffect:(id)effect;	// 0x3444e9e5
// converted property getter: - (id)blip;	// 0x34439959
- (id)copyWithZone:(NSZone *)zone;	// 0x34565975
- (void)dealloc;	// 0x343c9519
- (id)effectAtIndex:(unsigned)index;	// 0x34565c9d
- (unsigned)effectCount;	// 0x34565c7d
- (id)effects;	// 0x34586e59
- (unsigned)hash;	// 0x34439555
// converted property getter: - (long)index;	// 0x34439969
- (BOOL)isEqual:(id)equal;	// 0x345870b9
- (BOOL)isNull;	// 0x34586e2d
// converted property getter: - (id)name;	// 0x34513b45
- (void)removeEffectAtIndex:(unsigned)index;	// 0x34587509
// converted property setter: - (void)setBlip:(id)blip;	// 0x344d2eb1
- (void)setFilename:(id)filename data:(id)data;	// 0x34587351
- (void)setFilenameAndDelayedContext:(id)context context:(id)context2 targetSize:(long)size;	// 0x3458721d
// converted property setter: - (void)setIndex:(long)index;	// 0x34586e1d
// converted property setter: - (void)setName:(id)name;	// 0x34587529
- (void)setPath:(id)path;	// 0x345871d1
@end
