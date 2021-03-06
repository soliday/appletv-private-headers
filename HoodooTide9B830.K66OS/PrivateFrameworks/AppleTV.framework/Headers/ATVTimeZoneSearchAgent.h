/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
@private
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0x3294efe5
- (id)initWithController:(id)controller;	// 0x3294f031
- (long)cacheSize;	// 0x3294f1cd
- (void)dealloc;	// 0x3294f079
- (BOOL)handlePlayForObject:(id)object;	// 0x3294f1d5
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x3294f0b9
- (BOOL)showRecentSearches;	// 0x3294f1d1
@end

