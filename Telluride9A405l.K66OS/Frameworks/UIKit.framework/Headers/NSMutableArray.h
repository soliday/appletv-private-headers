/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSMutableArray.h> // Unknown library
#import "UIKit-Structs.h"


@interface NSMutableArray (UICollectionAdditions_Performance)
- (void)_addObjectsFromArray:(id)array range:(NSRange)range;	// 0x32e396c9
@end

@interface NSMutableArray (UIKBExtras)
- (void)_kb_reverse;	// 0x32e9b261
@end

@interface NSMutableArray (UIMovieScrubberTrackViewAdditions)
- (void)removeViewsFromSuperview;	// 0x32f0f679
@end

@interface NSMutableArray (UIKitQueueAdditions)
- (id)uiDequeue;	// 0x32ffcfd5
- (void)uiEnqueue:(id)enqueue;	// 0x32ffcfc5
- (id)uiPeek;	// 0x32ffd041
@end
