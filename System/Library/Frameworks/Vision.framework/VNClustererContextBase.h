/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface VNClustererContextBase : NSObject {

	NSString* _type;
	NSNumber* _threshold;
	NSNumber* _torsoThreshold;
	NSString* _cacheDirectoryPath;
	BOOL _readOnly;
	unsigned long long _requestRevision;

}
+(id)_faceprintRevision1ModelPathAndReturnError:(id*)arg1 ;
+(id)_faceprintRevision2ModelPathAndReturnError:(id*)arg1 ;
+(id)_ageClassifierPathForFaceprintRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_checkInitInputs:(id)arg1 cachePath:(id)arg2 checkType:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(BOOL)arg4 threshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(BOOL)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id*)arg8 ;
-(id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id*)arg3 ;
-(void)_initializeGreedyClustererOptions:(id)arg1 ;
@end

