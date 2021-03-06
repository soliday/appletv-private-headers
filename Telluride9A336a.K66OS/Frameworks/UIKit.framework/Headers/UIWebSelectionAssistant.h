/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UIWebSelection, UITapAndAHalfRecognizer, UIWebDocumentView, UILongPressGestureRecognizer, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {
@private
	UIWebDocumentView *_webView;	// 4 = 0x4
	UIWebSelectionView *_selectionView;	// 8 = 0x8
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 12 = 0xc
	UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL enabled;	// G=0x3515fbf5; S=0x35160041; 
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x35389e85; 
@property(readonly, assign, nonatomic) CGRect selectionFrame;	// G=0x35389ea5; 
- (id)initWithWebView:(id)webView;	// 0x3515f2b1
- (void)clearSelection;	// 0x3525d55d
- (void)dealloc;	// 0x3525ea99
- (void)didEndScrollingOverflow;	// 0x3538a179
- (void)didEndScrollingPage;	// 0x3538a139
- (void)didRotate:(id)rotate;	// 0x3538a205
// declared property getter: - (BOOL)enabled;	// 0x3515fbf5
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x352078f9
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x35209c81
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x35208c15
- (void)hideCallout;	// 0x3538a199
- (id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;	// 0x3538a089
- (BOOL)isSelectionGestureRecognizer:(id)recognizer;	// 0x35209de1
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x3538a1b9
- (void)makeWebSelection:(id)selection;	// 0x35389f09
- (void)resignedFirstResponder;	// 0x3525e205
- (void)scaleChanged;	// 0x3538a05d
// declared property getter: - (id)selection;	// 0x35389e85
- (void)selectionChanged;	// 0x35389e19
// declared property getter: - (CGRect)selectionFrame;	// 0x35389ea5
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35160041
- (void)setGestureRecognizers;	// 0x3515f9b5
- (void)tap:(id)tap;	// 0x3538a00d
- (void)willRotate:(id)rotate;	// 0x3538a1e5
- (void)willStartScrollingOverflow;	// 0x3538a159
- (void)willStartScrollingPage;	// 0x3538a119
@end

