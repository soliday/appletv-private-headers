/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIWebSelectedItemPrivate.h"

@class DOMHTMLOptionElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
@private
	BOOL _selected;	// 4 = 0x4
	DOMHTMLOptionElement *_node;	// 8 = 0x8
}
@property(retain, nonatomic) DOMHTMLOptionElement *_node;	// G=0x35521bfd; S=0x35521c0d; @synthesize
@property(readonly, retain) DOMHTMLOptionElement *node;	// G=0x35521b51; converted property
@property(assign) BOOL selected;	// G=0x35521b61; S=0x35521b71; converted property
- (id)initWithHTMLOptionNode:(id)htmloptionNode;	// 0x35521ae9
// declared property getter: - (id)_node;	// 0x35521bfd
- (void)dealloc;	// 0x35521bb9
// converted property getter: - (id)node;	// 0x35521b51
// converted property getter: - (BOOL)selected;	// 0x35521b61
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x35521b71
// declared property setter: - (void)set_node:(id)node;	// 0x35521c0d
- (void)unselect;	// 0x35521ba5
@end

