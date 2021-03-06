/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSArray, InlineCandidateCell;

__attribute__((visibility("hidden")))
@interface UIInlineCandidateTextView : UIView {
@private
	int m_type;	// 48 = 0x30
	int m_edgeType;	// 52 = 0x34
	BOOL m_animating;	// 56 = 0x38
	NSMutableArray *_candidateCellArray;	// 60 = 0x3c
	NSArray *_candidates;	// 64 = 0x40
	id _target;	// 68 = 0x44
	SEL _action;	// 72 = 0x48
	unsigned _selectedItem;	// 76 = 0x4c
	InlineCandidateCell *_currentlyPushedItem;	// 80 = 0x50
	BOOL _showingArrow;	// 84 = 0x54
	BOOL _arrowHighlighted;	// 85 = 0x55
	BOOL _phraseEditable;	// 86 = 0x56
}
@property(assign) int edgeType;	// G=0x358ff989; S=0x358ff9a9; converted property
@property(assign) unsigned selectedItem;	// G=0x35900225; S=0x35900191; converted property
- (id)initWithFrame:(CGRect)frame candidates:(id)candidates type:(int)type maxScreenWidth:(float)width;	// 0x358ff6c5
- (BOOL)_arrowHighlighted;	// 0x3590013d
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x35900a31
- (void)_cellSelected:(id)selected;	// 0x358ffa9d
- (float)_layoutCandidates:(id)candidates maxCount:(int)count height:(float)height maxScreenWidth:(float)width;	// 0x358ffb25
- (void)_mouseUp:(GSEventRef)up wasCancelled:(BOOL)cancelled;	// 0x359008d5
- (void)dealloc;	// 0x358ff929
- (void)drawRect:(CGRect)rect;	// 0x35900235
// converted property getter: - (int)edgeType;	// 0x358ff989
- (id)findCell:(CGPoint)cell;	// 0x35900555
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35900e49
- (void)mouseDown:(GSEventRef)down;	// 0x3590068d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3590076d
- (void)mouseUp:(GSEventRef)up;	// 0x35900a1d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x35900f41
- (unsigned)numberOfShownItems;	// 0x3590011d
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x35900ba5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x35900d11
- (void)redrawArrow;	// 0x3590064d
// converted property getter: - (unsigned)selectedItem;	// 0x35900225
- (void)setAnimating:(BOOL)animating;	// 0x358ffa8d
// converted property setter: - (void)setEdgeType:(int)type;	// 0x358ff9a9
// converted property setter: - (void)setSelectedItem:(unsigned)item;	// 0x35900191
- (void)setTarget:(id)target action:(SEL)action;	// 0x358ffb05
- (void)showHighlightedArrow;	// 0x3590014d
- (int)textEffectsVisibilityLevel;	// 0x358ff999
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35900e7d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35900f0d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35900edd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35900ead
@end

