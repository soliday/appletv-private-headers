/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserState : NSObject {
}
+ (id)sharedInstance;	// 0x32c44e95
- (id)name;	// 0x32c44ea9
- (BOOL)needKey;	// 0x32c44ea5
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x32c44e99
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x32c44ea1
- (int)parserShouldReturn:(id)parser;	// 0x32c44e9d
@end

