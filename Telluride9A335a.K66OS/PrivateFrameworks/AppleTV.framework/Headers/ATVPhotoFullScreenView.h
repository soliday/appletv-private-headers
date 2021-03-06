/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

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
@property(assign, nonatomic) float _curTouchOffset;	// G=0x342ecbad; S=0x342ecbbd; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x342ecb4d; S=0x342ecb5d; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x342ecb6d; S=0x342ecb7d; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x342ecc01; S=0x342ecc11; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x342ecbcd; S=0x342ecbdd; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x342ecb2d; S=0x342ecb3d; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x342ecb8d; S=0x342ecb9d; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x342ecacd; S=0x342ecadd; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x342ecaed; S=0x342ecafd; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x342ecb0d; S=0x342ecb1d; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x342eba21
- (id)initWithStartIndex:(long)startIndex;	// 0x342eba69
// declared property getter: - (float)_curTouchOffset;	// 0x342ecbad
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x342ec39d
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x342ec2dd
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x342ec33d
// declared property getter: - (long)_displayedItemIndex;	// 0x342ecb4d
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x342ecb6d
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x342ecc01
- (void)_requestNextImage;	// 0x342ec8a1
- (void)_requestedImageWritten:(id)written;	// 0x342eca41
// declared property getter: - (id)_requestedImages;	// 0x342ecbcd
- (void)_setImageLayerTargetBounds;	// 0x342ec745
// declared property getter: - (long)_startIndex;	// 0x342ecb2d
// declared property getter: - (int)_startTouchXPosition;	// 0x342ecb8d
- (id)accessibilityLabel;	// 0x342ebe95
- (BOOL)brEventAction:(id)action;	// 0x342ebfa1
- (void)controlWasActivated;	// 0x342ebc1d
- (void)controlWasDeactivated;	// 0x342ebcad
// declared property getter: - (id)dataSource;	// 0x342ecacd
- (void)dealloc;	// 0x342ebb85
// declared property getter: - (id)delegate;	// 0x342ecaed
- (BOOL)isAccessibilityElement;	// 0x342ebd31
- (void)layoutSubcontrols;	// 0x342ebd35
// declared property getter: - (BOOL)prefetchImages;	// 0x342ecb0d
- (void)reload;	// 0x342ebe3d
// declared property setter: - (void)setDataSource:(id)source;	// 0x342ecadd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x342ecafd
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x342ecb1d
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x342ecbbd
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x342ecb5d
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x342ecb7d
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x342ecc11
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x342ecbdd
// declared property setter: - (void)set_startIndex:(long)index;	// 0x342ecb3d
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x342ecb9d
@end

