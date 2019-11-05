/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSBinaryImageKernel.h>

@interface MPSImageArithmetic : MPSBinaryImageKernel {

	float _primaryScale;
	float _secondaryScale;
	float _bias;
	float _minimumValue;
	float _maximumValue;
	SCD_Struct_MP9 _primaryStrideInPixels;
	SCD_Struct_MP9 _secondaryStrideInPixels;
	int _arithmeticType;

}

@property (assign,nonatomic) float primaryScale;                                  //@synthesize primaryScale=_primaryScale - In the implementation block
@property (assign,nonatomic) float secondaryScale;                                //@synthesize secondaryScale=_secondaryScale - In the implementation block
@property (assign,nonatomic) float bias;                                          //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP9 primaryStrideInPixels;                //@synthesize primaryStrideInPixels=_primaryStrideInPixels - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP9 secondaryStrideInPixels;              //@synthesize secondaryStrideInPixels=_secondaryStrideInPixels - In the implementation block
@property (assign,nonatomic) float minimumValue;                                  //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                  //@synthesize maximumValue=_maximumValue - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)bias;
-(void)setBias:(float)arg1 ;
-(void)setPrimaryStrideInPixels:(SCD_Struct_MP9)arg1 ;
-(void)setSecondaryStrideInPixels:(SCD_Struct_MP9)arg1 ;
-(id)initWithDevice:(id)arg1 arithmeticType:(int)arg2 ;
-(float)primaryScale;
-(void)setPrimaryScale:(float)arg1 ;
-(float)secondaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(SCD_Struct_MP9)primaryStrideInPixels;
-(SCD_Struct_MP9)secondaryStrideInPixels;
-(float)minimumValue;
-(void)setMinimumValue:(float)arg1 ;
-(float)maximumValue;
-(void)setMaximumValue:(float)arg1 ;
@end
