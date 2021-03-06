/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaShelfView, BRListView, BRCursorControl;

__attribute__((visibility("hidden")))
@interface ATVShelfListView : BRControl {
@private
	BRCursorControl *_cursor;	// 48 = 0x30
	BRControl *_headerControl;	// 52 = 0x34
	BRMediaShelfView *_centerShelf;	// 56 = 0x38
	BRListView *_bottomList;	// 60 = 0x3c
}
@property(retain, nonatomic) BRListView *bottomList;	// G=0x331aabb5; S=0x331aa6d1; @synthesize=_bottomList
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x331aaba5; S=0x331aa619; @synthesize=_centerShelf
@property(retain, nonatomic) BRCursorControl *cursor;	// G=0x331aab61; S=0x331aab71; @synthesize=_cursor
@property(retain, nonatomic) BRControl *headerControl;	// G=0x331aab95; S=0x331aa59d; @synthesize=_headerControl
- (id)init;	// 0x331aa3f9
- (void)_focusChanged:(id)changed;	// 0x331aab01
// declared property getter: - (id)bottomList;	// 0x331aabb5
// declared property getter: - (id)centerShelf;	// 0x331aaba5
// declared property getter: - (id)cursor;	// 0x331aab61
- (void)dealloc;	// 0x331aa4e5
// declared property getter: - (id)headerControl;	// 0x331aab95
- (void)layoutSubcontrols;	// 0x331aa7b5
// declared property setter: - (void)setBottomList:(id)list;	// 0x331aa6d1
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x331aa619
// declared property setter: - (void)setCursor:(id)cursor;	// 0x331aab71
// declared property setter: - (void)setHeaderControl:(id)control;	// 0x331aa59d
@end

