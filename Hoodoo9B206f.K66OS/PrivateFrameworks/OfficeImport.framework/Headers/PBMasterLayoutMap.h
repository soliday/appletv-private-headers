/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBMasterLayoutMap : NSObject {
@private
	NSMutableDictionary *mMasterIdToMasterInfoMap;	// 4 = 0x4
	NSMutableDictionary *mTitleIdToMasterIdInfoMap;	// 8 = 0x8
}
+ (id)masterLayoutMap;	// 0x34432de9
- (id)init;	// 0x34432e2d
- (id)allMasterIds;	// 0x344386d5
- (void)dealloc;	// 0x34402a45
- (long)masterIdForTitleId:(long)titleId;	// 0x344373dd
- (id)masterInfoForMasterId:(long)masterId;	// 0x3437d0f1
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x3437cfcd
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x34437291
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x34433825
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x3437cfa1
@end

