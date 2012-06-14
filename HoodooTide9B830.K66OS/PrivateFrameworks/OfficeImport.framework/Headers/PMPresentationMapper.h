/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, PDPresentation, OIXMLDocument, OIXMLElement, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
@private
	int mWidth;	// 8 = 0x8
	PDPresentation *mPresentation;	// 12 = 0xc
	NSMutableArray *mSlideNames;	// 16 = 0x10
	NSMutableArray *mSlideGuids;	// 20 = 0x14
	NSString *mResourceUrlPrefix;	// 24 = 0x18
	NSString *mResourceUrlProtocol;	// 28 = 0x1c
	CMArchiveManager *mArchiver;	// 32 = 0x20
	OIXMLDocument *mXhtmlDoc;	// 36 = 0x24
	OIXMLElement *mBodyElement;	// 40 = 0x28
	unsigned mNextCommit;	// 44 = 0x2c
	unsigned mCurrentSlide;	// 48 = 0x30
	BOOL mHasPushedFirstSlides;	// 52 = 0x34
	float mSlideOriginY;	// 56 = 0x38
}
- (id)initWithPDPresentation:(id)pdpresentation archiver:(id)archiver;	// 0x311a947d
- (void)_pushEmptySlideWithMessage:(id)message;	// 0x313dbe3d
- (id)archiver;	// 0x310e84dd
- (id)blipAtIndex:(unsigned)index;	// 0x311aaad9
- (void)dealloc;	// 0x31174bcd
- (id)documentTitle;	// 0x311a9d15
- (void)finishMappingWithState:(id)state;	// 0x3116fd11
- (void)mapDefaultCssStylesAt:(id)at;	// 0x311a9e65
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x3116de31
- (CGSize)pageSizeForDevice;	// 0x3117001d
- (void)setHtmlDocumentSizeInArchiver;	// 0x3116ff95
- (CGSize)slideSize;	// 0x310eca11
- (void)startMappingWithState:(id)state;	// 0x311a9791
@end

