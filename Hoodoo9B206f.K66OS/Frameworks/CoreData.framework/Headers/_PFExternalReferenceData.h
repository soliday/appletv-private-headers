/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSData.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData {
@private
	NSData *_originalData;	// 4 = 0x4
	void *_bytesPtrForStore;	// 8 = 0x8
	unsigned _bytesLengthForStore;	// 12 = 0xc
	void *_bytesPtrForExternalReference;	// 16 = 0x10
	unsigned _bytesLengthForExternalReference;	// 20 = 0x14
	NSString *_externalReferenceLocation;	// 24 = 0x18
	NSString *_safeguardLocation;	// 28 = 0x1c
	id _ubiquitousLocation;	// 32 = 0x20
	externalDataFlags _externalDataFlags;	// 36 = 0x24
}
@property(retain) id ubiquitousLocation;	// G=0x3632b46d; S=0x3632bc3d; converted property
+ (BOOL)_releaseReservedMapFileDescriptor;	// 0x3632bd01
+ (BOOL)_reserveMapFileDescriptor;	// 0x3632bce9
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)useReserveNew;	// 0x3632c015
- (id)initForExternalLocation:(id)externalLocation safeguardLocation:(id)location data:(id)data protectionLevel:(int)level;	// 0x3632cf81
- (id)initForUbiquityDictionary:(id)ubiquityDictionary store:(id)store;	// 0x3632d1ed
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length externalLocation:(id)location safeguardLocation:(id)location4 protectionLevel:(int)level;	// 0x3632cd11
- (id)UUID;	// 0x3632bc1d
- (BOOL)_attemptToMapData:(id *)mapData;	// 0x3632c80d
- (unsigned)_bytesLengthForExternalReference;	// 0x3632b449
- (unsigned)_bytesLengthForStore;	// 0x3632b439
- (const void *)_bytesPtrForExternalReference;	// 0x3632baf5
- (const void *)_bytesPtrForStore;	// 0x3632b429
- (void)_deleteExternalReferenceFromPermanentLocation;	// 0x3632b9e9
- (void)_doCleanup;	// 0x3632cc2d
- (id)_exceptionForReadError:(id)readError;	// 0x3632b88d
- (const char *)_externalReferenceLocation;	// 0x3632bb05
- (id)_externalReferenceLocationString;	// 0x3632bb25
- (BOOL)_isEqualHelper:(id)helper;	// 0x3632c061
- (void)_moveExternalReferenceToPermanentLocation;	// 0x3632c581
- (id)_originalData;	// 0x3632b3f5
- (const void *)_retrieveExternalData;	// 0x3632c6a1
- (const char *)_safeguardLocation;	// 0x3632bb35
- (id)_safeguardLocationString;	// 0x3632bb55
- (void)_setBytesForExternalReference:(const void *)externalReference;	// 0x3632b405
- (void)_writeExternalReferenceToInterimLocation;	// 0x3632b9ad
- (const void *)bytes;	// 0x3632bad5
- (Class)classForCoder:(id)coder;	// 0x3632b809
- (id)constructSafeguardStringFromString:(id)string;	// 0x3632b7c9
- (id)copy;	// 0x3632b825
- (id)databaseValue;	// 0x3632bbd5
- (void)dealloc;	// 0x3632bf7d
- (id)description;	// 0x3632ba25
- (void)doCleanupOnDealloc;	// 0x3632b47d
- (id)externalReferenceLocationString;	// 0x3632bb8d
- (id)filename;	// 0x3632bbc5
- (void)finalize;	// 0x3632cbed
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x3632bc85
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x3632c379
- (BOOL)hasExternalReferenceContent;	// 0x3632b415
- (BOOL)isEqual:(id)equal;	// 0x3632bca5
- (BOOL)isEqualToData:(id)data;	// 0x3632bdf5
- (unsigned)length;	// 0x3632bae5
- (id)mutableCopy;	// 0x3632b835
- (int)preferredProtectionLevel;	// 0x3632b459
// converted property setter: - (void)setUbiquitousLocation:(id)location;	// 0x3632bc3d
- (id)subdataWithRange:(NSRange)range;	// 0x3632c1ad
// converted property getter: - (id)ubiquitousLocation;	// 0x3632b46d
@end

