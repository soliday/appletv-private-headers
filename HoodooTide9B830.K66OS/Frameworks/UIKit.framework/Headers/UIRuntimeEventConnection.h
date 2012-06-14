/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"


__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection {
@private
	unsigned eventMask;	// 16 = 0x10
}
@property(readonly, assign) SEL action;	// G=0x30291f3d; 
@property(assign) unsigned eventMask;	// G=0x302920d9; S=0x302920e9; @synthesize
@property(readonly, assign) id target;	// G=0x30291f01; 
- (id)initWithCoder:(id)coder;	// 0x30291e41
// declared property getter: - (SEL)action;	// 0x30291f3d
- (void)connect;	// 0x30291f59
- (void)connectForSimulator;	// 0x30291f89
- (id)description;	// 0x30292059
- (void)encodeWithCoder:(id)coder;	// 0x30291ea1
// declared property getter: - (unsigned)eventMask;	// 0x302920d9
// declared property setter: - (void)setEventMask:(unsigned)mask;	// 0x302920e9
// declared property getter: - (id)target;	// 0x30291f01
@end

