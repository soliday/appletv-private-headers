/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSNetServiceBrowser : NSObject {
@private
	id _netServiceBrowser;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x320d113d; S=0x320d114d; converted property
- (id)init;	// 0x320d103d
- (void)_dispatchCallBack:(void *)back flags:(unsigned long)flags error:(XXStruct_K5nmsA)error;	// 0x320d15ed
- (CFNetServiceBrowserRef)_internalNetServiceBrowser;	// 0x320d15dd
- (void)dealloc;	// 0x320d1975
// converted property getter: - (id)delegate;	// 0x320d113d
- (void)finalize;	// 0x320d19dd
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x320d119d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x320d115d
- (void)searchForAllDomains;	// 0x320d1a39
- (void)searchForBrowsableDomains;	// 0x320d11dd
- (void)searchForRegistrationDomains;	// 0x320d1325
- (void)searchForServicesOfType:(id)type inDomain:(id)domain;	// 0x320d146d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x320d114d
- (void)stop;	// 0x320d15bd
@end

