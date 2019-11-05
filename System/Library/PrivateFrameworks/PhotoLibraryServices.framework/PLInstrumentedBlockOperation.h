/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation {

	BOOL _postambleAdded;
	double _creationTime;
	double _executionStartTime;
	double _executionEndTime;

}

@property (assign,nonatomic) double creationTime;                           //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) double executionStartTime;                     //@synthesize executionStartTime=_executionStartTime - In the implementation block
@property (assign,nonatomic) double executionEndTime;                       //@synthesize executionEndTime=_executionEndTime - In the implementation block
@property (assign,nonatomic) BOOL postambleAdded;                           //@synthesize postambleAdded=_postambleAdded - In the implementation block
@property (nonatomic,readonly) double timeSpentWaitingInQueue; 
@property (nonatomic,readonly) double executionTime; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)init;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(double)creationTime;
-(void)setCreationTime:(double)arg1 ;
-(double)executionTime;
-(double)timeSpentWaitingInQueue;
-(double)executionStartTime;
-(void)setExecutionStartTime:(double)arg1 ;
-(double)executionEndTime;
-(void)setExecutionEndTime:(double)arg1 ;
-(BOOL)postambleAdded;
-(void)setPostambleAdded:(BOOL)arg1 ;
@end

