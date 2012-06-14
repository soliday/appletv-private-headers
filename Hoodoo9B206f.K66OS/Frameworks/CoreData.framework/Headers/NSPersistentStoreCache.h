/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : NSObject {
@private
	id _externalData;	// 4 = 0x4
	unsigned _capacity;	// 8 = 0x8
}
+ (void)initialize;	// 0x36258af9
- (id)init;	// 0x36239c69
- (void)_growRegistrationCollectionTo:(unsigned)to;	// 0x362c7399
- (void)dealloc;	// 0x36251015
- (void)decrementRefCountForObjectID:(id)objectID;	// 0x3624e5ed
- (id)externalDataForObjectID:(id)objectID timestamp:(double)timestamp;	// 0x3624be2d
- (id)externalDataForSourceObjectID:(id)sourceObjectID key:(id)key timestamp:(double)timestamp;	// 0x362c739d
- (void)forgetAllExternalData;	// 0x362c74c9
- (void)forgetExternalDataForObjectID:(id)objectID;	// 0x3624e651
- (void)incrementRefCountForObjectID:(id)objectID;	// 0x362c749d
- (unsigned)optionsForObjectID:(id)objectID;	// 0x362c7445
- (int)refCountForObjectID:(id)objectID;	// 0x362c7471
- (void)registerExternalData:(id)data forObjectID:(id)objectID options:(unsigned)options;	// 0x36246c39
- (void)registerExternalData:(id)data forSourceObjectID:(id)sourceObjectID key:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x362c7405
@end

