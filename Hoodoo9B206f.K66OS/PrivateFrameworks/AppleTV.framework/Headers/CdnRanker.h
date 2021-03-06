/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CdnRanker : NSObject {
@private
	shared_ptr<netflix::EDSClient::CdnSelection> cdnSelection;	// 4 = 0x4
	NSMutableArray *rankedCdnList_;	// 12 = 0xc
	double cdnSelectionStartTime_;	// 16 = 0x10
	double cdnSelectionTimeElapsed_;	// 24 = 0x18
	unsigned maxDownloadables_;	// 32 = 0x20
	unsigned fastSelectionThreshold_;	// 36 = 0x24
}
@property(readonly, assign) shared_ptr<netflix::EDSClient::CdnSelection> cdnSelection;	// G=0x36946f75; converted property
@property(assign) double cdnSelectionStartTime;	// G=0x369476f9; S=0x3694772d; @synthesize=cdnSelectionStartTime_
@property(assign) double cdnSelectionTimeElapsed;	// G=0x36947761; S=0x36947795; @synthesize=cdnSelectionTimeElapsed_
@property(assign) unsigned fastSelectionThreshold;	// G=0x369477e9; S=0x369477f9; @synthesize=fastSelectionThreshold_
@property(assign) unsigned maxDownloadables;	// G=0x369477c9; S=0x369477d9; @synthesize=maxDownloadables_
@property(retain) NSMutableArray *rankedCdnList;	// G=0x369476c1; S=0x369476d5; @synthesize=rankedCdnList_
+ (id)sharedInstance;	// 0x36945991
- (id)init;	// 0x36945a71
- (id).cxx_construct;	// 0x36947829
- (void).cxx_destruct;	// 0x36947809
- (void)abort;	// 0x36946ed9
- (int)buildRankedCdnList:(const shared_ptr<const netflix::ase::Manifest> *)list cdnDataList:(shared_ptr<const std::vector<netflix::nccp::CdnEntity, std::allocator<netflix::nccp::CdnEntity> > > *)list2 rankingMethod:(int)method measurementMethod:(int)method4 defaultTrackCombinations:(id)combinations;	// 0x36945b0d
- (int)buildTestStreamRankedCdnList;	// 0x36946fa9
// converted property getter: - (shared_ptr<netflix::EDSClient::CdnSelection>)cdnSelection;	// 0x36946f75
// declared property getter: - (double)cdnSelectionStartTime;	// 0x369476f9
// declared property getter: - (double)cdnSelectionTimeElapsed;	// 0x36947761
- (void)dealloc;	// 0x36945ae1
// declared property getter: - (unsigned)fastSelectionThreshold;	// 0x369477e9
// declared property getter: - (unsigned)maxDownloadables;	// 0x369477c9
// declared property getter: - (id)rankedCdnList;	// 0x369476c1
- (void)selectCdnByCdnId:(unsigned)anId;	// 0x36946eed
// declared property setter: - (void)setCdnSelectionStartTime:(double)time;	// 0x3694772d
// declared property setter: - (void)setCdnSelectionTimeElapsed:(double)elapsed;	// 0x36947795
// declared property setter: - (void)setFastSelectionThreshold:(unsigned)threshold;	// 0x369477f9
// declared property setter: - (void)setMaxDownloadables:(unsigned)downloadables;	// 0x369477d9
// declared property setter: - (void)setRankedCdnList:(id)list;	// 0x369476d5
@end

