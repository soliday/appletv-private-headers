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
@property(assign) int databaseVersion;	// G=0x3627ad95; S=0x3627ada5; converted property
@property(retain) NSDictionary *fullMetadata;	// G=0x3627adb5; S=0x3627ae01; converted property
@property(retain) NSMutableDictionary *mapData;	// G=0x3627adf1; S=0x3627ae49; converted property
@property(assign) unsigned long long primaryKeyGeneration;	// G=0x3627adc5; S=0x3627addd; converted property
- (BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id *)error;	// 0x3627b11d
- (void)clearCurrentValues;	// 0x3627ae91
// converted property getter: - (int)databaseVersion;	// 0x3627ad95
- (void)dealloc;	// 0x3627b089
// converted property getter: - (id)fullMetadata;	// 0x3627adb5
// converted property getter: - (id)mapData;	// 0x3627adf1
// converted property getter: - (unsigned long long)primaryKeyGeneration;	// 0x3627adc5
- (BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id *)error;	// 0x3627c6f9
- (BOOL)readFromFile:(id)file error:(id *)error;	// 0x3627c4ed
- (BOOL)readMetadataFromFile:(id)file error:(id *)error;	// 0x3627b69d
// converted property setter: - (void)setDatabaseVersion:(int)version;	// 0x3627ada5
// converted property setter: - (void)setFullMetadata:(id)metadata;	// 0x3627ae01
// converted property setter: - (void)setMapData:(id)data;	// 0x3627ae49
// converted property setter: - (void)setPrimaryKeyGeneration:(unsigned long long)generation;	// 0x3627addd
- (BOOL)writeMetadataToFile:(id)file error:(id *)error;	// 0x3627beb1
- (BOOL)writeToFile:(id)file error:(id *)error;	// 0x3627aeed
@end

