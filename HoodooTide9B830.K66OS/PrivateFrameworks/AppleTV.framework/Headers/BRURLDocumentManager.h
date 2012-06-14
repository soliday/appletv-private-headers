/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRAsyncTaskContext, NSMutableArray;

@interface BRURLDocumentManager : NSObject {
@private
	NSMutableArray *_activeDocuments;	// 4 = 0x4
	NSMutableArray *_queue;	// 8 = 0x8
	BRAsyncTaskContext *_taskContext;	// 12 = 0xc
}
+ (void)_processCompleteDocuments:(id)documents;	// 0x32abb88d
+ (void)initialize;	// 0x32aba431
+ (id)textDocumentManager;	// 0x32aba58d
- (id)init;	// 0x32aba659
- (void)_documentComplete:(id)complete;	// 0x32abb711
- (void)_processLoadDocument:(id)document;	// 0x32abacfd
- (void)_removeActiveDocument:(id)document;	// 0x32abb639
- (id)_synchronizationObject;	// 0x32abb701
- (void)cancelLoad:(id)load;	// 0x32ababb5
- (void)dealloc;	// 0x32aba725
- (void)loadDocument:(id)document;	// 0x32aba929
- (void)loadDocument:(id)document completionHandler:(id)handler;	// 0x32abaa85
- (void)loadDocuments:(id)documents documentReadyHandler:(id)handler completionHandler:(id)handler3;	// 0x32abaadd
- (void)purgeDocuments;	// 0x32aba7d9
@end

