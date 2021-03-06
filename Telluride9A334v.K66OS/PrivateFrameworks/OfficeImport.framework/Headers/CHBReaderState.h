/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CHBState.h"

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState {
@private
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x3564a1c5; S=0x35649c05; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x3564d5a5; S=0x3564d1e1; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x3564d915; S=0x3564d1d1; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x35642d29
// converted property getter: - (int)axisGroup;	// 0x3564a1c5
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x3564e07d
- (id)ebReaderSheetState;	// 0x3564351d
- (void)readAndCacheXlChartDataSeries;	// 0x3564568d
- (id)resources;	// 0x356481fd
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x35649c05
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x3564d1e1
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x3564d1d1
- (id)workbook;	// 0x3564c96d
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x3564e03d
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x3564d5a5
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x3564d915
- (int)xlPlotCount;	// 0x3564cd45
- (XlChartBinaryReader *)xlReader;	// 0x3564350d
@end

