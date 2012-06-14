/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebBasePluginPackage.h"
#import "WebKit-Structs.h"

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage {
@private
	NSBundle *nsBundle;	// 44 = 0x2c
}
- (id)initWithPath:(id)path;	// 0x30d1e349
- (id)bundle;	// 0x30d2337d
- (void)dealloc;	// 0x30d6d039
- (BOOL)load;	// 0x30d23219
- (Class)viewFactory;	// 0x30d232c9
@end

