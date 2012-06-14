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
@property(assign) id delegate;	// G=0x31dba12d; S=0x31dba13d; converted property
- (id)init;	// 0x31dba02d
- (void)_dispatchCallBack:(void *)back flags:(unsigned long)flags error:(XXStruct_K5nmsA)error;	// 0x31dba5dd
- (CFNetServiceBrowserRef)_internalNetServiceBrowser;	// 0x31dba5cd
- (void)dealloc;	// 0x31dba965
// converted property getter: - (id)delegate;	// 0x31dba12d
- (void)finalize;	// 0x31dba9cd
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31dba18d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31dba14d
- (void)searchForAllDomains;	// 0x31dbaa29
- (void)searchForBrowsableDomains;	// 0x31dba1cd
- (void)searchForRegistrationDomains;	// 0x31dba315
- (void)searchForServicesOfType:(id)type inDomain:(id)domain;	// 0x31dba45d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31dba13d
- (void)stop;	// 0x31dba5ad
@end

