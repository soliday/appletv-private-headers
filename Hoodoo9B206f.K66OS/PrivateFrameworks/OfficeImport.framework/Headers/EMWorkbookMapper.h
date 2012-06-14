/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, OIXMLDocument, OIXMLElement, EDWorkbook, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
@private
	unsigned mRealSheetCount;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	int mHeight;	// 16 = 0x10
	EDWorkbook *edWorkbook;	// 20 = 0x14
	NSMutableArray *mWorksheetUrls;	// 24 = 0x18
	NSMutableArray *mWorksheetNames;	// 28 = 0x1c
	NSMutableArray *mWorksheetGuids;	// 32 = 0x20
	NSString *mResourceUrlPrefix;	// 36 = 0x24
	NSString *mResourceUrlProtocol;	// 40 = 0x28
	NSString *mStyleSheetGuid;	// 44 = 0x2c
	CMArchiveManager *mArchiver;	// 48 = 0x30
	NSString *mFileName;	// 52 = 0x34
	unsigned mSheetIndex;	// 56 = 0x38
	bool mIsFirstMappedSheet;	// 60 = 0x3c
	bool mIsFrameset;	// 61 = 0x3d
	OIXMLDocument *mXhtmlDoc;	// 64 = 0x40
	OIXMLElement *mBodyElement;	// 68 = 0x44
	OIXMLDocument *mTabBarDoc;	// 72 = 0x48
	NSString *mTabBarURL;	// 76 = 0x4c
	NSMutableArray *mSheetURLs;	// 80 = 0x50
	float mTabPosition;	// 84 = 0x54
	unsigned mNumberOfMappedSheets;	// 88 = 0x58
	BOOL mHasPushedHeader;	// 92 = 0x5c
	BOOL mHasPushedFirstSheet;	// 93 = 0x5d
	BOOL mLoadingMessageVisible;	// 94 = 0x5e
}
@property(retain) id fileName;	// G=0x3466b959; S=0x3445bc41; converted property
+ (id)baseDate;	// 0x34471e11
+ (id)borderStyleCache;	// 0x344731e5
+ (id)borderWidthCache;	// 0x344734dd
+ (id)cssStyleCache;	// 0x3466bd89
+ (void)setBaseDate1904:(BOOL)a1904;	// 0x3445baf1
- (id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;	// 0x3445b859
- (id)_createMainPageAndReturnFront;	// 0x34473d61
- (id)_createStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;	// 0x3446d41d
- (id)_mainPageBack;	// 0x34484e01
- (void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;	// 0x3466ba5d
- (id)archiver;	// 0x34470291
- (id)blipAtIndex:(unsigned)index;	// 0x3447ab21
- (id)createSheetMapperWithEdSheet:(id)edSheet;	// 0x3446c1b5
- (void)dealloc;	// 0x34486c2d
- (id)documentTitle;	// 0x34473b65
// converted property getter: - (id)fileName;	// 0x3466b959
- (void)finishMappingWithState:(id)state;	// 0x34484dfd
- (BOOL)hasMultipleSheets;	// 0x3445bd85
- (bool)isMultiPage;	// 0x3466b969
- (void)mapBodyStyleAt:(id)at;	// 0x3446d651
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x3446ba71
- (CGSize)pageSizeForDevice;	// 0x3466b9e5
// converted property setter: - (void)setFileName:(id)name;	// 0x3445bc41
- (void)startMappingWithState:(id)state;	// 0x3445bc85
- (id)styleMatrix;	// 0x3466b999
- (id)workbook;	// 0x3446d0cd
@end

