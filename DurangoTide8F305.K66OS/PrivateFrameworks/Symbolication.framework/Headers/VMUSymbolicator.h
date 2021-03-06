/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableArray, VMUMachTaskContainer, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x31194f81; converted property
@property(readonly, retain) NSString *path;	// G=0x31194f71; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x31195055; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x31197bed
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x31197a21
+ (BOOL)isIgnoreFunctionSymbols;	// 0x31197a2d
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x311950f5
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x311951c1
+ (id)symbolicatorForPid:(int)pid;	// 0x31195159
+ (id)symbolicatorForSignature:(id)signature;	// 0x3119528d
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x31197f49
+ (id)symbolicatorForTask:(unsigned)task;	// 0x3119518d
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x31197ac1
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x31197a7d
+ (id)symbolicatorsForPath:(id)path;	// 0x31196fc5
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x31197c85
- (BOOL)addSymbolRichFile:(id)file;	// 0x31196879
- (id)architecture;	// 0x31195419
- (BOOL)containsAddress:(unsigned long long)address;	// 0x311950d9
- (void)dealloc;	// 0x3119797d
- (id)description;	// 0x31194f91
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x31196b19
- (void)forceFullSymbolExtraction;	// 0x311954f5
// converted property getter: - (BOOL)isProtected;	// 0x31194f81
// converted property getter: - (id)path;	// 0x31194f71
- (int)pid;	// 0x31195035
- (id)programTextForAddress:(unsigned long long)address;	// 0x31197a3d
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x31197e75
- (id)regionForAddress:(unsigned long long)address;	// 0x31197455
- (id)regions;	// 0x311966f5
- (id)regionsForName:(id)name;	// 0x31196571
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x3119777d
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x31196d15
- (id)signature;	// 0x31195605
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x3119720d
- (id)sourceInfos;	// 0x31195b61
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x31195811
- (id)symbolForAddress:(unsigned long long)address;	// 0x31197331
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x311950b5
- (id)symbolOwnerForName:(id)name;	// 0x31195079
- (id)symbolOwnerForPath:(id)path;	// 0x31195e29
// converted property getter: - (id)symbolOwners;	// 0x31195055
- (id)symbolOwnersForName:(id)name;	// 0x3119610d
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x31197579
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x31195f91
- (id)symbols;	// 0x31195cc5
- (id)symbolsForMangledName:(id)mangledName;	// 0x311962a1
- (id)symbolsForName:(id)name;	// 0x31196409
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x311959b9
@end

