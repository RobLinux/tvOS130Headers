/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@interface MPSImageHistogramEqualization : MPSUnaryImageKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL optimized256BinsUseCase;
	id<MTLBuffer> cumulativeHistogramBuffer;
	BOOL encodeTransform;

}

@property (nonatomic,readonly) SCD_Struct_MP12 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP12*)arg2 ;
-(SCD_Struct_MP12)histogramInfo;
-(void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4 ;
@end

