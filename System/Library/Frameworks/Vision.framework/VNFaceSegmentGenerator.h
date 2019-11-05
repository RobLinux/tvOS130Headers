/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector {

	shared_ptr<vision::mod::FaceSegmenterDNN>* _faceSegmenterDNN;

}
+(float)_faceSegmenterMaximumInputImageAspectRatio;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)_getFaceSegmenterInputImageSize:(CGSize*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_getNumberOfSupportedFaceSegments:(unsigned long long*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)arg1 error:(id*)arg2 ;
@end

