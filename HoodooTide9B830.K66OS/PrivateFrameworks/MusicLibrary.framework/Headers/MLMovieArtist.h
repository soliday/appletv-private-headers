/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableDictionary, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface MLMovieArtist : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x34fbc411; S=0x34fbc47d; 
@property(copy, nonatomic) NSString *artistName;	// G=0x34fbc3c1; S=0x34fbc461; 
- (id)init;	// 0x34fbc291
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x34fbc2a5
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x34fbc411
- (void)_setValue:(id)value forKey:(id)key;	// 0x34fbc4b9
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x34fbc4f5
// declared property getter: - (id)artistName;	// 0x34fbc3c1
- (id)copyMovieArtistDictionary;	// 0x34fbc499
- (id)copyWithZone:(NSZone *)zone;	// 0x34fbc375
- (void)dealloc;	// 0x34fbc329
// declared property setter: - (void)setArtistName:(id)name;	// 0x34fbc461
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x34fbc47d
@end
