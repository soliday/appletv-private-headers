/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import <NSObject.h> // Unknown library


@interface PCLogging : NSObject {
}
+ (void)__appendString:(id)string toFileNamed:(id)fileNamed;	// 0x36d25b71
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x36d25ae5
+ (id)_stringWithCurrentTime;	// 0x36d25e41
+ (dispatch_group_s *)dispatchGroup;	// 0x36d2632d
+ (dispatch_queue_s *)dispatchQueue;	// 0x36d262cd
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x36d25885
+ (void)enableFileLogging:(BOOL)logging;	// 0x36d25899
+ (void)enableLoggingForCustomHandler:(id)customHandler;	// 0x36d259b5
+ (void)initialize;	// 0x36d26359
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;	// 0x36d262a5
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void *)arguments;	// 0x36d25ec9
+ (id)logFileDirectory;	// 0x36d25e9d
+ (void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;	// 0x36d258ad
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x36d25861
@end

