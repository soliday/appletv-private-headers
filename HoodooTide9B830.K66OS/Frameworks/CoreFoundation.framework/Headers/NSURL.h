/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString;

@interface NSURL : NSObject <NSCoding, NSCopying> {
	NSString *_urlString;	// 4 = 0x4
	NSURL *_baseURL;	// 8 = 0x8
	void *_clients;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (id)URLByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x327ada3d
+ (id)bookmarkDataWithContentsOfURL:(id)url error:(id *)error;	// 0x327adb29
+ (id)resourceValuesForKeys:(id)keys fromBookmarkData:(id)bookmarkData;	// 0x327adab9
+ (BOOL)writeBookmarkData:(id)data toURL:(id)url options:(unsigned)options error:(id *)error;	// 0x327adaf1
- (id)initByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x327ad849
- (id)bookmarkDataWithAliasRecord:(id)aliasRecord;	// 0x327adb7d
- (id)bookmarkDataWithOptions:(unsigned)options includingResourceValuesForKeys:(id)keys relativeToURL:(id)url error:(id *)error;	// 0x327ad7bd
- (BOOL)checkResourceIsReachableAndReturnError:(id *)error;	// 0x327ad649
- (id)filePathURL;	// 0x327ad721
- (id)fileReferenceURL;	// 0x327ad69d
- (BOOL)getResourceValue:(out id *)value forKey:(id)key error:(out id *)error;	// 0x3273db7d
- (BOOL)isFileReferenceURL;	// 0x32739129
- (id)resourceValuesForKeys:(id)keys error:(id *)error;	// 0x327ad519
- (BOOL)setResourceValue:(id)value forKey:(id)key error:(id *)error;	// 0x327ad585
- (BOOL)setResourceValues:(id)values error:(id *)error;	// 0x327ad5f1
@end

