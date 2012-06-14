/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DASearchQuery.h"
#import "DataAccessExpress-Structs.h"

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {
	NSString *_searchBase;	// 32 = 0x20
	NSString *_searchScope;	// 36 = 0x24
}
@property(retain) NSString *searchBase;	// G=0x31f9df6d; S=0x31f9df81; @synthesize=_searchBase
@property(retain) NSString *searchScope;	// G=0x31f9dfa5; S=0x31f9dfb9; @synthesize=_searchScope
+ (id)contactsSearchQueryWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;	// 0x31f9dd11
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x31f9de55
- (id)initWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;	// 0x31f9dd69
- (void)dealloc;	// 0x31f9ddf5
- (id)dictionaryRepresentation;	// 0x31f9dee9
// declared property getter: - (id)searchBase;	// 0x31f9df6d
// declared property getter: - (id)searchScope;	// 0x31f9dfa5
// declared property setter: - (void)setSearchBase:(id)base;	// 0x31f9df81
// declared property setter: - (void)setSearchScope:(id)scope;	// 0x31f9dfb9
@end

