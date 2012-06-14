/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	int _manifestType;	// 8 = 0x8
}
@property(readonly, assign) int manifestType;	// G=0x3052d929; 
- (id)init;	// 0x3052d599
- (id)initWithManifestType:(int)manifestType;	// 0x3052d5ad
- (void)_removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x3052db5d
- (void)dealloc;	// 0x3052d639
- (void)getPathsForFilesWithClass:(int)aClass completionBlock:(id)block;	// 0x3052d685
// declared property getter: - (int)manifestType;	// 0x3052d929
- (void)rebuildManifestWithCompletionBlock:(id)completionBlock;	// 0x3052d939
- (void)removeItemWithAssetPath:(id)assetPath completionBlock:(id)block;	// 0x3052da11
- (void)removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x3052dae1
@end

