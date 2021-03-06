/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : NSObject {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
	int _changeType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) WebBookmark *bookmark;	// G=0x3390fd5d; @synthesize=_bookmark
@property(readonly, assign, nonatomic) int changeType;	// G=0x3390fd4d; @synthesize=_changeType
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x3390fd6d; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark changeType:(int)type;	// 0x3390fd7d
// declared property getter: - (id)bookmark;	// 0x3390fd5d
// declared property getter: - (int)changeType;	// 0x3390fd4d
- (id)changeTypeDescription;	// 0x3390fd0d
// declared property getter: - (id)collection;	// 0x3390fd6d
- (void)dealloc;	// 0x3390fe69
- (id)description;	// 0x3390fe11
@end

