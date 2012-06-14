/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface BRVideoChapterControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x3668140d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x36681451
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x366815e1
@end

