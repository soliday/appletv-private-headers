/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (NSDictionary)
+ (id)dictionaryWithContentsOfFile:(id)file;	// 0x319eaff9
+ (id)dictionaryWithContentsOfURL:(id)url;	// 0x31a4aae5
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x319eb039
+ (BOOL)supportsSecureCoding;	// 0x31a4a955
- (id)initWithCoder:(id)coder;	// 0x319f43cd
- (id)initWithContentsOfFile:(id)file;	// 0x31a4ab25
- (id)initWithContentsOfURL:(id)url;	// 0x31a4ab61
- (id)_stringToWrite;	// 0x31a4a975
- (Class)classForCoder;	// 0x31a4a959
- (id)descriptionInStringsFileFormat;	// 0x31a220ad
- (void)encodeWithCoder:(id)coder;	// 0x31a25721
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x31a2746d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x31a4a9d5
@end

@interface NSDictionary (NSFileAttributes)
- (id)fileCreationDate;	// 0x31a50661
- (BOOL)fileExtensionHidden;	// 0x31a50569
- (id)fileGroupOwnerAccountID;	// 0x31a50699
- (id)fileGroupOwnerAccountName;	// 0x31a504e1
- (unsigned)fileGroupOwnerAccountNumber;	// 0x31a504fd
- (unsigned long)fileHFSCreatorCode;	// 0x31a50599
- (unsigned long)fileHFSTypeCode;	// 0x31a505cd
- (BOOL)fileIsAppendOnly;	// 0x31a50631
- (BOOL)fileIsImmutable;	// 0x31a50601
- (id)fileModificationDate;	// 0x31a50455
- (id)fileOwnerAccountID;	// 0x31a5067d
- (id)fileOwnerAccountName;	// 0x31a504c1
- (unsigned)fileOwnerAccountNumber;	// 0x31a504dd
- (unsigned)filePosixPermissions;	// 0x31a5048d
- (unsigned long long)fileSize;	// 0x31a50421
- (unsigned)fileSystemFileNumber;	// 0x31a50535
- (int)fileSystemNumber;	// 0x31a50501
- (id)fileType;	// 0x31a50471
@end

@interface NSDictionary (NSKeyValueCoding)
- (id)valueForKey:(id)key;	// 0x319ecb0d
- (id)valueForKeyPath:(id)keyPath;	// 0x31a61ee1
@end

@interface NSDictionary (NSURLExtras)
- (int)_web_intForKey:(id)key;	// 0x31a9c3e5
- (id)_web_numberForKey:(id)key;	// 0x31a9c449
- (id)_web_objectForMIMEType:(id)mimetype;	// 0x31a9c47d
- (id)_web_stringForKey:(id)key;	// 0x31a9c415
@end

@interface NSDictionary (NSDictionaryPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b336d5
@end
