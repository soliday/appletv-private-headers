/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
@private
	WebScriptWorldPrivate *_private;	// 4 = 0x4
}
+ (id)findOrCreateWorld:(DOMWrapperWorld *)world;	// 0x352a9d29
+ (id)scriptWorldForGlobalContext:(OpaqueJSContext *)globalContext;	// 0x352a9bb1
+ (id)standardWorld;	// 0x352a9bcd
+ (id)world;	// 0x3525b791
- (id)init;	// 0x3525b7c9
- (id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>)world;	// 0x3525b8c1
- (void)dealloc;	// 0x3525bde1
- (void)unregisterWorld;	// 0x3525bdc1
@end

