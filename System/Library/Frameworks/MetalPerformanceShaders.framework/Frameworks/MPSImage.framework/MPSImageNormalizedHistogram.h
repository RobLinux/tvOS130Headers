/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSImageStatisticsMinAndMax;

@interface MPSImageNormalizedHistogram : MPSKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL useMinMaxHistogramKernel;
	SCD_Struct_MP10 _clipRectSource;
	BOOL _zeroHistogram;
	MPSImageStatisticsMinAndMax* _minmaxFilter;

}

@property (assign,nonatomic) SCD_Struct_MP10 clipRectSource;               //@synthesize clipRectSource=_clipRectSource - In the implementation block
@property (assign,nonatomic) BOOL zeroHistogram;                           //@synthesize zeroHistogram=_zeroHistogram - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP12 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP10)clipRectSource;
-(void)setClipRectSource:(SCD_Struct_MP10)arg1 ;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP12*)arg2 ;
-(SCD_Struct_MP12)histogramInfo;
-(unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1 ;
-(BOOL)zeroHistogram;
-(void)setZeroHistogram:(BOOL)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 minmaxTexture:(id)arg3 histogram:(id)arg4 histogramOffset:(unsigned long long)arg5 ;
@end

