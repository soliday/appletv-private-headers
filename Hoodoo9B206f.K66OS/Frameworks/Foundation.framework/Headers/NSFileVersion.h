/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDate;
@protocol NSCoding;

@interface NSFileVersion : NSObject {
@private
	NSURL *_fileURL;	// 4 = 0x4
	id _library;	// 8 = 0x8
	NSString *_clientID;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSURL *_contentsURL;	// 20 = 0x14
	BOOL _isBackup;	// 24 = 0x18
	NSString *_localizedName;	// 28 = 0x1c
	NSString *_localizedComputerName;	// 32 = 0x20
	NSDate *_modificationDate;	// 36 = 0x24
	BOOL _isResolved;	// 40 = 0x28
	id _reserved1;	// 44 = 0x2c
	id _reserved2;	// 48 = 0x30
}
@property(readonly, assign) NSURL *URL;	// G=0x31e18fc5; 
@property(readonly, assign, getter=_isBackup) BOOL _isBackup;	// G=0x31e1ac41; 
@property(readonly, assign, getter=isConflict) BOOL conflict;	// G=0x31e19285; 
@property(assign, getter=isDiscardable) BOOL discardable;
@property(readonly, assign) NSString *localizedName;	// G=0x31e19025; 
@property(readonly, assign) NSString *localizedNameOfSavingComputer;	// G=0x31e19099; 
@property(readonly, assign) NSDate *modificationDate;	// G=0x31e19131; 
@property(readonly, assign) id<NSCoding> persistentIdentifier;	// G=0x31e191a5; 
@property(assign, getter=isResolved) BOOL resolved;	// G=0x31e19459; S=0x31e19315; 
+ (void *)_addConflictObserverForItemAtURL:(id)url statusChangedHandler:(id)handler;	// 0x31e1af85
+ (id)_addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options temporaryStorageIdentifier:(id *)identifier error:(id *)error;	// 0x31e1a389
+ (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)necessary;	// 0x31e19ead
+ (BOOL)_conflictsExistForItemAtURL:(id)url;	// 0x31e1add1
+ (id)_libraryForURL:(id)url clientID:(id)anId temporaryStorageIdentifier:(id *)identifier;	// 0x31e19fb1
+ (void)_markConflicts:(id)conflicts asHandledForItemAtURL:(id)url;	// 0x31e1ade9
+ (id)_otherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x31e1a0bd
+ (void)_removeConflictObserver:(void *)observer;	// 0x31e1af89
+ (BOOL)_removeOtherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier error:(id *)error;	// 0x31e1a649
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x31e1aa2d
+ (id)_supportedGenerationalStorageClientIDs;	// 0x31e19f71
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x31e1a5d5
+ (id)_temporaryStorageLocationForIdentifier:(id)identifier;	// 0x31e19f11
+ (id)_versionOfItemAtURL:(id)url forClientID:(id)clientID name:(id)name temporaryStorageIdentifier:(id)identifier evenIfDeleted:(BOOL)deleted;	// 0x31e1a819
+ (id)_versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier temporaryStorageIdentifier:(id)identifier;	// 0x31e1a1fd
+ (id)currentVersionOfItemAtURL:(id)url;	// 0x31e18c69
+ (id)otherVersionsOfItemAtURL:(id)url;	// 0x31e18cd9
+ (BOOL)removeOtherVersionsOfItemAtURL:(id)url error:(id *)error;	// 0x31e19a09
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)url;	// 0x31e18e45
+ (BOOL)unresolvedConflictsExistForItemAtURL:(id)url;	// 0x31e1ad99
+ (id)versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier;	// 0x31e18e21
+ (id)versionsOfItemAtURL:(id)url;	// 0x31e1ac51
- (id)init;	// 0x31e18a9d
// declared property getter: - (id)URL;	// 0x31e18fc5
- (id)_documentInfo;	// 0x31e1aaad
- (id)_initWithFileURL:(id)fileURL library:(id)library clientID:(id)anId name:(id)name contentsURL:(id)url isBackup:(BOOL)backup revision:(id)revision;	// 0x31e19afd
// declared property getter: - (BOOL)_isBackup;	// 0x31e1ac41
- (void)_overrideModificationDateWithDate:(id)date;	// 0x31e1ab69
- (BOOL)_setDocumentInfo:(id)info;	// 0x31e1ab25
- (void)dealloc;	// 0x31e18aed
- (unsigned)hash;	// 0x31e18c41
// declared property getter: - (BOOL)isConflict;	// 0x31e19285
- (BOOL)isEqual:(id)equal;	// 0x31e18bc5
// declared property getter: - (BOOL)isResolved;	// 0x31e19459
// declared property getter: - (id)localizedName;	// 0x31e19025
// declared property getter: - (id)localizedNameOfSavingComputer;	// 0x31e19099
// declared property getter: - (id)modificationDate;	// 0x31e19131
// declared property getter: - (id)persistentIdentifier;	// 0x31e191a5
- (BOOL)removeAndReturnError:(id *)error;	// 0x31e1988d
- (id)replaceItemAtURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31e19469
- (id)restoreOverItemAtURL:(id)url error:(id *)error;	// 0x31e1ad79
// declared property setter: - (void)setResolved:(BOOL)resolved;	// 0x31e19315
@end

