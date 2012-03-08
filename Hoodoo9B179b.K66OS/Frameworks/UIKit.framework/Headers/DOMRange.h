/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMRange.h> // Unknown library
#import "UIWebSelectionBlock.h"


@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x3319f589
- (id)asDomRange;	// 0x3319f599
- (CGRect)boundingRect;	// 0x3319f0b5
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x3319f205
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x3319f6a1
- (BOOL)containsBlock:(id)block;	// 0x3319f46d
- (BOOL)containsRange:(id)range;	// 0x3319f59d
- (id)enclosingDocument;	// 0x3319f6a9
- (BOOL)isSameBlock:(id)block;	// 0x3319f3d1
- (id)largerParent;	// 0x3319f3a9
- (id)parentBlock;	// 0x3319f365
- (id)rangeOfContents;	// 0x3319f6a5
- (BOOL)rendersAsBlock;	// 0x3319f55d
- (BOOL)selectable;	// 0x3319f561
- (BOOL)strictlyContainsBlock:(id)block;	// 0x3319f4e5
- (void)unionWithRange:(id)range;	// 0x3319efa5
- (id)webFrame;	// 0x3300f2c9
@end
