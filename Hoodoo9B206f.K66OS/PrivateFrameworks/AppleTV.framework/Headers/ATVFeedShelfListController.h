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
- (id)initWithDictionary:(id)dictionary;	// 0x367d0431
- (id)initWithFeedElement:(id)feedElement;	// 0x367d0225
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x367d0701
- (id)_elementAtIndexPath:(id)indexPath;	// 0x367d0b09
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x367d0799
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x367d08d9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x367d09f9
@end

