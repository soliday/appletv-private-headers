/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImageView.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITapGestureRecognizer;
@protocol UIMovieSnapshotViewDelegate;

@interface UIMovieSnapshotView : UIImageView <UIGestureRecognizerDelegate> {
@private
	id<UIMovieSnapshotViewDelegate> _delegate;	// 52 = 0x34
	UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
}
@property(assign, nonatomic) id<UIMovieSnapshotViewDelegate> delegate;	// G=0x300f8079; S=0x300f8089; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame;	// 0x300f7f05
- (void)_viewWasTapped:(id)tapped;	// 0x300f8031
- (void)dealloc;	// 0x300f7fc9
// declared property getter: - (id)delegate;	// 0x300f8079
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x300f802d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300f8089
@end

