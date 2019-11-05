/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class VNCoreMLModel;

@interface VNCoreMLTransformer : VNDetector {

	VNCoreMLModel* _model;

}

@property (readonly) VNCoreMLModel * model;              //@synthesize model=_model - In the implementation block
-(VNCoreMLModel *)model;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)needsMetalContext;
-(id)initWithOptions:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
@end

