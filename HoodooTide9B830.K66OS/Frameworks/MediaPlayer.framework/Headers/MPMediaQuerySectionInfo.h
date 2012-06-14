/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSArray *_sections;	// 4 = 0x4
	NSArray *_sectionIndexTitles;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x346bff6d; 
@property(copy, nonatomic) NSArray *sectionIndexTitles;	// G=0x346bffcd; S=0x346bffdd; @synthesize=_sectionIndexTitles
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x346bffbd; @synthesize=_sections
- (id)initWithCoder:(id)coder;	// 0x346bfc39
- (id)copyWithZone:(NSZone *)zone;	// 0x346bfbb9
// declared property getter: - (unsigned)count;	// 0x346bff6d
- (void)dealloc;	// 0x346bfb59
- (id)description;	// 0x346bfb39
- (void)encodeWithCoder:(id)coder;	// 0x346bfcc9
- (unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)index;	// 0x346bfdb5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x346bfd39
// declared property getter: - (id)sectionIndexTitles;	// 0x346bffcd
// declared property getter: - (id)sections;	// 0x346bffbd
// declared property setter: - (void)setSectionIndexTitles:(id)titles;	// 0x346bffdd
@end

