/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
@private
	DOMRange *_domRange;	// 4 = 0x4
	int _affinityIfCollapsed;	// 8 = 0x8
}
@property(assign, nonatomic) int affinity;	// G=0x3010fda9; S=0x3010fb75; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x3010fc91; S=0x3010fb51; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x301166f5
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x3010fad5
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x3010fd3d
// declared property getter: - (int)affinity;	// 0x3010fda9
- (void)dealloc;	// 0x30123ae5
- (id)description;	// 0x3031d551
// declared property getter: - (id)domRange;	// 0x3010fc91
- (id)end;	// 0x301478e5
- (BOOL)isEmpty;	// 0x3010fc61
- (BOOL)isEqual:(id)equal;	// 0x3012da35
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x3010fb75
// declared property setter: - (void)setDomRange:(id)range;	// 0x3010fb51
- (id)start;	// 0x3010fca1
@end

