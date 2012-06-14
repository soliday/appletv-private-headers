/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateList.h"

@class UIKeyboardCandidateScrollViewController, NSArray, UIKeyboardCandidateSortControl, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray *_candidates;	// 84 = 0x54
	NSString *_inlineText;	// 88 = 0x58
	CGRect _inlineRect;	// 92 = 0x5c
	float _maxX;	// 108 = 0x6c
	BOOL _expanded;	// 112 = 0x70
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 116 = 0x74
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 120 = 0x78
	int _position;	// 124 = 0x7c
	CGRect _previousCollapsedFrame;	// 128 = 0x80
	UIKeyboardCandidateSortControl *_sortSelectionBar;	// 144 = 0x90
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x304c490d; S=0x304c491d; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x304c4849; S=0x304c4859; @synthesize=_candidates
@property(assign, nonatomic) BOOL expanded;	// G=0x304c48ed; S=0x304c48fd; @synthesize=_expanded
@property(assign, nonatomic) CGRect inlineRect;	// G=0x304c488d; S=0x304c48b1; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x304c4869; S=0x304c487d; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x304c48cd; S=0x304c48dd; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x304c492d; S=0x304c493d; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x304c494d; S=0x304c4971; @synthesize=_previousCollapsedFrame
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x304c470d; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortControl *sortSelectionBar;	// G=0x304c4785; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x304c2eed
- (id)activeCandidateList;	// 0x304c31b9
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x304c3ba1
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x304c3759
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x304c32fd
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x304c44fd
- (id)candidateAtIndex:(unsigned)index;	// 0x304c44d1
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x304c45c9
// declared property getter: - (id)candidateListDelegate;	// 0x304c490d
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x304c4619
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x304c4669
// declared property getter: - (id)candidates;	// 0x304c4849
- (void)candidatesDidChange;	// 0x304c409d
- (void)collapse;	// 0x304c3295
- (CGSize)collapsedSize;	// 0x304c3205
- (void)configureKeyboard:(id)keyboard;	// 0x304c4551
- (unsigned)count;	// 0x304c4529
- (id)currentCandidate;	// 0x304c4481
- (unsigned)currentIndex;	// 0x304c44a9
- (void)dealloc;	// 0x304c3105
- (void)expand;	// 0x304c322d
// declared property getter: - (BOOL)expanded;	// 0x304c48ed
- (CGSize)expandedSize;	// 0x304c3219
- (BOOL)handleNumberKey:(unsigned)key;	// 0x304c457d
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x304c45a9
// declared property getter: - (CGRect)inlineRect;	// 0x304c488d
// declared property getter: - (id)inlineText;	// 0x304c4869
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x304c3641
- (void)layout;	// 0x304c40a1
// declared property getter: - (float)maxX;	// 0x304c48cd
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x304c46d1
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x304c46b9
// declared property getter: - (int)position;	// 0x304c492d
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x304c494d
// declared property getter: - (id)scrollViewController;	// 0x304c470d
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x304c491d
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x304c4859
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x304c4059
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x304c3f41
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x304c48fd
- (void)setFrame:(CGRect)frame;	// 0x304c31bd
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x304c48b1
// declared property setter: - (void)setInlineText:(id)text;	// 0x304c487d
// declared property setter: - (void)setMaxX:(float)x;	// 0x304c48dd
// declared property setter: - (void)setPosition:(int)position;	// 0x304c493d
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x304c4971
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x304c4325
- (void)showCandidate:(id)candidate;	// 0x304c435d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x304c4389
- (void)showNextCandidate;	// 0x304c43b5
- (void)showNextPage;	// 0x304c4431
- (void)showPageAtIndex:(unsigned)index;	// 0x304c4405
- (void)showPreviousCandidate;	// 0x304c43dd
- (void)showPreviousPage;	// 0x304c4459
// declared property getter: - (id)sortSelectionBar;	// 0x304c4785
- (void)sortSelectionBarAction;	// 0x304c46e1
@end
