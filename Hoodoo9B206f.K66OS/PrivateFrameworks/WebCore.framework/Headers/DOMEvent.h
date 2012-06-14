/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject {
}
@property(readonly, assign) BOOL bubbles;	// G=0x3347cfed; 
@property(assign) BOOL cancelBubble;	// G=0x3347d125; S=0x3347d155; 
@property(readonly, assign) BOOL cancelable;	// G=0x3347d01d; 
@property(readonly, retain) id<DOMEventTarget> currentTarget;	// G=0x3347d58d; 
@property(readonly, assign) unsigned short eventPhase;	// G=0x3347cfc1; 
@property(assign) BOOL returnValue;	// G=0x3347d0ad; S=0x3347d0e5; 
@property(readonly, retain) id<DOMEventTarget> srcElement;	// G=0x3347d4d1; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x333d800d; 
@property(readonly, assign) unsigned long long timeStamp;	// G=0x3347d04d; 
@property(readonly, copy) NSString *type;	// G=0x3347d649; 
- (void)initEvent:(id)event :(BOOL)arg2 :(BOOL)arg3;	// 0x3347d229
- (void)initEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3;	// 0x3347d37d
// declared property getter: - (BOOL)bubbles;	// 0x3347cfed
// declared property getter: - (BOOL)cancelBubble;	// 0x3347d125
// declared property getter: - (BOOL)cancelable;	// 0x3347d01d
// declared property getter: - (id)currentTarget;	// 0x3347d58d
- (void)dealloc;	// 0x333d81ad
- (BOOL)defaultPrevented;	// 0x3347d07d
// declared property getter: - (unsigned short)eventPhase;	// 0x3347cfc1
- (void)finalize;	// 0x3347d711
- (void)preventDefault;	// 0x3347d1c5
// declared property getter: - (BOOL)returnValue;	// 0x3347d0ad
// declared property setter: - (void)setCancelBubble:(BOOL)bubble;	// 0x3347d155
// declared property setter: - (void)setReturnValue:(BOOL)value;	// 0x3347d0e5
// declared property getter: - (id)srcElement;	// 0x3347d4d1
- (void)stopImmediatePropagation;	// 0x3347d1f9
- (void)stopPropagation;	// 0x3347d195
// declared property getter: - (id)target;	// 0x333d800d
// declared property getter: - (unsigned long long)timeStamp;	// 0x3347d04d
// declared property getter: - (id)type;	// 0x3347d649
@end
