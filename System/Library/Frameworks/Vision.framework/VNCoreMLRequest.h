/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest {

	VNCoreMLModel* _model;

}

@property (nonatomic,readonly) VNCoreMLModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
-(id)description;
-(VNCoreMLModel *)model;
-(id)initWithModel:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(id)newDefaultRequestInstance;
-(id)initWithModel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

