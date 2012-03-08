/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedVideoElement.h"

@class NSDate, NSArray, ATVFeedTrickPlayConfigElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHTTPLiveStreamingVideoElement : ATVFeedVideoElement {
@private
	BOOL _indefiniteDuration;	// 56 = 0x38
	ATVFeedTrickPlayConfigElement *_trickPlayConfig;	// 60 = 0x3c
	NSArray *_eventGroups;	// 64 = 0x40
	NSArray *_requiredEventGroups;	// 68 = 0x44
	float _bookmarkNetTimeSec;	// 72 = 0x48
	NSDate *_startDate;	// 76 = 0x4c
	BOOL _beginPlaybackAtStartDate;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x303c63a1; S=0x303c63b1; @synthesize=_beginPlaybackAtStartDate
@property(assign, nonatomic) float bookmarkNetTimeSec;	// G=0x303c634d; S=0x303c635d; @synthesize=_bookmarkNetTimeSec
@property(retain, nonatomic) NSArray *eventGroups;	// G=0x303c62e5; S=0x303c62f5; @synthesize=_eventGroups
@property(assign, nonatomic) BOOL indefiniteDuration;	// G=0x303c6291; S=0x303c62a1; @synthesize=_indefiniteDuration
@property(retain, nonatomic) NSArray *requiredEventGroups;	// G=0x303c6319; S=0x303c6329; @synthesize=_requiredEventGroups
@property(retain, nonatomic) NSDate *startDate;	// G=0x303c636d; S=0x303c637d; @synthesize=_startDate
@property(retain, nonatomic) ATVFeedTrickPlayConfigElement *trickPlayConfig;	// G=0x303c62b1; S=0x303c62c1; @synthesize=_trickPlayConfig
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303c5ecd
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x303c63a1
// declared property getter: - (float)bookmarkNetTimeSec;	// 0x303c634d
- (void)dealloc;	// 0x303c6209
// declared property getter: - (id)eventGroups;	// 0x303c62e5
// declared property getter: - (BOOL)indefiniteDuration;	// 0x303c6291
// declared property getter: - (id)requiredEventGroups;	// 0x303c6319
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x303c63b1
// declared property setter: - (void)setBookmarkNetTimeSec:(float)sec;	// 0x303c635d
// declared property setter: - (void)setEventGroups:(id)groups;	// 0x303c62f5
// declared property setter: - (void)setIndefiniteDuration:(BOOL)duration;	// 0x303c62a1
// declared property setter: - (void)setRequiredEventGroups:(id)groups;	// 0x303c6329
// declared property setter: - (void)setStartDate:(id)date;	// 0x303c637d
// declared property setter: - (void)setTrickPlayConfig:(id)config;	// 0x303c62c1
// declared property getter: - (id)startDate;	// 0x303c636d
// declared property getter: - (id)trickPlayConfig;	// 0x303c62b1
@end
