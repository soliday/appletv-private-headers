/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject {
@private
	double timestamp;	// 4 = 0x4
	addrinfo *addressInfo;	// 12 = 0xc
}
+ (id)addressInfoForHost:(id)host;	// 0x31624ac1
+ (void)asyncResolveWithCallbackClient:(id)callbackClient;	// 0x31624bfd
- (id)_initWithAddressInfo:(addrinfo *)addressInfo;	// 0x31624d51
- (double)_timestamp;	// 0x31624db9
- (addrinfo *)addrinfo;	// 0x31624da9
- (void)dealloc;	// 0x31624dd1
- (void)finalize;	// 0x31624e15
@end

