/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWEspressoInferenceContext : NSObject {

	int _executionTarget;
	void* _espressoContext;
	unsigned long long _options;
	BOOL _shareIntermediateBuffer;
	void* _rootIntermediateBufferPlan;

}

@property (nonatomic,readonly) int executionTarget;                          //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,readonly) void* espressoContext; 
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(id)description;
-(void)dealloc;
-(int)executionTarget;
-(BOOL)isPrepared;
-(id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(BOOL)arg2 ;
-(id)initWithExecutionTarget:(int)arg1 ;
-(void*)espressoContext;
-(int)prepareForInferenceUsingProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(int)configureIntermediateBufferSharingForPlan:(void*)arg1 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 enable:(BOOL)arg2 ;
@end

