/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonStreamParserState.h"


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserStateObjectStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x30500a71
- (id)name;	// 0x30500aad
- (BOOL)needKey;	// 0x30500b05
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x30500ab9
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x30500ac9
@end
