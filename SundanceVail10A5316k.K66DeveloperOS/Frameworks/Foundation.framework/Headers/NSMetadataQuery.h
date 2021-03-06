/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQuery : NSObject {
@private
	unsigned _flags;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	id _private[11];	// 16 = 0x10
	void *_reserved;	// 60 = 0x3c
}
@property(assign) id delegate;	// G=0x31a36a65; S=0x31a36a79; converted property
@property(retain) id groupingAttributes;	// G=0x31a36d5d; S=0x31a36d71; converted property
@property(assign) double notificationBatchingInterval;	// G=0x31a36fc9; S=0x31a36fe1; converted property
@property(retain) id predicate;	// G=0x31a36b05; S=0x31a36b15; converted property
@property(retain) id searchItemURLs;	// G=0x31a37125; S=0x31a37139; converted property
@property(retain) id searchScopes;	// G=0x31a37061; S=0x31a37075; converted property
@property(retain) id sortDescriptors;	// G=0x31a36bd5; S=0x31a36be9; converted property
@property(retain) id valueListAttributes;	// G=0x31a36c99; S=0x31a36cad; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a36611
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31a36531
- (id)init;	// 0x31a36615
- (id)_allAttributes;	// 0x31a36f1d
- (void)_noteNote1:(id)a1;	// 0x31a37251
- (void)_noteNote2:(id)a2;	// 0x31a37295
- (void)_noteNote3:(id)a3;	// 0x31a37325
- (void)_noteNote4:(id)a4;	// 0x31a373b5
- (id)_queryString;	// 0x31a374b9
- (void)_recreateQuery;	// 0x31a375cd
- (void)_resetQueryState;	// 0x31a374d9
- (void)_setBatchingParams;	// 0x31a371e9
- (id)_sortingAttributes;	// 0x31a36e21
- (void)_update;	// 0x31a382e1
- (void)_zapResultArray;	// 0x31a38429
- (void)dealloc;	// 0x31a3674d
// converted property getter: - (id)delegate;	// 0x31a36a65
- (void)disableUpdates;	// 0x31a38241
- (void)enableUpdates;	// 0x31a38289
- (void)finalize;	// 0x31a36975
- (id)groupedResults;	// 0x31a38919
// converted property getter: - (id)groupingAttributes;	// 0x31a36d5d
- (unsigned)indexOfResult:(id)result;	// 0x31a385a9
- (BOOL)isGathering;	// 0x31a38219
- (BOOL)isStarted;	// 0x31a38205
- (BOOL)isStopped;	// 0x31a3822d
// converted property getter: - (double)notificationBatchingInterval;	// 0x31a36fc9
// converted property getter: - (id)predicate;	// 0x31a36b05
- (id)resultAtIndex:(unsigned)index;	// 0x31a38371
- (unsigned)resultCount;	// 0x31a38349
- (id)results;	// 0x31a38499
// converted property getter: - (id)searchItemURLs;	// 0x31a37125
// converted property getter: - (id)searchScopes;	// 0x31a37061
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a36a79
// converted property setter: - (void)setGroupingAttributes:(id)attributes;	// 0x31a36d71
// converted property setter: - (void)setNotificationBatchingInterval:(double)interval;	// 0x31a36fe1
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x31a36b15
// converted property setter: - (void)setSearchItemURLs:(id)urls;	// 0x31a37139
// converted property setter: - (void)setSearchScopes:(id)scopes;	// 0x31a37075
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x31a36be9
// converted property setter: - (void)setValueListAttributes:(id)attributes;	// 0x31a36cad
// converted property getter: - (id)sortDescriptors;	// 0x31a36bd5
- (BOOL)startQuery;	// 0x31a38031
- (void)stopQuery;	// 0x31a38119
// converted property getter: - (id)valueListAttributes;	// 0x31a36c99
- (id)valueLists;	// 0x31a385e1
- (id)valueOfAttribute:(id)attribute forResultAtIndex:(unsigned)index;	// 0x31a38aed
@end

