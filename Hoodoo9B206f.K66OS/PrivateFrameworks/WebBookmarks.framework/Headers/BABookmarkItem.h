/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
}
@property(retain, nonatomic) WebBookmark *bookmark;	// G=0x304b3afd; S=0x304b3b9d; @synthesize=_bookmark
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x304b3b0d; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark;	// 0x304b3b1d
// declared property getter: - (id)bookmark;	// 0x304b3afd
// declared property getter: - (id)collection;	// 0x304b3b0d
- (void)dealloc;	// 0x304b3bc5
// declared property setter: - (void)setBookmark:(id)bookmark;	// 0x304b3b9d
@end

