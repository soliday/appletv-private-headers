/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x30128d0d; converted property
@property(readonly, retain) NSString *path;	// G=0x30128cfd; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x30128da9; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x3012bc69
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x3012bbfd
+ (BOOL)isIgnoreFunctionSymbols;	// 0x3012bc0d
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x30128ff9
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x30128ea1
+ (id)symbolicatorForPid:(int)pid;	// 0x30128fbd
+ (id)symbolicatorForSignature:(id)signature;	// 0x30129069
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x3012c1c9
+ (id)symbolicatorForTask:(unsigned)task;	// 0x30128f81
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x3012bd11
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x3012be59
+ (id)symbolicatorsForPath:(id)path;	// 0x30129561
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x3012bea1
- (BOOL)addSymbolRichFile:(id)file;	// 0x30129225
- (id)architecture;	// 0x30129871
- (BOOL)containsAddress:(unsigned long long)address;	// 0x30128d1d
- (void)dealloc;	// 0x301297c5
- (id)description;	// 0x30128df1
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x3012b9b1
- (void)forceFullSymbolExtraction;	// 0x3012996d
// converted property getter: - (BOOL)isProtected;	// 0x30128d0d
// converted property getter: - (id)path;	// 0x30128cfd
- (int)pid;	// 0x30128dd1
- (id)programTextForAddress:(unsigned long long)address;	// 0x3012bc1d
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x3012c0d5
- (id)regionForAddress:(unsigned long long)address;	// 0x3012b3ad
- (id)regions;	// 0x3012b4f5
- (id)regionsForName:(id)name;	// 0x3012afdd
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x3012b179
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x3012b689
- (id)signature;	// 0x30129a95
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x3012ad4d
- (id)sourceInfos;	// 0x3012a049
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x30129cf1
- (id)symbolForAddress:(unsigned long long)address;	// 0x3012ae95
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x30128d3d
- (id)symbolOwnerForName:(id)name;	// 0x30128d65
- (id)symbolOwnerForPath:(id)path;	// 0x3012a339
// converted property getter: - (id)symbolOwners;	// 0x30128da9
- (id)symbolOwnersForName:(id)name;	// 0x3012a65d
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x3012ab11
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x3012a4c5
- (id)symbols;	// 0x3012a1c1
- (id)symbolsForMangledName:(id)mangledName;	// 0x3012a819
- (id)symbolsForName:(id)name;	// 0x3012a995
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x30129e9d
@end
