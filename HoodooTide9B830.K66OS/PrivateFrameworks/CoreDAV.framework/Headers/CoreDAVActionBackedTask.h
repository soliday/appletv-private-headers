/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {
	CoreDAVAction *_backingAction;	// 132 = 0x84
}
@property(retain) CoreDAVAction *action;	// G=0x35dea0a9; S=0x35dea0b9; 
@property(retain) CoreDAVAction *backingAction;	// G=0x35dea0c9; S=0x35dea0dd; @synthesize=_backingAction
// declared property getter: - (id)action;	// 0x35dea0a9
// declared property getter: - (id)backingAction;	// 0x35dea0c9
- (void)dealloc;	// 0x35dea05d
- (id)description;	// 0x35de9f99
// declared property setter: - (void)setAction:(id)action;	// 0x35dea0b9
// declared property setter: - (void)setBackingAction:(id)action;	// 0x35dea0dd
@end

