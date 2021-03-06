/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSURL, NSString, NSData, NSDictionary, NSError;

@interface MSAsset : NSObject <NSCoding, NSCopying> {
@private
	NSData *_masterAssetHash;	// 4 = 0x4
	NSDictionary *_metadata;	// 8 = 0x8
	NSData *_fileHash;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	NSString *_type;	// 20 = 0x14
	NSString *_MMCSAccessHeader;	// 24 = 0x18
	NSURL *_MMCSURL;	// 28 = 0x1c
	unsigned long long _protocolFileSize;	// 32 = 0x20
	NSData *_fileData;	// 40 = 0x28
	NSError *_error;	// 44 = 0x2c
}
@property(retain, nonatomic) NSString *MMCSAccessHeader;	// G=0x304cac65; S=0x304cac75; @synthesize=_MMCSAccessHeader
@property(retain, nonatomic) NSURL *MMCSURL;	// G=0x304cac99; S=0x304caca9; @synthesize=_MMCSURL
@property(retain, nonatomic) NSError *error;	// G=0x304cad2d; S=0x304cad3d; @synthesize=_error
@property(retain, nonatomic) NSData *fileData;	// G=0x304cacf9; S=0x304cad09; @synthesize=_fileData
@property(retain, nonatomic) NSData *fileHash;	// G=0x304cabc9; S=0x304cabd9; @synthesize=_fileHash
@property(retain, nonatomic) NSData *masterAssetHash;	// G=0x304cab61; S=0x304cab71; @synthesize=_masterAssetHash
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x304cab95; S=0x304caba5; @synthesize=_metadata
@property(retain, nonatomic) NSString *path;	// G=0x304cabfd; S=0x304cac0d; @synthesize=_path
@property(assign, nonatomic) unsigned long long protocolFileSize;	// G=0x304caccd; S=0x304cace5; @synthesize=_protocolFileSize
@property(retain, nonatomic) NSString *type;	// G=0x304cac31; S=0x304cac41; @synthesize=_type
+ (id)asset;	// 0x304ca2b9
- (id)initWithCoder:(id)coder;	// 0x304ca865
// declared property getter: - (id)MMCSAccessHeader;	// 0x304cac65
// declared property getter: - (id)MMCSURL;	// 0x304cac99
- (unsigned long long)_fileSize;	// 0x304ca465
- (unsigned long long)_fileSizeOnDisk;	// 0x304ca4a5
- (void)addMetadataValue:(id)value forKey:(id)key;	// 0x304caa55
- (id)copyWithZone:(NSZone *)zone;	// 0x304cab09
- (void)dealloc;	// 0x304ca2f1
- (id)description;	// 0x304ca3dd
- (void)encodeWithCoder:(id)coder;	// 0x304ca6b5
// declared property getter: - (id)error;	// 0x304cad2d
// declared property getter: - (id)fileData;	// 0x304cacf9
// declared property getter: - (id)fileHash;	// 0x304cabc9
- (BOOL)isEqual:(id)equal;	// 0x304ca5a9
// declared property getter: - (id)masterAssetHash;	// 0x304cab61
// declared property getter: - (id)metadata;	// 0x304cab95
- (id)metadataValueForKey:(id)key;	// 0x304caae9
// declared property getter: - (id)path;	// 0x304cabfd
// declared property getter: - (unsigned long long)protocolFileSize;	// 0x304caccd
// declared property setter: - (void)setError:(id)error;	// 0x304cad3d
// declared property setter: - (void)setFileData:(id)data;	// 0x304cad09
// declared property setter: - (void)setFileHash:(id)hash;	// 0x304cabd9
// declared property setter: - (void)setMMCSAccessHeader:(id)header;	// 0x304cac75
// declared property setter: - (void)setMMCSURL:(id)mmcsurl;	// 0x304caca9
// declared property setter: - (void)setMasterAssetHash:(id)hash;	// 0x304cab71
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x304caba5
// declared property setter: - (void)setPath:(id)path;	// 0x304cac0d
// declared property setter: - (void)setProtocolFileSize:(unsigned long long)size;	// 0x304cace5
// declared property setter: - (void)setType:(id)type;	// 0x304cac41
// declared property getter: - (id)type;	// 0x304cac31
@end

