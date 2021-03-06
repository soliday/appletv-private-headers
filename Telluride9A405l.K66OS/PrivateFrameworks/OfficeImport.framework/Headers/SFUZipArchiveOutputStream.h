/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUSimpleOutputStream.h"
#import <NSObject.h> // Unknown library

@class SFUMoveableFileOutputStream, NSMutableArray, SFUZipFreeSpaceEntry, SFUZipOutputEntry, SFUCryptoKey, NSData;
@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
@private
	SFUMoveableFileOutputStream *mOutputStream;	// 4 = 0x4
	SFUCryptoKey *mCryptoKey;	// 8 = 0x8
	NSData *mPassphraseHint;	// 12 = 0xc
	NSData *mEncryptedDocumentUuid;	// 16 = 0x10
	NSMutableArray *mEntries;	// 20 = 0x14
	SFUZipOutputEntry *mCurrentEntry;	// 24 = 0x18
	SFUZipOutputEntry *mLastEntryInFile;	// 28 = 0x1c
	id<SFUOutputStream> mEntryOutputStream;	// 32 = 0x20
	char *mBuffer;	// 36 = 0x24
	NSMutableArray *mFreeList;	// 40 = 0x28
	SFUZipFreeSpaceEntry *mCurrentFreeSpace;	// 44 = 0x2c
	unsigned long long mFreeBytes;	// 48 = 0x30
}
+ (unsigned long)approximateBytesForEntryHeaderWithName:(id)name;	// 0x30ec7b3d
- (id)initWithOutputStream:(id)outputStream cryptoKey:(id)key passphraseHint:(id)hint;	// 0x30ec7711
- (id)initWithPath:(id)path;	// 0x30ec5905
- (id)initWithPath:(id)path cryptoKey:(id)key passphraseHint:(id)hint;	// 0x30ec790d
- (void)beginEntryWithName:(id)name isCompressed:(BOOL)compressed uncompressedSize:(unsigned long long)size;	// 0x30ec8279
- (id)beginUncompressedUnknownSizeEntryWithName:(id)name;	// 0x30ec594d
- (void)beginUnknownSizeEntryWithName:(id)name isCompressed:(BOOL)compressed;	// 0x30ec5925
- (BOOL)canRemoveEntryWithName:(id)name;	// 0x30ec5a45
- (void)close;	// 0x30ec7c69
- (void)coalesceAndTruncateFreeSpace;	// 0x30ec66c1
- (unsigned)crc32ForEntry:(id)entry;	// 0x30ec7b6d
- (void)dealloc;	// 0x30ec7a65
- (id)entriesAtPath:(id)path;	// 0x30ec63e5
- (id)entryNames;	// 0x30ec633d
- (void)finishEntry;	// 0x30ec8885
- (void)flush;	// 0x30ec65e5
- (unsigned long long)freeBytes;	// 0x30ec582d
- (void)moveToPath:(id)path;	// 0x30ec614d
- (void)removeEntryWithName:(id)name;	// 0x30ec5bb5
- (void)reset;	// 0x30ec6605
- (void)setCrc32ForCurrentEntry:(unsigned)currentEntry;	// 0x30ec57fd
- (void)setEncryptedDocumentUuid:(id)uuid;	// 0x30ec60cd
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x30ec8115
- (void)writeCentralFileHeaderUsingEntry:(id)entry isFirstEntry:(BOOL)entry2;	// 0x30ec6de5
- (void)writeEndOfCentralDirectoryWithOffset:(long long)offset;	// 0x30ec7369
- (unsigned)writeLocalFileHeaderForEntry:(id)entry;	// 0x30ec6b81
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)offset;	// 0x30ec75bd
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)offset;	// 0x30ec74c9
@end

