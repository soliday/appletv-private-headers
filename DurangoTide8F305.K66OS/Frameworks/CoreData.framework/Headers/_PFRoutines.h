/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFRoutines : NSObject {
}
+ (BOOL)_doNameAndTypeCheck:(id)check;	// 0x342e590d
+ (BOOL)_generateObjectIDMaptableForArray:(id)array withMapping:(id *)mapping andEntries:(id *)entries;	// 0x342d2ba5
+ (id)_getPFBundleVersionNumber;	// 0x342c0695
+ (id)_getUUID;	// 0x342e6e81
+ (id)_groupObjectsByRootEntity:(id)entity;	// 0x342e59a5
+ (id)_newObjectIDsArrayWithMapping:(id)mapping andEntries:(id)entries andCoordinator:(id)coordinator;	// 0x342e5fa1
+ (BOOL)convertCString:(const char *)string toUnsignedInt64:(unsigned long long *)unsignedInt64 withBase:(int)base;	// 0x342e6ed9
+ (void)deleteFileForPFExternalReferenceData:(id)pfexternalReferenceData;	// 0x342e57c5
+ (void)initialize;	// 0x342b049d
+ (long long)lengthOfFileAtExternalReferenceLocation:(const char *)externalReferenceLocation;	// 0x342e71e9
+ (BOOL)moveInterimFileToPermanentLocation:(id)permanentLocation;	// 0x342e7ee9
+ (id)newMappedDataForExternalReference:(id)externalReference;	// 0x342e5879
+ (void)readBytesForExternalReferenceData:(id)externalReferenceData intoBuffer:(void *)buffer range:(NSRange)range;	// 0x342e702d
+ (void *)readExternalReferenceDataFromFile:(id)file;	// 0x342e6f49
+ (id)writePFExternalReferenceDataToInterimFile:(id)interimFile;	// 0x342e7fe9
@end
