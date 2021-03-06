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
+ (id)masterLayoutMap;	// 0x328dbde9
- (id)init;	// 0x328dbe2d
- (id)allMasterIds;	// 0x328e16d5
- (void)dealloc;	// 0x328aba45
- (long)masterIdForTitleId:(long)titleId;	// 0x328e03dd
- (id)masterInfoForMasterId:(long)masterId;	// 0x328260f1
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x32825fcd
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x328e0291
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x328dc825
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x32825fa1
@end

