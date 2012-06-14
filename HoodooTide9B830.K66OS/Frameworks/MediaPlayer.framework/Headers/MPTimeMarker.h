/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {
	double _duration;	// 4 = 0x4
	unsigned _index;	// 12 = 0xc
	double _time;	// 16 = 0x10
	NSString *_title;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
	int _markerType;	// 32 = 0x20
	NSDictionary *_metadata;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) double comparableTime;	// G=0x34642029; 
@property(assign, nonatomic) double duration;	// G=0x34642109; S=0x34642121; @synthesize=_duration
@property(readonly, assign, nonatomic) BOOL hasArtworkAtPlaybackTime;	// G=0x34642081; 
@property(assign, nonatomic) unsigned index;	// G=0x34642135; S=0x34642145; @synthesize=_index
@property(readonly, assign, nonatomic) int markerType;	// G=0x346421c5; @synthesize=_markerType
@property(readonly, assign, nonatomic) double maxTime;	// G=0x34642051; 
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x346421d5; S=0x346421e5; @synthesize=_metadata
@property(assign, nonatomic) double time;	// G=0x34642155; S=0x3464216d; @synthesize=_time
@property(retain, nonatomic) NSString *title;	// G=0x34642181; S=0x346420a1; @synthesize=_title
@property(retain, nonatomic) NSURL *url;	// G=0x34642191; S=0x346421a1; @synthesize=_url
- (id)initWithMarkerType:(int)markerType;	// 0x34641d95
// declared property getter: - (double)comparableTime;	// 0x34642029
- (void)dealloc;	// 0x34641fbd
- (id)description;	// 0x34641dd5
// declared property getter: - (double)duration;	// 0x34642109
// declared property getter: - (BOOL)hasArtworkAtPlaybackTime;	// 0x34642081
// declared property getter: - (unsigned)index;	// 0x34642135
// declared property getter: - (int)markerType;	// 0x346421c5
// declared property getter: - (double)maxTime;	// 0x34642051
// declared property getter: - (id)metadata;	// 0x346421d5
// declared property setter: - (void)setDuration:(double)duration;	// 0x34642121
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x34642145
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x346421e5
// declared property setter: - (void)setTime:(double)time;	// 0x3464216d
// declared property setter: - (void)setTitle:(id)title;	// 0x346420a1
// declared property setter: - (void)setUrl:(id)url;	// 0x346421a1
// declared property getter: - (double)time;	// 0x34642155
// declared property getter: - (id)title;	// 0x34642181
// declared property getter: - (id)url;	// 0x34642191
- (id)urlTitleTrimmingCharacterSet;	// 0x34642085
@end

