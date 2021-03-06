/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class NSArray, NSString, SSURLRequestProperties, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
@private
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x34e3b509; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x34e3b5cd; 
@property(readonly, assign) int assetType;	// G=0x34e3bba5; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x34e3bbb5; 
@property(readonly, assign) NSString *downloadPath;	// G=0x34e3bbe9; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x34e3bc45; 
@property(readonly, assign) long long fileSize;	// G=0x34e3bc09; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x34e3bc05; 
@property(readonly, assign) NSArray *sinfs;	// G=0x34e3b4ed; 
+ (long long)_existsMessage;	// 0x34e3b55d
+ (long long)_getExternalValuesMessage;	// 0x34e3b565
+ (long long)_getValueMessage;	// 0x34e3b56d
+ (long long)_setValuesMessage;	// 0x34e3b575
+ (id)assetWithURL:(id)url type:(int)type;	// 0x34e3baf9
- (id)initWithURLRequest:(id)urlrequest;	// 0x34e3b3f1
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x34e3bb79
// declared property getter: - (id)URLRequest;	// 0x34e3b509
// declared property getter: - (id)URLRequestProperties;	// 0x34e3b5cd
- (id)_copyURLRequestProperties;	// 0x34e3bc75
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x34e3b5f5
- (int)_legacyAssetType;	// 0x34e3b9d1
- (void)_resetLocalIVars;	// 0x34e3b57d
// converted property getter: - (int)assetType;	// 0x34e3bba5
- (long long)bytesDownloaded;	// 0x34e3b4b1
- (id)copyXPCEncoding;	// 0x34e3b9e1
- (void)dealloc;	// 0x34e3b465
// declared property getter: - (id)downloadFileName;	// 0x34e3bbb5
// declared property getter: - (id)downloadPath;	// 0x34e3bbe9
// declared property getter: - (long long)fileSize;	// 0x34e3bc09
// declared property getter: - (id)finalizedPath;	// 0x34e3bc05
// declared property getter: - (BOOL)isExternal;	// 0x34e3bc45
// declared property getter: - (id)sinfs;	// 0x34e3b4ed
@end

