/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMNode, NSString;

@interface DOMRange : DOMObject {
}
@property(readonly, assign) BOOL collapsed;	// G=0x31786445; 
@property(readonly, retain) DOMNode *commonAncestorContainer;	// G=0x31858f7d; 
@property(readonly, retain) DOMNode *endContainer;	// G=0x317a50a1; 
@property(readonly, assign) int endOffset;	// G=0x317a50dd; 
@property(readonly, retain) DOMNode *startContainer;	// G=0x3179d3d5; 
@property(readonly, assign) int startOffset;	// G=0x317a5069; 
@property(readonly, copy) NSString *text;	// G=0x317aad81; 
- (id)_text;	// 0x317aad6d
- (CGRect)boundingBox;	// 0x3181ba9d
- (id)cloneContents;	// 0x31858649
- (id)cloneRange;	// 0x3185827d
- (void)collapse:(BOOL)collapse;	// 0x3185899d
// declared property getter: - (BOOL)collapsed;	// 0x31786445
// declared property getter: - (id)commonAncestorContainer;	// 0x31858f7d
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x318588d9
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x3185891d
- (short)compareNode:(id)node;	// 0x31857f01
- (short)comparePoint:(id)point offset:(int)offset;	// 0x31857ebd
- (id)createContextualFragment:(id)fragment;	// 0x31857f81
- (void)dealloc;	// 0x31789591
- (void)deleteContents;	// 0x318588a9
- (id)description;	// 0x3181a659
- (void)detach;	// 0x317aaed9
// declared property getter: - (id)endContainer;	// 0x317a50a1
// declared property getter: - (int)endOffset;	// 0x317a50dd
- (void)expand:(id)expand;	// 0x31857d45
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x3185c85d
- (id)extractContents;	// 0x31858779
- (void)finalize;	// 0x31858fb9
- (void)insertNode:(id)node;	// 0x31858505
- (BOOL)intersectsNode:(id)node;	// 0x31857f41
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x31857e79
- (id)lineBoxRects;	// 0x3181a645
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x3185c345
- (void)selectNode:(id)node;	// 0x317a4de9
- (void)selectNodeContents:(id)contents;	// 0x31858961
- (void)setEnd:(id)end :(int)arg2;	// 0x31858a4d
- (void)setEnd:(id)end offset:(int)offset;	// 0x31858b99
- (void)setEndAfter:(id)after;	// 0x317aad31
- (void)setEndBefore:(id)before;	// 0x318589d5
- (void)setStart:(id)start :(int)arg2;	// 0x31858ce5
- (void)setStart:(id)start offset:(int)offset;	// 0x31858e31
- (void)setStartAfter:(id)after;	// 0x31858a11
- (void)setStartBefore:(id)before;	// 0x317aacd9
// declared property getter: - (id)startContainer;	// 0x3179d3d5
// declared property getter: - (int)startOffset;	// 0x317a5069
- (void)surroundContents:(id)contents;	// 0x318583c1
// declared property getter: - (id)text;	// 0x317aad81
- (id)textRects;	// 0x3181b8f9
- (id)toString;	// 0x31858131
@end
