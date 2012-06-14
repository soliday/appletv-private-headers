/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSRequestDelegate.h"

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {
@private
	NSMutableDictionary *_rentals;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x303e621d
- (id)init;	// 0x303e6289
- (id)_init;	// 0x303e62d5
- (void)_loadRentals;	// 0x303e7441
- (void)_saveRentals;	// 0x303e7555
- (void)addRentalWithItemID:(unsigned long long)itemID databaseID:(id)anId;	// 0x303e6365
- (void)dealloc;	// 0x303e6319
- (void)removeAllRentalsForDatabaseID:(id)databaseID;	// 0x303e6a1d
- (void)removeRentalWithItemID:(unsigned long long)itemID;	// 0x303e6575
- (void)request:(id)request didFailWithError:(id)error;	// 0x303e6cf1
- (void)requestDidFinish:(id)request;	// 0x303e6d21
@end

