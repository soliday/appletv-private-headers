/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncTask, NSString, BRWaitSpinnerControl, BRImage, BRImageControl;
@protocol BRImageProxy;

@interface BRAsyncImageControl : BRControl {
@private
	id<BRImageProxy> _imageProxy;	// 48 = 0x30
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
	BRImage *_image;	// 56 = 0x38
	BRImage *_defaultImage;	// 60 = 0x3c
	BRAsyncTask *_imageProcessingTask;	// 64 = 0x40
	NSString *_imageID;	// 68 = 0x44
	BOOL _cropAndFill;	// 72 = 0x48
	BOOL _useLoadingSpinner;	// 73 = 0x49
	BOOL _loadFailure;	// 74 = 0x4a
	BOOL _imageLoadRequested;	// 75 = 0x4b
	BOOL _useLoadFailureImage;	// 76 = 0x4c
	BOOL _loadOnActivation;	// 77 = 0x4d
	BOOL _okToLoadImage;	// 78 = 0x4e
	BOOL _useFadeInAnimation;	// 79 = 0x4f
	int _requestedSize;	// 80 = 0x50
	BRImageControl *_badgeImageControl;	// 84 = 0x54
	float _badgeUnfocusedOpacity;	// 88 = 0x58
	float _badgeFocusedOpacity;	// 92 = 0x5c
	int _imageContentMode;	// 96 = 0x60
}
@property(retain) BRImage *image;	// G=0x329c0ce1; S=0x329c0cd1; converted property
@property(assign, nonatomic) int imageContentMode;	// G=0x329c17b1; S=0x329c17c1; @synthesize=_imageContentMode
@property(retain) id imageProxy;	// G=0x329c0c99; S=0x329c0c59; converted property
+ (id)imageControlWithImage:(id)image;	// 0x329c0a91
+ (id)imageControlWithImageProxy:(id)imageProxy;	// 0x329c0a05
- (id)init;	// 0x329c0b21
- (id)initWithImage:(id)image;	// 0x329c0ae9
- (id)initWithImageProxy:(id)imageProxy;	// 0x329c0a4d
- (void)_checkImageSize:(id)size;	// 0x329c1b85
- (void)_cropImage:(id)image;	// 0x329c20a1
- (void)_enableFadeInAnimation;	// 0x329c17d1
- (void)_enableSpinner;	// 0x329c1899
- (void)_fetchCachedThumbnailImage;	// 0x329c18d5
- (void)_fetchPreferredSizeImage;	// 0x329c1a29
- (id)_getImageFromImageManagerNamed:(id)imageManagerNamed withSize:(CGSize)size;	// 0x329c2319
- (id)_imageOfSize:(int)size;	// 0x329c1f19
- (void)_imageTaskComplete:(id)complete;	// 0x329c226d
- (void)_imageUnavailable:(id)unavailable;	// 0x329c2451
- (void)_imageUpdated:(id)updated;	// 0x329c2381
- (void)_performDeactivation;	// 0x329c2841
- (void)_scaleImage:(id)image;	// 0x329c218d
- (void)_setImage:(id)image;	// 0x329c252d
- (void)_setImageID:(id)anId;	// 0x329c2601
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x329c1c99
- (void)_updateContents;	// 0x329c2641
- (id)accessibilityLabel;	// 0x329c14ad
- (id)accessibilityTraits;	// 0x329c147d
- (void)cancelImageLoading;	// 0x329c0d21
- (void)controlWasActivated;	// 0x329c0ddd
- (void)controlWasDeactivated;	// 0x329c0ebd
- (void)controlWasFocused;	// 0x329c0f6d
- (void)controlWasUnfocused;	// 0x329c0fc9
- (void)dealloc;	// 0x329c0b79
// converted property getter: - (id)image;	// 0x329c0ce1
// declared property getter: - (int)imageContentMode;	// 0x329c17b1
// converted property getter: - (id)imageProxy;	// 0x329c0c99
- (BOOL)isAccessibilityElement;	// 0x329c14a9
- (void)layoutSubcontrols;	// 0x329c11f9
- (void)loadImage;	// 0x329c0d01
- (void)setBadgeImage:(id)image badgeUnfocusedOpacity:(float)opacity badgeFocusedOpacity:(float)opacity3;	// 0x329c10b9
- (void)setCropAndFill:(BOOL)fill;	// 0x329c1089
- (void)setDefaultImage:(id)image;	// 0x329c1025
// converted property setter: - (void)setImage:(id)image;	// 0x329c0cd1
// declared property setter: - (void)setImageContentMode:(int)mode;	// 0x329c17c1
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x329c0c59
- (void)setLoadImageOnActivation:(BOOL)activation;	// 0x329c0cf1
- (void)setUseFadeInAnimation:(BOOL)animation;	// 0x329c10a9
- (void)setUseLoadFailureImage:(BOOL)image;	// 0x329c1099
- (void)setUseLoadingSpinner:(BOOL)spinner;	// 0x329c1079
- (void)windowMaxBoundsChanged;	// 0x329c0efd
@end

