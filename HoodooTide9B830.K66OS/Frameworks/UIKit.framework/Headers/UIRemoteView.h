/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIRemoteWindow;

@interface UIRemoteView : UIView {
	NSString *_remoteViewIdentifier;	// 48 = 0x30
	UIRemoteWindow *_remoteWindow;	// 52 = 0x34
	BOOL _captureAllWindows;	// 56 = 0x38
	BOOL _remoteViewOpaque;	// 57 = 0x39
}
@property(readonly, retain) NSString *remoteViewIdentifier;	// G=0x302c3a49; converted property
- (id)initWithFrame:(CGRect)frame captureAllWindows:(BOOL)windows;	// 0x302c3591
- (void)dealloc;	// 0x302c3915
- (void)registerWithIdentifier:(id)identifier;	// 0x302c35e9
// converted property getter: - (id)remoteViewIdentifier;	// 0x302c3a49
- (void)setRemoteViewOpaque:(BOOL)opaque;	// 0x302c35d9
- (void)unregister;	// 0x302c3955
@end

