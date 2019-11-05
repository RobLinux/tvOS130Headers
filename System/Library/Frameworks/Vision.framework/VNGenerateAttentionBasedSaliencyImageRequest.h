/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@interface VNGenerateAttentionBasedSaliencyImageRequest : VNImageBasedRequest
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(id)_smartCamCombinedModelImageSaliencyObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id*)arg3 ;
@end

