/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
@private
	WebTextIteratorPrivate *_private;	// 4 = 0x4
}
- (id)initWithRange:(id)range;	// 0x30548be1
- (void)advance;	// 0x30548bbd
- (BOOL)atEnd;	// 0x305488e1
- (id)currentNode;	// 0x30548d9d
- (id)currentRange;	// 0x30548a89
- (id)currentText;	// 0x305489f9
- (unsigned)currentTextLength;	// 0x30548921
- (const unsigned short *)currentTextPointer;	// 0x30548905
- (void)dealloc;	// 0x30548a3d
@end
