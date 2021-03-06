/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInterstitialGroupProvider.h"
#import "BRXMLMediaAsset.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRChapterGroupProvider.h"

@class NSDate, ATVInterstitialGroup, ATVMerchant, NSMutableArray, ATVFeedDocument, ATVFeedVideoElement, NSDictionary, NSNumber, ATVVideoAssetUpdater;

@interface ATVVideoAsset : BRXMLMediaAsset <BRMediaAssetDerivesMediaURL, BRChapterGroupProvider, ATVInterstitialGroupProvider> {
@private
	NSDictionary *_data;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	NSDate *_eventStart;	// 20 = 0x14
	NSMutableArray *_chapterGroups;	// 24 = 0x18
	ATVVideoAssetUpdater *_updater;	// 28 = 0x1c
	ATVFeedDocument *_feedDocument;	// 32 = 0x20
	ATVInterstitialGroup *_interstitials;	// 36 = 0x24
	NSNumber *_bookmarkNetTime;	// 40 = 0x28
	BOOL _startFromStartDate;	// 44 = 0x2c
	ATVFeedVideoElement *_feedElement;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *bookmarkNetTime;	// G=0x32ffe34d; S=0x32ffe35d; @synthesize=_bookmarkNetTime
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x32ffdffd; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x32ffe309; S=0x32ffe319; @synthesize=_eventStart
@property(retain, nonatomic) ATVFeedVideoElement *feedElement;	// G=0x32ffe3a1; S=0x32ffe3b1; @synthesize=_feedElement
@property(readonly, assign, nonatomic) ATVInterstitialGroup *interstitials;	// G=0x32ffe33d; @synthesize=_interstitials
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x32ffe2d5; S=0x32ffe2e5; @synthesize=_merchant
@property(readonly, assign, nonatomic) NSDictionary *originalPlist;	// G=0x32ffd909; 
@property(assign, nonatomic) BOOL startFromStartDate;	// G=0x32ffe381; S=0x32ffe391; @synthesize=_startFromStartDate
- (id)initWithDictionary:(id)dictionary;	// 0x32ffd3a1
- (id)initWithFeedElement:(id)feedElement;	// 0x32ffcf75
- (id)_currentlyPlayingChapter;	// 0x32ffe3d5
- (id)_fetchEventGroupAtURL:(id)url;	// 0x32ffe44d
- (void)addOrReplaceChapterGroup:(id)group;	// 0x32ffde79
// declared property getter: - (id)bookmarkNetTime;	// 0x32ffe34d
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x32ffdfb5
- (unsigned)chapterGroupCount;	// 0x32ffdf75
// converted property getter: - (id)chapterGroups;	// 0x32ffdffd
- (void)dealloc;	// 0x32ffd919
// declared property getter: - (id)eventStart;	// 0x32ffe309
// declared property getter: - (id)feedElement;	// 0x32ffe3a1
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x32ffdf95
- (id)imageProxy;	// 0x32ffe035
- (id)infoOverlayDescriptionAttributes;	// 0x32ffe295
// declared property getter: - (id)interstitials;	// 0x32ffe33d
- (id)mediaDescription;	// 0x32ffe189
// declared property getter: - (id)merchant;	// 0x32ffe2d5
// declared property getter: - (id)originalPlist;	// 0x32ffd909
- (id)rating;	// 0x32ffe21d
- (id)resolveMediaURL;	// 0x32ffda05
// declared property setter: - (void)setBookmarkNetTime:(id)time;	// 0x32ffe35d
// declared property setter: - (void)setEventStart:(id)start;	// 0x32ffe319
// declared property setter: - (void)setFeedElement:(id)element;	// 0x32ffe3b1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32ffe2e5
// declared property setter: - (void)setStartFromStartDate:(BOOL)startDate;	// 0x32ffe391
- (id)startDate;	// 0x32ffde0d
// declared property getter: - (BOOL)startFromStartDate;	// 0x32ffe381
- (id)title;	// 0x32ffe0e9
@end

