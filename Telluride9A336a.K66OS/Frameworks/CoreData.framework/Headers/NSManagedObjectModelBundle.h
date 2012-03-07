/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject {
@private
	NSBundle *_bundle;	// 4 = 0x4
	NSDictionary *_versionInfoDictionary;	// 8 = 0x8
}
@property(readonly, retain) NSBundle *bundle;	// G=0x322f3e49; converted property
@property(readonly, retain) NSDictionary *versionInfoDictionary;	// G=0x322f3e8d; converted property
- (id)initWithPath:(id)path;	// 0x322f3b7d
- (id)_modelForVersionHashes:(id)versionHashes;	// 0x3238ee65
// converted property getter: - (id)bundle;	// 0x322f3e49
- (id)currentVersion;	// 0x322f3e59
- (id)currentVersionURL;	// 0x322f3e9d
- (void)dealloc;	// 0x322f51b1
- (id)modelVersions;	// 0x3238f725
- (id)optimizedVersionURL;	// 0x322f3dd5
- (id)urlForModelVersionWithName:(id)name;	// 0x322f3ecd
- (id)versionHashInfo;	// 0x3238f74d
// converted property getter: - (id)versionInfoDictionary;	// 0x322f3e8d
@end
