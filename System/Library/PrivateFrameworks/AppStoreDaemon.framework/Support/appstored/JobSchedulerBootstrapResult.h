/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface JobSchedulerBootstrapResult : NSObject {

	long long _jobID;
	NSError* _error;
	unsigned long long _order;
	long long _priority;
	unsigned long long _result;

}

@property (assign,nonatomic) long long jobID;                        //@synthesize jobID=_jobID - In the implementation block
@property (nonatomic,copy) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long order;               //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) long long priority;                     //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned long long result;              //@synthesize result=_result - In the implementation block
+(id)newResultForPID:(long long)arg1 withOrder:(unsigned long long)arg2 priority:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)result;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)order;
-(void)setResult:(unsigned long long)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(long long)jobID;
-(void)setJobID:(long long)arg1 ;
-(id)_humanReadableResult;
-(BOOL)isEqualToBootstrapResult:(id)arg1 ;
@end

