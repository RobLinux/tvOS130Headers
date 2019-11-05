/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeAI/HMFLogging.h>

@class NSArray, NSMutableArray, HMICameraVideoPosterFrameGeneratorInput, NSString;

@interface HMICameraVideoPosterFrameGenerator : HMFObject <HMFLogging> {

	NSArray* _posterFrames;
	NSMutableArray* _posterFramesInternal;
	HMICameraVideoPosterFrameGeneratorInput* _input;
	SCD_Struct_HM4 _nextGenerationTime;

}

@property (retain) NSMutableArray * posterFramesInternal;                          //@synthesize posterFramesInternal=_posterFramesInternal - In the implementation block
@property (readonly) HMICameraVideoPosterFrameGeneratorInput * input;              //@synthesize input=_input - In the implementation block
@property (readonly) NSArray * posterFrames;                                       //@synthesize posterFrames=_posterFrames - In the implementation block
@property (assign) SCD_Struct_HM4 nextGenerationTime;                              //@synthesize nextGenerationTime=_nextGenerationTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMICameraVideoPosterFrameGeneratorInput *)input;
-(id)initWithInput:(id)arg1 ;
-(NSArray *)posterFrames;
-(void)startHandlingFrames;
-(BOOL)willHandleFramesFromVideoResource:(id)arg1 ;
-(BOOL)handleVideoFrame:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)posterFramesInternal;
-(SCD_Struct_HM4)nextGenerationTime;
-(void)setNextGenerationTime:(SCD_Struct_HM4)arg1 ;
-(BOOL)saveAsPosterFrame:(id)arg1 error:(id*)arg2 ;
-(void)setPosterFramesInternal:(NSMutableArray *)arg1 ;
@end

