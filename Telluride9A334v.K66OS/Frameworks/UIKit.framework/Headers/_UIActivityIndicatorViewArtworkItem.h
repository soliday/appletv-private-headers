/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSDiscardableContent.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
@private
	NSString *_artKey;	// 4 = 0x4
	NSArray *_images;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *artKey;	// G=0x302b0219; @synthesize=_artKey
@property(retain, nonatomic) NSArray *images;	// G=0x30174ad5; S=0x300f1c85; @synthesize=_images
- (id)initWithArtKey:(id)artKey;	// 0x300f1a11
// declared property getter: - (id)artKey;	// 0x302b0219
- (BOOL)beginContentAccess;	// 0x300f1a81
- (void)dealloc;	// 0x302b015d
- (void)discardContentIfPossible;	// 0x302b01e9
- (void)endContentAccess;	// 0x300f1ce5
- (unsigned)hash;	// 0x302b01c9
// declared property getter: - (id)images;	// 0x30174ad5
- (BOOL)isContentDiscarded;	// 0x30174ac1
// declared property setter: - (void)setImages:(id)images;	// 0x300f1c85
@end

