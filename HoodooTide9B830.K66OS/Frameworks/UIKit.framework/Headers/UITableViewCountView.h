/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel {
@private
	NSString *_countString;	// 112 = 0x70
	int _count;	// 116 = 0x74
}
@property(assign) int count;	// G=0x300b57c1; S=0x300b573d; converted property
- (id)initWithFrame:(CGRect)frame withCountString:(id)countString withCount:(int)count;	// 0x300b55e1
// converted property getter: - (int)count;	// 0x300b57c1
- (void)dealloc;	// 0x30181c31
// converted property setter: - (void)setCount:(int)count;	// 0x300b573d
- (void)setCountString:(id)string withCount:(int)count;	// 0x300b56d9
@end

