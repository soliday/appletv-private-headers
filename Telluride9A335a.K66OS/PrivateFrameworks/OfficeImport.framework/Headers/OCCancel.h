/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OCCancelDelegate.h"


__attribute__((visibility("hidden")))
@interface OCCancel : NSObject <OCCancelDelegate> {
@private
	BOOL mIsCancelled;	// 4 = 0x4
	BOOL mIsQuit;	// 5 = 0x5
}
- (id)init;	// 0x353ef545
- (void)cancel;	// 0x353ef4f1
- (BOOL)isCancelled;	// 0x353ef505
- (BOOL)isQuit;	// 0x353ef535
- (void)quit;	// 0x353ef515
@end

