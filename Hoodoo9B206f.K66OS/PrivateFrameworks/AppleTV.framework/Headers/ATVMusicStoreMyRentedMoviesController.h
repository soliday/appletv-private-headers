/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRScrollControl, BRCursorControl, BRGridView, ATVRentedMediaProvider;

@interface ATVMusicStoreMyRentedMoviesController : BRController {
@private
	ATVRentedMediaProvider *_rentals;	// 84 = 0x54
	BRScrollControl *_scroller;	// 88 = 0x58
	BRGridView *_grid;	// 92 = 0x5c
	BRCursorControl *_cursor;	// 96 = 0x60
	int _numberOfExistingRentals;	// 100 = 0x64
	BOOL _allowOurselfToBeRemovedFromStack;	// 104 = 0x68
}
@property(readonly, assign) BOOL allowOurselfToBeRemovedFromStack;	// G=0x367f1d4d; @synthesize=_allowOurselfToBeRemovedFromStack
@property(readonly, assign) BRCursorControl *cursor;	// G=0x367f1d2d; @synthesize=_cursor
@property(readonly, assign) BRGridView *grid;	// G=0x367f1d1d; @synthesize=_grid
@property(readonly, assign) int numberOfExistingRentals;	// G=0x367f1d3d; @synthesize=_numberOfExistingRentals
@property(readonly, assign) ATVRentedMediaProvider *rentals;	// G=0x367f1cfd; @synthesize=_rentals
@property(readonly, assign) BRScrollControl *scroller;	// G=0x367f1d0d; @synthesize=_scroller
- (id)init;	// 0x367f1969
- (id)initWithRentalsProvider:(id)rentalsProvider;	// 0x367f19b1
- (void)_rentalsUpdated:(id)updated;	// 0x367f1c55
- (void)_setupView;	// 0x367f1d5d
// declared property getter: - (BOOL)allowOurselfToBeRemovedFromStack;	// 0x367f1d4d
// declared property getter: - (id)cursor;	// 0x367f1d2d
- (void)dealloc;	// 0x367f1ac1
// declared property getter: - (id)grid;	// 0x367f1d1d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x367f1cf1
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x367f1c89
- (void)layoutSubcontrols;	// 0x367f1b79
- (long)numberOfColumnsInGrid:(id)grid;	// 0x367f1c85
// declared property getter: - (int)numberOfExistingRentals;	// 0x367f1d3d
- (long)numberOfItemsInGrid:(id)grid;	// 0x367f1c65
// declared property getter: - (id)rentals;	// 0x367f1cfd
// declared property getter: - (id)scroller;	// 0x367f1d0d
@end
