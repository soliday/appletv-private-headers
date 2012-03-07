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
@property(retain, nonatomic) NSNumber *bookmarkNetTime;	// G=0x35d844cd; S=0x35d844dd; @synthesize=_bookmarkNetTime
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x35d8417d; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x35d84489; S=0x35d84499; @synthesize=_eventStart
@property(retain, nonatomic) ATVFeedVideoElement *feedElement;	// G=0x35d84521; S=0x35d84531; @synthesize=_feedElement
@property(readonly, assign, nonatomic) ATVInterstitialGroup *interstitials;	// G=0x35d844bd; @synthesize=_interstitials
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x35d84455; S=0x35d84465; @synthesize=_merchant
@property(readonly, assign, nonatomic) NSDictionary *originalPlist;	// G=0x35d83a89; 
@property(assign, nonatomic) BOOL startFromStartDate;	// G=0x35d84501; S=0x35d84511; @synthesize=_startFromStartDate
- (id)initWithDictionary:(id)dictionary;	// 0x35d83521
- (id)initWithFeedElement:(id)feedElement;	// 0x35d830f5
- (id)_currentlyPlayingChapter;	// 0x35d84555
- (id)_fetchEventGroupAtURL:(id)url;	// 0x35d845cd
- (void)addOrReplaceChapterGroup:(id)group;	// 0x35d83ff9
// declared property getter: - (id)bookmarkNetTime;	// 0x35d844cd
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x35d84135
- (unsigned)chapterGroupCount;	// 0x35d840f5
// converted property getter: - (id)chapterGroups;	// 0x35d8417d
- (void)dealloc;	// 0x35d83a99
// declared property getter: - (id)eventStart;	// 0x35d84489
// declared property getter: - (id)feedElement;	// 0x35d84521
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x35d84115
- (id)imageProxy;	// 0x35d841b5
- (id)infoOverlayDescriptionAttributes;	// 0x35d84415
// declared property getter: - (id)interstitials;	// 0x35d844bd
- (id)mediaDescription;	// 0x35d84309
// declared property getter: - (id)merchant;	// 0x35d84455
// declared property getter: - (id)originalPlist;	// 0x35d83a89
- (id)rating;	// 0x35d8439d
- (id)resolveMediaURL;	// 0x35d83b85
// declared property setter: - (void)setBookmarkNetTime:(id)time;	// 0x35d844dd
// declared property setter: - (void)setEventStart:(id)start;	// 0x35d84499
// declared property setter: - (void)setFeedElement:(id)element;	// 0x35d84531
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x35d84465
// declared property setter: - (void)setStartFromStartDate:(BOOL)startDate;	// 0x35d84511
- (id)startDate;	// 0x35d83f8d
// declared property getter: - (BOOL)startFromStartDate;	// 0x35d84501
- (id)title;	// 0x35d84269
@end
