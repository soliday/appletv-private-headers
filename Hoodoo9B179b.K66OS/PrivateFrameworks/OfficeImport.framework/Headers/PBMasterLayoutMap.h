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
+ (id)masterLayoutMap;	// 0x327f2de9
- (id)init;	// 0x327f2e2d
- (id)allMasterIds;	// 0x327f86d5
- (void)dealloc;	// 0x327c2a45
- (long)masterIdForTitleId:(long)titleId;	// 0x327f73dd
- (id)masterInfoForMasterId:(long)masterId;	// 0x3273d0f1
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x3273cfcd
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x327f7291
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x327f3825
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x3273cfa1
@end

