/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


@interface UIKBHandwritingStrokes : NSObject <NSCopying> {
	KBStrokeList *_strokes;	// 4 = 0x4
}
- (id)initWithStrokes:(KBStrokeList *)strokes;	// 0x33c7731d
- (id)copyWithZone:(NSZone *)zone;	// 0x33c774d1
- (void)dealloc;	// 0x33c773f1
- (const KBStrokeList *)strokes;	// 0x33c774c1
@end

