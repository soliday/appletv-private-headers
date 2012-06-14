/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStoreFile : NSObject {
@private
	int _databaseVersion;	// 4 = 0x4
	NSDictionary *_fullMetadata;	// 8 = 0x8
	unsigned long long _primaryKeyGeneration;	// 12 = 0xc
	NSMutableDictionary *_mapData;	// 20 = 0x14
	NSDictionary *_storeOptions;	// 24 = 0x18
}
@property(assign) int databaseVersion;	// G=0x322a8d95; S=0x322a8da5; converted property
@property(retain) NSDictionary *fullMetadata;	// G=0x322a8db5; S=0x322a8e01; converted property
@property(retain) NSMutableDictionary *mapData;	// G=0x322a8df1; S=0x322a8e49; converted property
@property(assign) unsigned long long primaryKeyGeneration;	// G=0x322a8dc5; S=0x322a8ddd; converted property
- (BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id *)error;	// 0x322a911d
- (void)clearCurrentValues;	// 0x322a8e91
// converted property getter: - (int)databaseVersion;	// 0x322a8d95
- (void)dealloc;	// 0x322a9089
// converted property getter: - (id)fullMetadata;	// 0x322a8db5
// converted property getter: - (id)mapData;	// 0x322a8df1
// converted property getter: - (unsigned long long)primaryKeyGeneration;	// 0x322a8dc5
- (BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id *)error;	// 0x322aa6f9
- (BOOL)readFromFile:(id)file error:(id *)error;	// 0x322aa4ed
- (BOOL)readMetadataFromFile:(id)file error:(id *)error;	// 0x322a969d
// converted property setter: - (void)setDatabaseVersion:(int)version;	// 0x322a8da5
// converted property setter: - (void)setFullMetadata:(id)metadata;	// 0x322a8e01
// converted property setter: - (void)setMapData:(id)data;	// 0x322a8e49
// converted property setter: - (void)setPrimaryKeyGeneration:(unsigned long long)generation;	// 0x322a8ddd
- (BOOL)writeMetadataToFile:(id)file error:(id *)error;	// 0x322a9eb1
- (BOOL)writeToFile:(id)file error:(id *)error;	// 0x322a8eed
@end

