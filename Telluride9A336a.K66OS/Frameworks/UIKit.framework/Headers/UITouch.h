/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, UIView, UIWindow, NSArray;

@interface UITouch : NSObject {
	double _timestamp;	// 4 = 0x4
	int _phase;	// 12 = 0xc
	int _savedPhase;	// 16 = 0x10
	unsigned _tapCount;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	UIView *_view;	// 28 = 0x1c
	UIView *_gestureView;	// 32 = 0x20
	UIView *_warpedIntoView;	// 36 = 0x24
	NSMutableArray *_gestureRecognizers;	// 40 = 0x28
	NSMutableArray *_forwardingRecord;	// 44 = 0x2c
	CGPoint _locationInWindow;	// 48 = 0x30
	CGPoint _previousLocationInWindow;	// 56 = 0x38
	unsigned char _pathIndex;	// 64 = 0x40
	unsigned char _pathIdentity;	// 65 = 0x41
	float _pathMajorRadius;	// 68 = 0x44
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _touchFlags;	// 72 = 0x48
@private
	BOOL _eaten;	// 73 = 0x49
}
@property(assign, nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten;	// G=0x350cddfd; S=0x352e6b5d; @synthesize
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x350d0e19; S=0x350cdddd; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x351c4755; S=0x350cddcd; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x351c4765; S=0x350cdded; @synthesize
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x350d21c5; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x350ce739; S=0x350cde55; 
@property(assign) BOOL isDelayed;	// G=0x350cf7d9; S=0x351b5b41; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x350d0e29; S=0x350ce2a1; 
@property(readonly, assign, nonatomic) int phase;	// G=0x350ce3a9; 
@property(assign, nonatomic) int phase;	// S=0x350cdc29; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x350d0e3d; S=0x351e0859; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x350d0b45; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x350ce2c1; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x351c4075; 
@property(assign, nonatomic) double timestamp;	// S=0x350cdc15; 
@property(retain, nonatomic) UIView *view;	// S=0x350cde11; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x350ce689; 
@property(retain, nonatomic) UIView *warpedIntoView;	// G=0x350cde99; S=0x3519373d; 
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x350ce219; 
@property(retain, nonatomic) UIWindow *window;	// S=0x350cdc39; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x352e6b6d
- (void)_addGestureRecognizer:(id)recognizer;	// 0x351b28dd
- (void)_clearGestureRecognizers;	// 0x352e6e79
- (int)_compareIndex:(id)index;	// 0x352e6ee1
- (float)_distanceFrom:(id)from inView:(id)view;	// 0x35422ee1
- (id)_forwardingRecord;	// 0x350cfdd9
- (id)_gestureRecognizers;	// 0x350cf38d
// declared property getter: - (BOOL)_isEaten;	// 0x350cddfd
- (BOOL)_isFirstTouchForView;	// 0x350d048d
- (void)_loadStateFromTouch:(id)touch;	// 0x351b5a3d
- (CGPoint)_locationInWindow:(id)window;	// 0x351b3905
// declared property getter: - (unsigned char)_pathIdentity;	// 0x350d0e19
// declared property getter: - (unsigned char)_pathIndex;	// 0x351c4755
// declared property getter: - (float)_pathMajorRadius;	// 0x351c4765
- (id)_phaseDescription;	// 0x352e6ca9
- (void)_popPhase;	// 0x352e6ec1
- (CGPoint)_previousLocationInWindow:(id)window;	// 0x352313fd
- (void)_pushPhase:(int)phase;	// 0x352e6e99
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x351b65cd
// declared property setter: - (void)_setEaten:(BOOL)eaten;	// 0x352e6b5d
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x350ce2d1
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x350cdeb9
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x350cdddd
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x350cddcd
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x350cdded
- (BOOL)_wantsForwardingFromResponder:(id)responder toNextResponder:(id)nextResponder withEvent:(id)event;	// 0x351d376d
- (void)dealloc;	// 0x350d2295
- (id)description;	// 0x352e6d0d
// declared property getter: - (id)gestureRecognizers;	// 0x350d21c5
// declared property getter: - (id)gestureView;	// 0x350ce739
- (int)info;	// 0x352e6a45
// converted property getter: - (BOOL)isDelayed;	// 0x350cf7d9
// declared property getter: - (BOOL)isTap;	// 0x350d0e29
- (CGPoint)locationInView:(id)view;	// 0x350cf845
// declared property getter: - (int)phase;	// 0x350ce3a9
- (CGPoint)previousLocationInView:(id)view;	// 0x352e6a49
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x350d0e3d
// declared property setter: - (void)setGestureView:(id)view;	// 0x350cde55
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x351b5b41
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x350ce2a1
// declared property setter: - (void)setPhase:(int)phase;	// 0x350cdc29
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x351e0859
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x350ce2c1
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x350cdc15
// declared property setter: - (void)setView:(id)view;	// 0x350cde11
// declared property setter: - (void)setWarpedIntoView:(id)view;	// 0x3519373d
// declared property setter: - (void)setWindow:(id)window;	// 0x350cdc39
// declared property getter: - (unsigned)tapCount;	// 0x350d0b45
// declared property getter: - (double)timestamp;	// 0x351c4075
// declared property getter: - (id)view;	// 0x350ce689
// declared property getter: - (id)warpedIntoView;	// 0x350cde99
// declared property getter: - (id)window;	// 0x350ce219
@end

