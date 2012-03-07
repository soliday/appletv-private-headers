/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"

@class UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateInlinePadBottomShadowView, NSString, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray *_candidates;	// 48 = 0x30
	NSString *_inlineText;	// 52 = 0x34
	CGRect _inlineRect;	// 56 = 0x38
	float _maxX;	// 72 = 0x48
	BOOL _expanded;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 84 = 0x54
	UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;	// 88 = 0x58
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 92 = 0x5c
	int _position;	// 96 = 0x60
	BOOL _reducedWidth;	// 100 = 0x64
	CGRect _previousCollapsedFrame;	// 104 = 0x68
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x33bec8bd; S=0x33bec8cd; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x33bec7d5; S=0x33bec7e5; @synthesize=_candidates
@property(readonly, assign, nonatomic) CGSize collapsedSize;	// G=0x33bea8cd; 
@property(assign, nonatomic) BOOL expanded;	// G=0x33bec89d; S=0x33bec8ad; @synthesize=_expanded
@property(readonly, assign, nonatomic) CGSize expandedSize;	// G=0x33bea905; 
@property(assign, nonatomic) CGRect inlineRect;	// G=0x33bec83d; S=0x33bec861; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x33bec809; S=0x33bec819; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x33bec87d; S=0x33bec88d; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x33bec911; S=0x33bec921; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x33bec951; S=0x33bec975; @synthesize=_previousCollapsedFrame
@property(assign, nonatomic) BOOL reducedWidth;	// G=0x33bec931; S=0x33bec941; @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x33bec661; @synthesize=_scrollViewController
@property(retain, nonatomic) UIKeyboardCandidateInlinePadBottomShadowView *shadowView;	// G=0x33bec8dd; S=0x33bec8ed; @synthesize=_shadowView
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x33bec6dd; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x33bea585
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x33beb711
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x33beb339
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x33beaf19
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x33bec2d1
- (id)candidateAtIndex:(unsigned)index;	// 0x33bec2a5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x33bec419
// declared property getter: - (id)candidateListDelegate;	// 0x33bec8bd
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x33bec465
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x33bec4b1
// declared property getter: - (id)candidates;	// 0x33bec7d5
- (void)collapse;	// 0x33beada1
// declared property getter: - (CGSize)collapsedSize;	// 0x33bea8cd
- (void)configureKeyboard:(id)keyboard;	// 0x33bec325
- (unsigned)count;	// 0x33bec2fd
- (id)currentCandidate;	// 0x33bec255
- (unsigned)currentIndex;	// 0x33bec27d
- (void)dealloc;	// 0x33bea7a5
- (void)expand;	// 0x33bea93d
// declared property getter: - (BOOL)expanded;	// 0x33bec89d
// declared property getter: - (CGSize)expandedSize;	// 0x33bea905
- (BOOL)handleNumberKey:(unsigned)key;	// 0x33bec351
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x33bec37d
// declared property getter: - (CGRect)inlineRect;	// 0x33bec83d
// declared property getter: - (id)inlineText;	// 0x33bec809
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x33beb231
- (void)layout;	// 0x33bebd71
- (void)layoutShadow;	// 0x33bebbed
// declared property getter: - (float)maxX;	// 0x33bec87d
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x33bec515
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x33bec4fd
// declared property getter: - (int)position;	// 0x33bec911
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x33bec951
// declared property getter: - (BOOL)reducedWidth;	// 0x33bec931
// declared property getter: - (id)scrollViewController;	// 0x33bec661
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x33bec8cd
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x33bec7e5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x33bebba9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x33beba91
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x33bec8ad
- (void)setFrame:(CGRect)frame;	// 0x33bea885
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x33bec861
// declared property setter: - (void)setInlineText:(id)text;	// 0x33bec819
// declared property setter: - (void)setMaxX:(float)x;	// 0x33bec88d
// declared property setter: - (void)setPosition:(int)position;	// 0x33bec921
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x33bec975
// declared property setter: - (void)setReducedWidth:(BOOL)width;	// 0x33bec941
// declared property setter: - (void)setShadowView:(id)view;	// 0x33bec8ed
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x33bec125
// declared property getter: - (id)shadowView;	// 0x33bec8dd
- (void)showCandidateAtIndex:(unsigned)index;	// 0x33bec15d
- (void)showNextCandidate;	// 0x33bec189
- (void)showNextPage;	// 0x33bec205
- (void)showPageAtIndex:(unsigned)index;	// 0x33bec1d9
- (void)showPreviousCandidate;	// 0x33bec1b1
- (void)showPreviousPage;	// 0x33bec22d
// declared property getter: - (id)sortSelectionBar;	// 0x33bec6dd
- (void)sortSelectionBarAction;	// 0x33bec525
@end
