/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNTorsoprintGenerator : VNDetector {

	void* _mEspressoContext;
	void* _mEspressoPlan;
	SCD_Struct_VN44* _mEspressoNetwork;

}
+(id)configurationOptionKeysForDetectorKey;
+(CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1 ;
+(CGSize)_torsoprintDescriptorSize;
+(float)_minimumTorsoInsideInputImageThreshold;
+(float)_magnifiedBBoxScaleFactor;
-(void)dealloc;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(CGRect)arg1 insideImageWithSize:(CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(CGRect*)arg4 error:(id*)arg5 ;
@end

