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
@property(retain, nonatomic) NSString *language;	// G=0x303ded39; S=0x303ded49; @synthesize=_language
- (void)addCaptionText:(id)text startTime:(double)time endTime:(double)time3;	// 0x303dea55
- (void)dealloc;	// 0x303de9f5
- (id)description;	// 0x303decdd
// declared property getter: - (id)language;	// 0x303ded39
// declared property setter: - (void)setLanguage:(id)language;	// 0x303ded49
- (id)timeMarkers;	// 0x303deccd
@end

