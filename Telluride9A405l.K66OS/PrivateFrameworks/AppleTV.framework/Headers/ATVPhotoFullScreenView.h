/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableArray;
@protocol ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoFullScreenView : BRControl {
@private
	id<ATVPhotoFullScreenViewDataSource> dataSource;	// 48 = 0x30
	id<ATVPhotoFullScreenViewDelegate> delegate;	// 52 = 0x34
	BOOL prefetchImages;	// 56 = 0x38
	long _startIndex;	// 60 = 0x3c
	long _displayedItemIndex;	// 64 = 0x40
	BOOL _initialLayoutCompleted;	// 68 = 0x44
	int _startTouchXPosition;	// 72 = 0x48
	float _curTouchOffset;	// 76 = 0x4c
	NSMutableArray *_requestedImages;	// 80 = 0x50
	unsigned _lastRequestedItemIndex;	// 84 = 0x54
}
@property(assign, nonatomic) float _curTouchOffset;	// G=0x35f02885; S=0x35f02895; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x35f02825; S=0x35f02835; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x35f02845; S=0x35f02855; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x35f028d9; S=0x35f028e9; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x35f028a5; S=0x35f028b5; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x35f02805; S=0x35f02815; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x35f02865; S=0x35f02875; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x35f027a5; S=0x35f027b5; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x35f027c5; S=0x35f027d5; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x35f027e5; S=0x35f027f5; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x35f016f9
- (id)initWithStartIndex:(long)startIndex;	// 0x35f01741
// declared property getter: - (float)_curTouchOffset;	// 0x35f02885
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x35f02075
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x35f01fb5
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x35f02015
// declared property getter: - (long)_displayedItemIndex;	// 0x35f02825
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x35f02845
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x35f028d9
- (void)_requestNextImage;	// 0x35f02579
- (void)_requestedImageWritten:(id)written;	// 0x35f02719
// declared property getter: - (id)_requestedImages;	// 0x35f028a5
- (void)_setImageLayerTargetBounds;	// 0x35f0241d
// declared property getter: - (long)_startIndex;	// 0x35f02805
// declared property getter: - (int)_startTouchXPosition;	// 0x35f02865
- (id)accessibilityLabel;	// 0x35f01b6d
- (BOOL)brEventAction:(id)action;	// 0x35f01c79
- (void)controlWasActivated;	// 0x35f018f5
- (void)controlWasDeactivated;	// 0x35f01985
// declared property getter: - (id)dataSource;	// 0x35f027a5
- (void)dealloc;	// 0x35f0185d
// declared property getter: - (id)delegate;	// 0x35f027c5
- (BOOL)isAccessibilityElement;	// 0x35f01a09
- (void)layoutSubcontrols;	// 0x35f01a0d
// declared property getter: - (BOOL)prefetchImages;	// 0x35f027e5
- (void)reload;	// 0x35f01b15
// declared property setter: - (void)setDataSource:(id)source;	// 0x35f027b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35f027d5
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x35f027f5
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x35f02895
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x35f02835
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x35f02855
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x35f028e9
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x35f028b5
// declared property setter: - (void)set_startIndex:(long)index;	// 0x35f02815
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x35f02875
@end
