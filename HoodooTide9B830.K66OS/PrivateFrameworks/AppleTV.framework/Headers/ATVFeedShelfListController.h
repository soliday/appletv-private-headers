/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVFeedShelfListController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x32b143d5
- (id)initWithFeedElement:(id)feedElement;	// 0x32b141c9
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x32b146a5
- (id)_elementAtIndexPath:(id)indexPath;	// 0x32b14aad
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x32b1473d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32b1487d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32b1499d
@end
