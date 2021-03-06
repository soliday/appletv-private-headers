/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h> // Unknown library
#import "ASRuntimeFixProtocol.h"

@class NSSet;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {
	BOOL _shouldNotifyMobileMail;	// 4 = 0x4
	NSSet *_supportedMailClasses;	// 8 = 0x8
}
- (id)init;	// 0x35d98725
- (BOOL)_cleanupAccountClass:(id)aClass;	// 0x35d989d5
- (void)accountsHaveBeenSaved:(BOOL)saved;	// 0x35d9892d
- (void)dealloc;	// 0x35d98801
- (int)fixBasicAccountIfNeeded:(id)needed loggingMessage:(id)message;	// 0x35d9884d
- (id)supportedAccountTypes;	// 0x35d9896d
@end

