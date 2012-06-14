/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class SFUDataRepresentation, NSString, NSMutableDictionary, SFUCryptoKey, NSData;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipArchive : NSObject {
@private
	NSMutableDictionary *mEntries;	// 4 = 0x4
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;	// 8 = 0x8
	NSData *mPassphraseVerifier;	// 12 = 0xc
	NSString *mPassphraseHint;	// 16 = 0x10
	SFUCryptoKey *mCryptoKey;	// 20 = 0x14
	NSData *mEncryptedDocumentUuid;	// 24 = 0x18
}
+ (BOOL)isZipArchiveAtPath:(id)path;	// 0x34656dd5
- (id)initWithData:(id)data collapseCommonRootDirectory:(BOOL)directory;	// 0x34551b79
- (id)initWithPath:(id)path collapseCommonRootDirectory:(BOOL)directory;	// 0x344f544d
- (id)allEntryNames;	// 0x34656d31
- (void)collapseCommonRootDirectory;	// 0x34656e79
- (void)dealloc;	// 0x345145d5
- (id)encryptedDocumentUuid;	// 0x34656ce9
- (id)entryWithName:(id)name;	// 0x344f7b99
- (id)entryWithName:(id)name dataLength:(long long)length;	// 0x34656cf9
- (BOOL)isEncrypted;	// 0x34656cb1
- (id)passphraseHint;	// 0x34656cd9
- (id)passphraseVerifier;	// 0x34656cc9
- (SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)inputStream;	// 0x344f6661
- (void)readEntries;	// 0x344f5991
- (void)readExtraFieldFromBuffer:(const char *)buffer size:(unsigned long)size entry:(id)entry;	// 0x34523b45
- (id)readFilenameFromBuffer:(const char *)buffer size:(unsigned long)size;	// 0x344f7541
- (SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)inputStream eocdOffset:(long long)offset;	// 0x346572b5
- (SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)inputStream offset:(long long)offset;	// 0x3465716d
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)inputStream offset:(long long *)offset;	// 0x3465742d
- (void)setCryptoKey:(id)key;	// 0x34656d51
@end

