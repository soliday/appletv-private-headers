/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSUndoObject.h"


__attribute__((visibility("hidden")))
@interface _NSUndoLightInvocation : _NSUndoObject {
@private
	SEL _selector;	// 16 = 0x10
	id _arg;	// 20 = 0x14
}
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x315ae1f5
- (id)_argument;	// 0x3163bee1
- (void)dealloc;	// 0x315af2cd
- (id)description;	// 0x3163bef1
- (void)invoke;	// 0x3163bead
@end

