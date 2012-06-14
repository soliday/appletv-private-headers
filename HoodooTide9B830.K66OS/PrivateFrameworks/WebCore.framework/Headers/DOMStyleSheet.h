/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMMediaList, DOMNode, NSString;

__attribute__((visibility("hidden")))
@interface DOMStyleSheet : DOMObject {
}
@property(assign) BOOL disabled;	// G=0x3593a311; S=0x3593a341; 
@property(readonly, copy) NSString *href;	// G=0x3593a611; 
@property(readonly, retain) DOMMediaList *media;	// G=0x3593a48d; 
@property(readonly, retain) DOMNode *ownerNode;	// G=0x3593a79d; 
@property(readonly, retain) DOMStyleSheet *parentStyleSheet;	// G=0x3593a6d9; 
@property(readonly, copy) NSString *title;	// G=0x3593a549; 
@property(readonly, copy) NSString *type;	// G=0x3593a859; 
- (void)dealloc;	// 0x3593a40d
// declared property getter: - (BOOL)disabled;	// 0x3593a311
- (void)finalize;	// 0x3593a9a9
// declared property getter: - (id)href;	// 0x3593a611
// declared property getter: - (id)media;	// 0x3593a48d
// declared property getter: - (id)ownerNode;	// 0x3593a79d
// declared property getter: - (id)parentStyleSheet;	// 0x3593a6d9
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3593a341
// declared property getter: - (id)title;	// 0x3593a549
// declared property getter: - (id)type;	// 0x3593a859
@end

