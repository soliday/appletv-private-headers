/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXAnimation : NSObject {
}
+ (void)readAnimAudioElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311c3a99
+ (void)readAnimCmdElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311bc63d
+ (void)readAnimEffectElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3118d105
+ (void)readAnimElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311942d1
+ (void)readAnimMotionElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311450d1
+ (void)readAnimParallelElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31144c65
+ (void)readAnimRotationElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311c51a1
+ (void)readAnimScaleElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311b8ef9
+ (void)readAnimSequentialElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31144bbd
+ (void)readAnimSetElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3118cf1d
+ (id)readAnimVariant:(xmlNode *)variant;	// 0x3118d031
+ (void)readAnimVideoElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x311cec9d
+ (void)readAnimationFromTimingXmlNode:(xmlNode *)timingXmlNode tgtAnimation:(id)animation drawingState:(id)state;	// 0x3113ce61
+ (int)readChartBuildType:(id)type;	// 0x3128a245
+ (void)readChartType:(id)type oleChartTarget:(id)target;	// 0x3128a1a5
+ (void)readChildTimeNodeList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x31144a75
+ (void)readCommonBehaviorData:(xmlNode *)data tgtCommonBehaviorData:(id)data2 drawingState:(id)state;	// 0x31145361
+ (void)readCommonMediaNodeData:(xmlNode *)data commonMediaData:(id)data2 drawingState:(id)state;	// 0x311c3bd1
+ (void)readCommonTimeNodeData:(xmlNode *)data commonTimeNodeData:(id)data2 drawingState:(id)state;	// 0x3114112d
+ (void)readCondition:(xmlNode *)condition timeCondition:(id)condition2 drawingState:(id)state;	// 0x31144e61
+ (id)readGraphicBuild:(xmlNode *)build;	// 0x311a9bb5
+ (void)readIterate:(xmlNode *)iterate commonTimeNodeData:(id)data drawingState:(id)state;	// 0x311a9d4d
+ (id)readOleChartBuild:(xmlNode *)build;	// 0x3128a2c9
+ (id)readParagraphBuild:(xmlNode *)build;	// 0x3118d359
+ (void)readPointFromNode:(xmlNode *)node tgtPoint:(CGPoint *)point;	// 0x31145d55
+ (void)readPresetClass:(id)aClass commonTimeNodeData:(id)data;	// 0x31144fd9
+ (void)readRestartType:(id)type commonTimeNodeData:(id)data;	// 0x31141565
+ (id)readShapeTarget:(xmlNode *)target drawingState:(id)state;	// 0x31145619
+ (void)readStConditionList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x31144d0d
+ (id)readTgtElement:(xmlNode *)element drawingState:(id)state;	// 0x31145461
+ (void)readTimeNodeType:(id)type commonTimeNodeData:(id)data;	// 0x311414b5
+ (void)readTriggerEvent:(id)event timeCondition:(id)condition;	// 0x311971dd
@end
