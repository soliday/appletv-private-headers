/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SETTINGSTopShelfController.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTopShelfController.h"

@class BRTopShelfView;

__attribute__((visibility("hidden")))
@interface SETTINGSTopShelfController : XXUnknownSuperclass <BRTopShelfController> {
	BRTopShelfView *_topShelf;	// 4 = 0x4
}
- (id)init;	// 0xce26d
- (void).cxx_destruct;	// 0xce39d
- (void)dealloc;	// 0xce2a9
- (id)mainMenuShelfView;	// 0xce385
- (void)refresh;	// 0xce395
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0xce399
- (id)topShelfView;	// 0xce315
@end

@interface SETTINGSTopShelfController (Private)
@end

