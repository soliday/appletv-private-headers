/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MCDependencyManager : NSObject {
	NSMutableDictionary *_domainsDict;	// 4 = 0x4
	NSMutableDictionary *_orphansDict;	// 8 = 0x8
}
+ (void)_setDependencyFilePath:(id)path;	// 0x340f28b5
+ (id)sharedManager;	// 0x340f2b21
- (id)init;	// 0x340f2891
- (void)_addOrphanParent:(id)parent forDomain:(id)domain;	// 0x340f30b5
- (id)_domainsDict;	// 0x340f2c4d
- (id)_domainsDictionaryForDomain:(id)domain parent:(id)parent outParentsDict:(id *)dict outDependents:(id *)dependents;	// 0x340f29fd
- (id)_init;	// 0x340f2bc1
- (void)_removeOrphanParent:(id)parent fromDomain:(id)domain;	// 0x340f3015
- (void)addDependent:(id)dependent ofParent:(id)parent inDomain:(id)domain;	// 0x340f2f4d
- (void)addDependent:(id)dependent ofParent:(id)parent inDomain:(id)domain reciprocalDomain:(id)domain4;	// 0x340f299d
- (void)commitChanges;	// 0x340f3169
- (void)dealloc;	// 0x340f2b65
- (id)dependentsOfParent:(id)parent inDomain:(id)domain;	// 0x340f28ed
- (id)orphanedParentsForDomain:(id)domain;	// 0x340f29dd
- (id)parentsInDomain:(id)domain;	// 0x340f2921
- (void)removeDependent:(id)dependent fromParent:(id)parent inDomain:(id)domain;	// 0x340f2e11
- (void)removeDependent:(id)dependent fromParent:(id)parent inDomain:(id)domain reciprocalDomain:(id)domain4;	// 0x340f295d
- (void)removeParent:(id)parent fromDomain:(id)domain;	// 0x340f2d51
@end

