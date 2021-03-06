/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSString;
@protocol BRFullScreenPhotoControllerDelegate, BRPhotoProviderForCollection;

@interface BRFullScreenPhotoController : BRController {
@private
	long _startIndex;	// 80 = 0x50
	long _currentIndex;	// 84 = 0x54
	id<BRPhotoProviderForCollection> _provider;	// 88 = 0x58
	id<BRFullScreenPhotoControllerDelegate> _delegate;	// 92 = 0x5c
	BOOL _isNetworkDependent;	// 96 = 0x60
	NSMutableArray *_prefetchImageIDs;	// 100 = 0x64
	NSString *_lastPrefetchAssetID;	// 104 = 0x68
	BOOL _initialLayoutCompleted;	// 108 = 0x6c
	int _startTouchXPosition;	// 112 = 0x70
	float _curTouchOffset;	// 116 = 0x74
	BOOL _imagePrefetchDisabled;	// 120 = 0x78
	long _numPrefetchInProgress;	// 124 = 0x7c
}
@property(readonly, assign) long currentIndex;	// G=0x341b50e9; converted property
@property(assign) BOOL imagePrefetchDisabled;	// G=0x341b5175; S=0x341b5159; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x341b5149; S=0x341b5139; converted property
@property(readonly, assign, nonatomic) id<BRPhotoProviderForCollection> provider;	// G=0x341b5591; @synthesize=_provider
+ (id)fullScreenPhotoControllerForProvider:(id)provider startIndex:(long)index;	// 0x341b4c85
- (id)initWithProvider:(id)provider startIndex:(long)index;	// 0x341b4cd5
- (void)_handleSelection;	// 0x341b581d
- (void)_nextSlide;	// 0x341b56fd
- (void)_nextSlideWithTransition;	// 0x341b5795
- (void)_playerStateChanged:(id)changed;	// 0x341b606d
- (void)_prefetchImageWritten:(id)written;	// 0x341b6105
- (void)_prefetchNextImage;	// 0x341b5e05
- (void)_previousSlide;	// 0x341b5749
- (void)_previousSlideWithTransition;	// 0x341b57d9
- (void)_setImageLayerTargetBounds;	// 0x341b55a1
- (long)_switchToImageControlForIndex:(long)index usingSwipeTransition:(BOOL)transition;	// 0x341b5a49
- (id)accessibilityLabel;	// 0x341b4df1
- (BOOL)brEventAction:(id)action;	// 0x341b5185
- (void)controlWasActivated;	// 0x341b4fc5
- (void)controlWasDeactivated;	// 0x341b503d
// converted property getter: - (long)currentIndex;	// 0x341b50e9
- (void)dealloc;	// 0x341b4f0d
// converted property getter: - (BOOL)imagePrefetchDisabled;	// 0x341b5175
- (BOOL)isAccessibilityElement;	// 0x341b4ded
// converted property getter: - (BOOL)isNetworkDependent;	// 0x341b5149
- (BOOL)isValidAfterDataUpdate;	// 0x341b5099
- (void)layoutSubcontrols;	// 0x341b5445
// declared property getter: - (id)provider;	// 0x341b5591
- (void)reload;	// 0x341b554d
- (void)setControllerDelegate:(id)delegate;	// 0x341b50f9
// converted property setter: - (void)setImagePrefetchDisabled:(BOOL)disabled;	// 0x341b5159
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x341b5139
@end

