/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"


@interface CoreDAVLogging : NSObject {
	CFDictionaryRef _logDelegates;	// 4 = 0x4
}
+ (id)sharedLogging;	// 0x317a6e0d
- (id)init;	// 0x317a6d29
- (CFSetRef)_delegatesToLogForProvider:(id)provider;	// 0x317a6f55
- (BOOL)_shouldOutputAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x317a6fc1
- (void)addLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x317a6e95
- (void)dealloc;	// 0x317a6d85
- (CFSetRef)delegatesToLogTransmittedDataForAccountInfoProvider:(id)accountInfoProvider;	// 0x317a6e51
- (void)logDiagnosticForProvider:(id)provider withLevel:(int)level format:(id)format args:(void *)args;	// 0x317a70b1
- (void)removeLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x317a6f15
- (BOOL)shouldLogAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x317a7039
@end

