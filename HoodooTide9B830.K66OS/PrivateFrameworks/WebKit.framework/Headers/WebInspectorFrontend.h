/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject {
@private
	WebInspectorFrontendClient *m_frontendClient;	// 4 = 0x4
}
- (id)initWithFrontendClient:(WebInspectorFrontendClient *)frontendClient;	// 0x352bc1f5
- (void)attach;	// 0x352bc1cd
- (void)detach;	// 0x352bc1e1
@end

