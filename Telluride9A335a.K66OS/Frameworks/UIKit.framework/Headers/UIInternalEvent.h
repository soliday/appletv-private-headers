/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIEvent.h"


__attribute__((visibility("hidden")))
@interface UIInternalEvent : UIEvent {
@private
	GSEventRef _gsEvent;	// 12 = 0xc
}
- (GSEventRef)_gsEvent;	// 0x3397b519
- (void)_setGSEvent:(GSEventRef)event;	// 0x3397b141
@end

