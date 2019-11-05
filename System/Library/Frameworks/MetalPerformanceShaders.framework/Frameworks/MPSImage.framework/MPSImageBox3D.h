/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageBox;

@interface MPSImageBox3D : MPSUnaryImageKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _kernelDepth;
	MPSImageBox* _boxFilter;

}

@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelDepth;               //@synthesize kernelDepth=_kernelDepth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
+(id)supportedPixelFormats;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 kernelDepth:(unsigned long long)arg4 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelDepth;
@end

