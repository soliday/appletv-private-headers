/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSOperation.h> // Unknown library

@class NSThread, NSPredicate, NSArray;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation {
@private
	void *_addressBook;	// 12 = 0xc
	NSPredicate *_predicate;	// 16 = 0x10
	NSArray *_prefetchProperties;	// 20 = 0x14
	unsigned _sortOrdering;	// 24 = 0x18
	void *_internalSearchAddressBook;	// 28 = 0x1c
	id<ABSearchOperationDelegate> _delegate;	// 32 = 0x20
	id _progressBlock;	// 36 = 0x24
	NSThread *_progressBlockThread;	// 40 = 0x28
	void *_context;	// 44 = 0x2c
}
@property(assign, nonatomic) void *addressBook;	// G=0x365afa8d; S=0x365b02c1; @synthesize=_addressBook
@property(assign, nonatomic) void *context;	// G=0x365afa3d; S=0x365afa4d; @synthesize=_context
@property(assign, nonatomic) id<ABSearchOperationDelegate> delegate;	// G=0x365afa5d; S=0x365afa9d; @synthesize=_delegate
@property(assign, nonatomic) void *internalSearchAddressBook;	// G=0x365b0265; S=0x365b0231; @synthesize=_internalSearchAddressBook
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x365afa7d; S=0x365aff55; @synthesize=_predicate
@property(copy, nonatomic) NSArray *prefetchProperties;	// G=0x365afa6d; S=0x365aff7d; @synthesize=_prefetchProperties
@property(copy, nonatomic) id progressBlock;	// G=0x365afa0d; S=0x365afacd; @synthesize=_progressBlock
@property(assign, nonatomic) unsigned sortOrdering;	// G=0x365afa1d; S=0x365afa2d; @synthesize=_sortOrdering
+ (id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void *)book;	// 0x365afe59
+ (id)personPredicateWithGroup:(void *)group addressBook:(void *)book;	// 0x365afe75
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x365afc99
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x365afcb9
+ (id)personPredicateWithNameLike:(id)nameLike inAccount:(id)account addressBook:(void *)book;	// 0x365afdb1
+ (id)personPredicateWithNameLike:(id)nameLike inGroup:(void *)group addressBook:(void *)book;	// 0x365afcf9
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source addressBook:(void *)book;	// 0x365afd35
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x365afd71
+ (id)personPredicateWithNameOnly:(id)nameOnly inAccount:(id)account addressBook:(void *)book;	// 0x365afe19
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x365afdf9
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property addressBook:(void *)book;	// 0x365afe39
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)match;	// 0x365b00e9
// declared property getter: - (void *)addressBook;	// 0x365afa8d
- (void)cancel;	// 0x365b01dd
// declared property getter: - (void *)context;	// 0x365afa3d
- (void)dealloc;	// 0x365afea1
// declared property getter: - (id)delegate;	// 0x365afa5d
// declared property getter: - (void *)internalSearchAddressBook;	// 0x365b0265
- (BOOL)isConcurrent;	// 0x365af9e5
- (void)main;	// 0x365afb79
// declared property getter: - (id)predicate;	// 0x365afa7d
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x365afc75
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x365affa1
// declared property getter: - (id)prefetchProperties;	// 0x365afa6d
// declared property getter: - (id)progressBlock;	// 0x365afa0d
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x365b02c1
// declared property setter: - (void)setContext:(void *)context;	// 0x365afa4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x365afa9d
// declared property setter: - (void)setInternalSearchAddressBook:(void *)book;	// 0x365b0231
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x365aff55
// declared property setter: - (void)setPrefetchProperties:(id)properties;	// 0x365aff7d
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x365afacd
// declared property setter: - (void)setSortOrdering:(unsigned)ordering;	// 0x365afa2d
// declared property getter: - (unsigned)sortOrdering;	// 0x365afa1d
@end
