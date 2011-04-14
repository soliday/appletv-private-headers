/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UIWindow, UIView, NSMutableArray;

@interface UITouch : NSObject {
	double _timestamp;	// 4 = 0x4
	int _phase;	// 12 = 0xc
	int _savedPhase;	// 16 = 0x10
	unsigned _tapCount;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	UIView *_view;	// 28 = 0x1c
	UIView *_gestureView;	// 32 = 0x20
	NSMutableArray *_gestureRecognizers;	// 36 = 0x24
	CGPoint _locationInWindow;	// 40 = 0x28
	CGPoint _previousLocationInWindow;	// 48 = 0x30
	unsigned char _pathIndex;	// 56 = 0x38
	unsigned char _pathIdentity;	// 57 = 0x39
	float _pathMajorRadius;	// 60 = 0x3c
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _touchFlags;	// 64 = 0x40
}
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x305ab295; S=0x305a891d; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x30675f69; S=0x305a890d; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x30675f79; S=0x305a892d; @synthesize
@property(readonly, copy, nonatomic) NSArray *gestureRecognizers;	// G=0x305ac50d; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x305a9101; S=0x305a897d; 
@property(assign) BOOL isDelayed;	// G=0x305a9eb5; S=0x30630cad; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x305ab2a5; S=0x305a8d81; 
@property(assign, nonatomic) BOOL isWarped;	// G=0x305a89b9; S=0x30636fed; 
@property(readonly, assign, nonatomic) int phase;	// G=0x305a8de1; 
@property(assign, nonatomic) int phase;	// S=0x305a8755; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x305ab2b9; S=0x30645f55; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x305ab03d; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x305a8d9d; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x306436b5; 
@property(assign, nonatomic) double timestamp;	// S=0x305a8741; 
@property(readonly, retain, nonatomic) UIView *view;	// G=0x305a9051; 
@property(retain, nonatomic) UIView *view;	// S=0x305a8941; 
@property(readonly, retain, nonatomic) UIWindow *window;	// G=0x305a8d05; 
@property(retain, nonatomic) UIWindow *window;	// S=0x305a8765; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x30763b21
- (void)_addGestureRecognizer:(id)recognizer;	// 0x3062e775
- (void)_clearGestureRecognizers;	// 0x3068db05
- (int)_compareIndex:(id)index;	// 0x30763995
- (id)_gestureRecognizers;	// 0x305a9a59
- (BOOL)_isFirstTouchForView;	// 0x305aa9b9
- (void)_loadStateFromTouch:(id)touch;	// 0x30630bb5
- (CGPoint)_locationInWindow:(id)window;	// 0x3065f7b1
// declared property getter: - (unsigned char)_pathIdentity;	// 0x305ab295
// declared property getter: - (unsigned char)_pathIndex;	// 0x30675f69
// declared property getter: - (float)_pathMajorRadius;	// 0x30675f79
- (id)_phaseDescription;	// 0x307638f9
- (void)_popPhase;	// 0x30763975
- (void)_pushPhase:(int)phase;	// 0x30763951
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x30633bc1
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x305a8dad
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x305a89dd
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x305a891d
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x305a890d
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x305a892d
- (void)dealloc;	// 0x305ac5b9
- (id)description;	// 0x307639e5
// declared property getter: - (id)gestureRecognizers;	// 0x305ac50d
// declared property getter: - (id)gestureView;	// 0x305a9101
- (int)info;	// 0x307638f5
// converted property getter: - (BOOL)isDelayed;	// 0x305a9eb5
// declared property getter: - (BOOL)isTap;	// 0x305ab2a5
// declared property getter: - (BOOL)isWarped;	// 0x305a89b9
- (CGPoint)locationInView:(id)view;	// 0x305aa341
// declared property getter: - (int)phase;	// 0x305a8de1
- (CGPoint)previousLocationInView:(id)view;	// 0x30636e11
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x305ab2b9
// declared property setter: - (void)setGestureView:(id)view;	// 0x305a897d
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x30630cad
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x305a8d81
// declared property setter: - (void)setIsWarped:(BOOL)warped;	// 0x30636fed
// declared property setter: - (void)setPhase:(int)phase;	// 0x305a8755
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x30645f55
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x305a8d9d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x305a8741
// declared property setter: - (void)setView:(id)view;	// 0x305a8941
// declared property setter: - (void)setWindow:(id)window;	// 0x305a8765
// declared property getter: - (unsigned)tapCount;	// 0x305ab03d
// declared property getter: - (double)timestamp;	// 0x306436b5
// declared property getter: - (id)view;	// 0x305a9051
// declared property getter: - (id)window;	// 0x305a8d05
@end
