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
@property(retain) NSString *searchBase;	// G=0x35f62f6d; S=0x35f62f81; @synthesize=_searchBase
@property(retain) NSString *searchScope;	// G=0x35f62fa5; S=0x35f62fb9; @synthesize=_searchScope
+ (id)contactsSearchQueryWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;	// 0x35f62d11
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x35f62e55
- (id)initWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;	// 0x35f62d69
- (void)dealloc;	// 0x35f62df5
- (id)dictionaryRepresentation;	// 0x35f62ee9
// declared property getter: - (id)searchBase;	// 0x35f62f6d
// declared property getter: - (id)searchScope;	// 0x35f62fa5
// declared property setter: - (void)setSearchBase:(id)base;	// 0x35f62f81
// declared property setter: - (void)setSearchScope:(id)scope;	// 0x35f62fb9
@end

