/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSCondition;

@interface AVCallbackHandler : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	SEL _mainThreadAction;	// 12 = 0xc
	NSCondition *_condition;	// 16 = 0x10
	id _params;	// 20 = 0x14
}
@property(assign) SEL action;	// G=0x33c1c50d; S=0x33c1c521; @synthesize=_action
@property(assign) SEL mainThreadAction;	// G=0x33c1c539; S=0x33c1c54d; @synthesize=_mainThreadAction
@property(assign) id target;	// G=0x33c1c4e1; S=0x33c1c4f5; @synthesize=_target
- (id)init;	// 0x33c1c20d
// declared property getter: - (SEL)action;	// 0x33c1c50d
- (void)dealloc;	// 0x33c1c271
- (BOOL)hasParams;	// 0x33c1c4c9
// declared property getter: - (SEL)mainThreadAction;	// 0x33c1c539
// declared property setter: - (void)setAction:(SEL)action;	// 0x33c1c521
- (void)setCallbackParams:(id)params;	// 0x33c1c2f9
// declared property setter: - (void)setMainThreadAction:(SEL)action;	// 0x33c1c54d
// declared property setter: - (void)setTarget:(id)target;	// 0x33c1c4f5
// declared property getter: - (id)target;	// 0x33c1c4e1
- (id)waitForCallbackParams;	// 0x33c1c431
@end

