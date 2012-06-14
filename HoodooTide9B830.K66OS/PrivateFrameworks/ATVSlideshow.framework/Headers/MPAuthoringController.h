/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MPDocument, MPWeighter, NSMutableDictionary, NSRecursiveLock, NSLock;

@interface MPAuthoringController : NSObject {
	BOOL _isAuthoring;	// 4 = 0x4
	MPDocument *_authoredDocument;	// 8 = 0x8
	unsigned _seed;	// 12 = 0xc
	NSRecursiveLock *_beatLock;	// 16 = 0x10
	NSMutableDictionary *_cachedROIInformation;	// 20 = 0x14
	NSLock *_cachedROILock;	// 24 = 0x18
	MPWeighter *_weighter;	// 28 = 0x1c
	MPWeighter *_transitionWeighter;	// 32 = 0x20
	MPWeighter *_shuffleWeighter;	// 36 = 0x24
	NSMutableDictionary *_stats;	// 40 = 0x28
	id _delegate;	// 44 = 0x2c
	int _logLevel;	// 48 = 0x30
	double _logTiming;	// 52 = 0x34
	float _placesDistanceSeperation;	// 60 = 0x3c
	BOOL _placesDebug;	// 64 = 0x40
	BOOL _cancelAuthoring;	// 65 = 0x41
	BOOL _skipApplyingSettings;	// 66 = 0x42
}
@property(retain) MPDocument *authoredDocument;	// G=0x3202c285; S=0x3202c295; converted property
@property(assign) id delegate;	// G=0x320271c1; S=0x320271d1; converted property
@property(readonly, assign) BOOL isAuthoring;	// G=0x3202c275; converted property
+ (void)releaseSharedController;	// 0x32026e79
+ (id)sharedController;	// 0x32026e31
+ (id)transitionAnimatedSetsBetween:(id)between and:(id)anAnd;	// 0x3201fcc9
+ (id)transitionAnimatedSetsBetween:(id)between and:(id)anAnd;	// 0x3203afe1
- (id)init;	// 0x32026ec1
- (void)_addVideoPaths:(id)paths toEndOfLayer:(id)layer inDocument:(id)document withOptions:(id)options;	// 0x320250e9
- (void)_addVideoPaths:(id)paths toEndOfLayer:(id)layer inDocument:(id)document withOptions:(id)options;	// 0x3204146d
- (void)_checkForEmptyLayersInDocument:(id)document;	// 0x320259e5
- (void)_checkForEmptyLayersInDocument:(id)document;	// 0x32041d7d
- (id)_collectVersionInformationFromStyle:(id)style;	// 0x3202c2e1
- (int)_countOfEmptyContainersInIntroOfLayer:(id)layer withOptions:(id)options;	// 0x32025c4d
- (int)_countOfEmptyContainersInIntroOfLayer:(id)layer withOptions:(id)options;	// 0x32041fe5
- (id)_createMapsWithImages:(id)images withOptions:(id)options;	// 0x3204214d
- (void)_gatherLocationInfoForMaps:(id)maps;	// 0x32043f25
- (id)_grabAndRemoveTitleEffectFromDocument:(id)document withOptions:(id)options;	// 0x32041a71
- (id)_grabAndRemoveTitleEffectFromDocument:(id)document withOptions:(id)options;	// 0x320256d9
- (id)_mapsSortedByCity:(id)city hasCities:(BOOL *)cities;	// 0x320447e5
- (id)_mapsSortedByState:(id)state;	// 0x320453fd
- (int)_numberOfSlidesForOutroInLayer:(id)layer withOptions:(id)options;	// 0x32041e45
- (int)_numberOfSlidesForOutroInLayer:(id)layer withOptions:(id)options;	// 0x32025aad
- (id)_placeEffectContainersForPhotos:(id)photos options:(id)options;	// 0x3204d551
- (void)_readdTitleEffect:(id)effect toDocument:(id)document withOptions:(id)options;	// 0x32025935
- (void)_readdTitleEffect:(id)effect toDocument:(id)document withOptions:(id)options;	// 0x32041ccd
- (void)_renameMapsAndPins:(id)pins withOptions:(id)options;	// 0x32045e45
- (void)_reorderImagesInDocument:(id)document withOptions:(id)options;	// 0x32024301
- (void)_reorderImagesInDocument:(id)document withOptions:(id)options;	// 0x32040685
- (BOOL)_tryAndCollapseMaps:(id)maps;	// 0x32044441
- (void)addStyledCaptionToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3203e579
- (void)addStyledCaptionToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x320221ed
- (unsigned)authorDocument:(id)document withOptions:(id)options;	// 0x320271e1
- (unsigned)authorLayerGroup:(id)group inDocument:(id)document withOptions:(id)options;	// 0x3202721d
- (void)authorPlacesWithImages:(id)images forLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3202cf65
// converted property getter: - (id)authoredDocument;	// 0x3202c285
- (void)beatAlignEffectContainers:(id)containers toBeats:(id)beats withOptions:(id)options;	// 0x320338d1
- (void)beatAlignLayer:(id)layer toBeats:(id)beats withOptions:(id)options;	// 0x32031e81
- (void)beatAlignLayers:(id)layers toAudioPlaylist:(id)audioPlaylist forDocument:(id)document withOptions:(id)options;	// 0x3202a3b9
- (id)beatsForAudioPlaylist:(id)audioPlaylist withOptions:(id)options;	// 0x32025c9d
- (id)beatsForAudioPlaylist:(id)audioPlaylist withOptions:(id)options;	// 0x3203b0d9
- (int)bestCountFromClusterForEffectWithImages:(id)images atStartIndex:(int)startIndex withWeighter:(id)weighter usedIndex:(int *)index;	// 0x3202f515
- (void)cacheROIInformationForImages:(id)images withOptions:(id)options;	// 0x3202d0dd
- (BOOL)canDocumentFitToAudio:(id)audio withOptions:(id)options requiredAudioDuration:(double *)duration;	// 0x3202bb15
- (BOOL)canLayerGroupFitToAudio:(id)audio inDocument:(id)document withOptions:(id)options requiredAudioDuration:(double *)duration;	// 0x3202bb5d
- (BOOL)canScaleToAudioInDocument:(id)document withOptions:(id)options;	// 0x3202be39
- (void)checkForOffsetsForLayers:(id)layers withOptions:(id)options;	// 0x32031d55
- (void)cleanup;	// 0x3202be5d
- (void)cleanup:(BOOL)cleanup;	// 0x3202be71
- (void)cleanupClusters;	// 0x32026469
- (void)cleanupClusters;	// 0x3203b899
- (void)combineEffectsNearSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3203ff19
- (void)combineEffectsNearSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x32023b95
- (void)combineSlides:(id)slides inDocument:(id)document withOptions:(id)options;	// 0x3202395d
- (void)combineSlides:(id)slides inDocument:(id)document withOptions:(id)options;	// 0x3203fce1
- (void)configureFiltersInDocument:(id)document withOptions:(id)options;	// 0x3203407d
- (void)configureTransitionsInDocument:(id)document withOptions:(id)options;	// 0x32034591
- (void)createAnimatedSetsInLayer2:(id)layer2 withOptions:(id)options;	// 0x3201f251
- (void)createAnimatedSetsInLayer2:(id)layer2 withOptions:(id)options;	// 0x3203a569
- (void)createAnimatedSetsInLayer:(id)layer withOptions:(id)options;	// 0x3201e43d
- (void)createAnimatedSetsInLayer:(id)layer withOptions:(id)options;	// 0x32039755
- (id)createAudioPlayListFromAudioPaths:(id)audioPaths andOptions:(id)options;	// 0x32038b75
- (void)createBeatsThreaded:(id)threaded;	// 0x320261d9
- (void)createBeatsThreaded:(id)threaded;	// 0x3203b609
- (id)createEffectToTransitionMapWithOptions:(id)options;	// 0x32037095
- (id)createLayerWithImages:(id)images effects:(id)effects andOptions:(id)options;	// 0x320349f5
- (id)createLayersForPlacesForImages:(id)images forDocument:(id)document withOptions:(id)options;	// 0x32047ec1
- (void)dealloc;	// 0x32027111
// converted property getter: - (id)delegate;	// 0x320271c1
- (BOOL)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)effect presetID:(id)anId atIndex:(int)index;	// 0x320307b1
- (id)effectContainersWithImages:(id)images effects:(id)effects andOptions:(id)options;	// 0x320350dd
- (id)effectContainersWithPaths:(id)paths forDocument:(id)document withOptions:(id)options;	// 0x3202a285
- (id)effectsForImages:(id)images withOptions:(id)options;	// 0x3202d865
- (id)exportTransitionFromOptions:(id)options;	// 0x32037341
- (void)fillDurationsForLayers:(id)layers withOptions:(id)options;	// 0x32031a95
- (id)filtersForEffectFromOptions:(id)options;	// 0x3203874d
- (id)filtersForLayerFromOptions:(id)options;	// 0x320385d1
- (id)filtersForSlideFromOptions:(id)options;	// 0x3203894d
- (double)findClosestBeatForTime:(double)time inBeats:(id)beats atIndex:(int *)index;	// 0x3203b3d5
- (double)findClosestBeatForTime:(double)time inBeats:(id)beats atIndex:(int *)index;	// 0x32025fa5
- (id)findEffectIDInPresetArray:(id)presetArray forImages:(id)images withOptions:(id)options;	// 0x3202f6e1
- (id)findEffectIDInWeighter:(id)weighter images:(id)images startingIndex:(int)index count:(int)count triesToFind:(int *)find constraints:(id)constraints;	// 0x320304a1
- (void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)userDefinedSlideOrderPresentation inClusters:(id)clusters;	// 0x3203b8b5
- (void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)userDefinedSlideOrderPresentation inClusters:(id)clusters;	// 0x32026485
- (void)finishLogging;	// 0x3203bcd5
- (void)finishLogging;	// 0x320268a1
- (id)frameFromOptions:(id)options;	// 0x32038a99
- (BOOL)imagesHaveMovie:(id)movie start:(int)start count:(int)count;	// 0x3202f475
- (int)indexOfBeatWithTimestamp:(double)timestamp inBeats:(id)beats inRange:(NSRange)range;	// 0x320260f5
- (int)indexOfBeatWithTimestamp:(double)timestamp inBeats:(id)beats inRange:(NSRange)range;	// 0x3203b525
- (void)insertVideoPaths:(id)paths atIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x3203c745
- (void)insertVideoPaths:(id)paths atIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x320203bd
// converted property getter: - (BOOL)isAuthoring;	// 0x3202c275
- (id)loopTransitionFromOptions:(id)options;	// 0x32037265
- (int)mapTypeForPoint0:(CGPoint)point0 point1:(CGPoint)a1 point2:(CGPoint)a2 map:(id)map flight:(id)flight;	// 0x3204c7ed
- (void)matchDurationsForLayers:(id)layers withOptions:(id)options;	// 0x32031741
- (void)moveSlidesFromIndicies:(id)indicies toIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x3201fdc1
- (void)moveSlidesFromIndicies:(id)indicies toIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x3203c145
- (id)orderImages:(id)images withOptions:(id)options;	// 0x3202ca69
- (id)pickRandomPathsInArray:(id)array excludingPaths:(id)paths count:(int)count;	// 0x32038ce1
- (void)populateWeighter:(id)weighter withEffects:(id)effects andOptions:(id)options;	// 0x3202f961
- (void)populateWeighter:(id)weighter withTransitions:(id)transitions andOptions:(id)options;	// 0x320301a9
- (BOOL)prepareDocumentForExport:(id)export withOptions:(id)options;	// 0x3202ae2d
- (void)prepareDocumentForPlayback:(id)playback withOptions:(id)options;	// 0x3202b3cd
- (void)reconfigureColorSchemeForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3202abcd
- (void)reconfigureColorSchemeInDocument:(id)document withOptions:(id)options;	// 0x3202ab91
- (void)reconfigureImagesInDocument:(id)document withOptions:(id)options;	// 0x3202a8f9
- (void)reconfigureTitleEffectForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3202a9a5
- (void)reconfigureTitleEffectInDocument:(id)document withOptions:(id)options;	// 0x3202a969
- (void)recreateMapsInDocument:(id)document;	// 0x3204decd
- (BOOL)rect:(CGRect)rect intersectsRects:(id)rects index:(int *)index;	// 0x3204c6f5
- (void)removeAllMapsInDocument:(id)document;	// 0x3204dced
- (void)removeSlidesAtIndicies:(id)indicies inDocument:(id)document withOptions:(id)options;	// 0x3203d8a5
- (void)removeSlidesAtIndicies:(id)indicies inDocument:(id)document withOptions:(id)options;	// 0x3202151d
- (void)removeStyledCaptionFromSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x32022f39
- (void)removeStyledCaptionFromSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3203f2c5
- (void)scaleDurationsForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3202a51d
- (void)scaleDurationsInDocument:(id)document withOptions:(id)options;	// 0x3202a4e1
- (void)scaleDurationsInEffectContainers:(id)effectContainers withOptions:(id)options;	// 0x32030b65
- (void)scaleDurationsInLayer:(id)layer withOptions:(id)options;	// 0x32030a75
- (void)scaleDurationsInPlacesForDocument:(id)document withOptions:(id)options;	// 0x3204cca9
- (void)scaleLayerToMatchAudio:(id)matchAudio withBeats:(id)beats withOptions:(id)options;	// 0x32032d35
- (void)scaleLayerToMatchAudio:(id)matchAudio withOptions:(id)options;	// 0x320321a1
// converted property setter: - (void)setAuthoredDocument:(id)document;	// 0x3202c295
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x320271d1
- (void)setTitleTextToColor:(CGColorRef)color forLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3202bf71
- (void)setTitleTextToColor:(CGColorRef)color inDocument:(id)document withOptions:(id)options;	// 0x3202bf31
- (void)setupClustersWithPaths:(id)paths withOptions:(id)options;	// 0x3203b79d
- (void)setupClustersWithPaths:(id)paths withOptions:(id)options;	// 0x32026371
- (id)shuffleImagesByRating:(id)rating withOptions:(id)options;	// 0x3202c771
- (id)slidesWithImages:(id)images andOptions:(id)options;	// 0x32034c65
- (id)sortImagePaths:(id)paths toAspectRatiosInEffectPresetID:(id)effectPresetID withOptions:(id)options;	// 0x320373c9
- (void)startLogging;	// 0x3203bb2d
- (void)startLogging;	// 0x320266fd
- (int)tileSetForMap1:(int)map1 map2:(int)a2 needsWater:(BOOL)water;	// 0x3204cc35
- (id)transitionFromOptions:(id)options;	// 0x3202a399
- (id)transitionFromOptions:(id)options firstEffectContainer:(id)container nextEffectContainer:(id)container3;	// 0x32038e35
- (void)upgradeDocument:(id)document withOptions:(id)options;	// 0x32029979
- (void)upgradeLayerGroup:(id)group inDocument:(id)document withOptions:(id)options;	// 0x320299b5
@end

