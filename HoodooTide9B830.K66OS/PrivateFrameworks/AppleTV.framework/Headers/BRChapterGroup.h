/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, ATVFeedEventGroupElement, NSDate, NSDictionary, ATVFeedDocument, NSString;

@interface BRChapterGroup : NSObject {
@private
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSString *_groupName;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSString *_refreshURL;	// 16 = 0x10
	unsigned _refreshIntervalInSeconds;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x32a86751; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x32a867d9; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x32a867e9; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x32a86741; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x32a86799; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x32a86761; S=0x32a86775; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x32a867b9; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x32a867c9; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x32a867a9; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x32a86615
- (id)initWithFeedElement:(id)feedElement;	// 0x32a8630d
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x32a86469
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x32a867f9
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x32a86a85
- (unsigned)chapterCount;	// 0x32a86719
// declared property getter: - (id)chapters;	// 0x32a86751
- (void)dealloc;	// 0x32a86655
// declared property getter: - (id)feedDictionary;	// 0x32a867d9
// declared property getter: - (id)feedElement;	// 0x32a867e9
// declared property getter: - (id)groupName;	// 0x32a86741
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x32a86799
// declared property getter: - (id)refreshURL;	// 0x32a86761
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x32a86775
// declared property getter: - (BOOL)showChapterMarkers;	// 0x32a867b9
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x32a867c9
// declared property getter: - (id)startDate;	// 0x32a867a9
@end
