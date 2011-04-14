/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSObject.h"
#import "WebGeolocationPolicyListener.h"
#import <NSObject.h> // Unknown library


@protocol WebGeolocationPolicyListener <NSObject>
- (void)allow;
- (void)deny;
- (BOOL)shouldClearCache;
@end

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebGeolocationPolicyListener> {
@private
	RefPtr<WebCore::Geolocation> _geolocation;	// 4 = 0x4
}
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x32c3ddc1
- (id).cxx_construct;	// 0x32c3d8e5
- (void).cxx_destruct;	// 0x32c3de35
- (void)allow;	// 0x32c3de81
- (void)deny;	// 0x32c3de69
- (BOOL)shouldClearCache;	// 0x32c3d8d1
@end
