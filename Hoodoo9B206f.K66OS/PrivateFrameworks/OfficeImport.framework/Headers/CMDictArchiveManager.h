/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMArchiveManager.h"

@class NSMutableString, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMDictArchiveManager : CMArchiveManager {
@private
	NSMutableString *mCssString;	// 40 = 0x28
	NSMutableDictionary *mStyleCache;	// 44 = 0x2c
	NSMutableDictionary *mResources;	// 48 = 0x30
	NSString *mPrefix;	// 52 = 0x34
	NSString *mResourceUrlProtocol;	// 56 = 0x38
	NSMutableString *mMainHtml;	// 60 = 0x3c
	NSString *mName;	// 64 = 0x40
	bool mIsFrameset;	// 68 = 0x44
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x34665489
- (id)addCssStyle:(id)style;	// 0x346656fd
- (void)addCssStyle:(id)style withName:(id)name;	// 0x346656a1
- (id)createDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x346657f9
- (id)createResourceWithName:(id)name;	// 0x34665af5
- (id)cssStylesheetString;	// 0x34665479
- (void)dealloc;	// 0x34665bb1
- (id)name;	// 0x34665459
- (void)pushCssToPath:(id)path;	// 0x346655c1
- (void)pushData:(id)data toPath:(id)path;	// 0x34665a21
- (void)pushText:(id)text toPath:(id)path;	// 0x346659ad
- (int)resourceCount;	// 0x346657d9
- (id)resourceUrlProtocol;	// 0x34665469
- (void)setIsFrameset;	// 0x34665445
@end
