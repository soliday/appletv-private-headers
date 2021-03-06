/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <NSObject.h> // Unknown library


@interface BRMainMenuSelectionHandler : NSObject <BRSelectionHandler> {
@private
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
+ (id)handlerWithHandler:(id)handler;	// 0x35e7c739
- (id)initWithHandler:(id)handler;	// 0x35e7c775
- (void)dealloc;	// 0x35e7c7c9
- (BOOL)handlePlayForControl:(id)control;	// 0x35e7c969
- (BOOL)handleSelectionForControl:(id)control;	// 0x35e7c815
@end

