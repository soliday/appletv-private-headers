/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

@interface UIMovieClosedCaptionData : NSObject {
@private
	NSString *_language;	// 4 = 0x4
	NSMutableArray *_data;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *language;	// G=0x346d5d39; S=0x346d5d49; @synthesize=_language
- (void)addCaptionText:(id)text startTime:(double)time endTime:(double)time3;	// 0x346d5a55
- (void)dealloc;	// 0x346d59f5
- (id)description;	// 0x346d5cdd
// declared property getter: - (id)language;	// 0x346d5d39
// declared property setter: - (void)setLanguage:(id)language;	// 0x346d5d49
- (id)timeMarkers;	// 0x346d5ccd
@end

